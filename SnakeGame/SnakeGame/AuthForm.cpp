#include "iostream"
#include "AuthForm.h"
#include "MainMenuForm.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

bool isLoginMode = true; // Режим авторизации или регистрации
bool isPasswordHidden = true; // Скрыты ли пароли?
bool isRepeatPasswordHidden = true;

// При запуске формы
void SnakeGame::AuthForm::AuthForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	ReadUsers();
}

// Кнопка входа
void SnakeGame::AuthForm::EnterButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ErrorText->Text = "";

	if (isLoginMode)
		LoginPlayer();
	else
		RegisterPlayer();
}

// Авторизация пользователя
void SnakeGame::AuthForm::LoginPlayer() {
	auto login = LoginTextBox->Text; // Введённое имя игрока
	auto password = PasswordTextBox->Text; // Введённый пароль
	bool isFound = false; // Найден ли пользователь
	bool accessAllowed = false; // Разрешён ли доступ

	if (login->Length == 0)
		return;

	if (login[0] == ' ') {
		ErrorText->Text = "Некорректное имя пользователя";
		return;
	}

	for (int i = 0; i < usersNum; i++) {
		if (login == allUsers[i]->name) {
			currentUser = allUsers[i];
			isFound = true;
			break;
		}
	}

	// Найден ли пользователь
	if (!isFound) {
		ErrorText->Text = "Пользователь с таким именем не найден";
		return;
	}

	// Правильный ли пароль
	accessAllowed = (password == currentUser->password);
	if (!accessAllowed) {
		ErrorText->Text = "Неверный пароль";
		return;
	}

	// При успешном входе
	this->Hide();
	auto mainMenuForm = gcnew SnakeGame::MainMenuForm;
	mainMenuForm->Show();
}

// Регистрация пользователя
void SnakeGame::AuthForm::RegisterPlayer() {
	auto login = LoginTextBox->Text;
	auto password = PasswordTextBox->Text;
	auto repeatPassword = RepeatPasswordTextBox->Text;

	if (login->Length == 0 || password->Length == 0)
		return;

	if (login[0] == ' ') {
		ErrorText->Text = "Имя пользователя не может начинаться с пробела";
		return;
	}
	if (password[0] == ' ') {
		ErrorText->Text = "Пароль не может начинаться с пробела";
		return;
	}

	if (password != repeatPassword) {
		ErrorText->Text = "Пароли не совпадают";
		return;
	}

	for(int i = 0; i < usersNum; i++)
	{
		if (login == allUsers[i]->name) {
			ErrorText->Text = "Пользователь с таким именем уже существует";
			return;
		}
	}

	// Запись нового пользователя в файл
	FileStream^ fs = gcnew FileStream(fileName, FileMode::OpenOrCreate);
	BinaryWriter^ w = gcnew BinaryWriter(fs);

	w->BaseStream->Position = w->BaseStream->Length; // Запись в конец файла

	currentUser->name = login;
	currentUser->password = password;
	currentUser->bestScore = 0;

	w->Write(login);
	w->Write(password);
	w->Write(0);
	for (int i = 0; i < 5; i++) {
		w->Write(-1);
		currentUser->lastGames[i] = -1;
	}

	fs->Close();

	ReadUsers();

	currentUser = allUsers[usersNum - 1]; // Последний пользователь в списке пользователей - новый пользователь

	this->Hide();
	auto mainMenuForm = gcnew SnakeGame::MainMenuForm;
	mainMenuForm->Show();
}

// Чтение пользователей и запись в массив
void SnakeGame::AuthForm::ReadUsers()
{
	DebugText->Text = "";

	allUsers->Clear;
	usersNum = 0;

	FileStream^ fs = gcnew FileStream(fileName, FileMode::OpenOrCreate);
	BinaryReader^ br = gcnew BinaryReader(fs);

	while (br->BaseStream->Position < br->BaseStream->Length)
	{
		tempUser = gcnew User;
		tempUser->name = br->ReadString();
		tempUser->password = br->ReadString();
		tempUser->bestScore = br->ReadInt32();
		for (int i = 0; i < 5; i++)
			tempUser->lastGames[i] = br->ReadInt32();

		usersNum++;
		allUsers->Resize(allUsers, usersNum);
		allUsers[usersNum - 1] = tempUser;
	}

	fs->Close();

	DebugText->Text = usersNum + " Users: ";

	for(int i = 0; i < usersNum; i++)
	{
		DebugText->Text += allUsers[i]->name + " " + allUsers[i]->password + " " + allUsers[i]->bestScore + " ";
		for (int j = 0; j < 5; j++)
			DebugText->Text += allUsers[i]->lastGames[j] + " ";
		DebugText->Text += "| ";
	}
}

// Сортировка "пузырьком" пользователей по максимальному счёту по убыванию
void SnakeGame::AuthForm::SortUsers()
{
	for (int i = 0; i < usersNum - 1; i++) {
		for (int j = 0; j < usersNum - i - 1; j++) {
			if (allUsers[j]->bestScore < allUsers[j + 1]->bestScore) {
				// swap
				User^ temp = gcnew User;
				temp = allUsers[i];
				allUsers[i] = allUsers[i + 1];
				allUsers[i + 1] = temp;
			}
		}
	}
}

// Сохранение пользователей
void SnakeGame::AuthForm::SaveUsers() {

	FileStream^ fs = gcnew FileStream(fileName, FileMode::OpenOrCreate);
	BinaryWriter^ w = gcnew BinaryWriter(fs);

	for(int i = 0; i < usersNum; i++)
	{
		w->Write(allUsers[i]->name);
		w->Write(allUsers[i]->password);
		w->Write(allUsers[i]->bestScore);
		for (int j = 0; j < 5; j++)
			w->Write(allUsers[i]->lastGames[j]);
	}

	fs->Close();
}

// Добавить результат и сохранить
void SnakeGame::AuthForm::AddGameResult(int res)
{
	for (int i = 4; i > 0; i--) {
		currentUser->lastGames[i] = currentUser->lastGames[i - 1];
	}
	currentUser->lastGames[0] = res;

	if (res > currentUser->bestScore)
		currentUser->bestScore = res;

	SaveUsers();
} 

// Переключение авторизации и регистрации
void SnakeGame::AuthForm::SwitchAuthButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	isLoginMode = !isLoginMode;

	// Изменение текста
	if (isLoginMode) 
	{
		this->Text = "Авторизация";
		AuthText->Text = "Авторизация";
		EnterButton->Text = "Войти в профиль";
		SwitchAuthButton->Text = "Регистрация";
	}
	else 
	{
		this->Text = "Регистрация";
		AuthText->Text = "Регистрация";
		EnterButton->Text = "Зарегистрироваться";
		SwitchAuthButton->Text = "Авторизация";
	}

	// Сброс всех полей ввода
	LoginTextBox->Clear();
	PasswordTextBox->Clear();
	RepeatPasswordTextBox->Clear();

	// Отображение дополнительного поля с паролем
	RepeatPasswordText->Visible = !isLoginMode;
	RepeatPasswordTextBox->Visible = !isLoginMode;
	ShowPasswordButton2->Visible = !isLoginMode;

	// Сброс отображения пароля
	if (!isPasswordHidden)
		ShowPasswordButton1_Click(sender, e);
	if (!isRepeatPasswordHidden)
		ShowPasswordButton2_Click(sender, e);

	// Сброс текста об ошибке
	ErrorText->Text = "";
}

// Кнопка отображения пароля
void SnakeGame::AuthForm::ShowPasswordButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	isPasswordHidden = !isPasswordHidden;
	if (isPasswordHidden) {
		PasswordTextBox->UseSystemPasswordChar = true;
		ShowPasswordButton1->Text = "Показать";
	}
	else {
		PasswordTextBox->UseSystemPasswordChar = false;
		ShowPasswordButton1->Text = "Скрыть";
	}
}

// Вторая кнопка отображения пароля
void SnakeGame::AuthForm::ShowPasswordButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	isRepeatPasswordHidden = !isRepeatPasswordHidden;
	if (isRepeatPasswordHidden) {
		RepeatPasswordTextBox->UseSystemPasswordChar = true;
		ShowPasswordButton2->Text = "Показать";
	}
	else {
		RepeatPasswordTextBox->UseSystemPasswordChar = false;
		ShowPasswordButton2->Text = "Скрыть";
	}
}
