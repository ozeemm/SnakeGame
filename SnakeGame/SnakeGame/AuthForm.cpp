#include "iostream"
#include "AuthForm.h"
#include "MainMenuForm.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

bool isLoginMode = true; // ����� ����������� ��� �����������
bool isPasswordHidden = true; // ������ �� ������?
bool isRepeatPasswordHidden = true;

// ��� ������� �����
void SnakeGame::AuthForm::AuthForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	ReadUsers();
}

// ������ �����
void SnakeGame::AuthForm::EnterButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ErrorText->Text = "";

	if (isLoginMode)
		LoginPlayer();
	else
		RegisterPlayer();
}

// ����������� ������������
void SnakeGame::AuthForm::LoginPlayer() {
	auto login = LoginTextBox->Text; // �������� ��� ������
	auto password = PasswordTextBox->Text; // �������� ������
	bool isFound = false; // ������ �� ������������
	bool accessAllowed = false; // �������� �� ������

	if (login->Length == 0)
		return;

	if (login[0] == ' ') {
		ErrorText->Text = "������������ ��� ������������";
		return;
	}

	for (int i = 0; i < usersNum; i++) {
		if (login == allUsers[i]->name) {
			currentUser = allUsers[i];
			isFound = true;
			break;
		}
	}

	// ������ �� ������������
	if (!isFound) {
		ErrorText->Text = "������������ � ����� ������ �� ������";
		return;
	}

	// ���������� �� ������
	accessAllowed = (password == currentUser->password);
	if (!accessAllowed) {
		ErrorText->Text = "�������� ������";
		return;
	}

	// ��� �������� �����
	this->Hide();
	auto mainMenuForm = gcnew SnakeGame::MainMenuForm;
	mainMenuForm->Show();
}

// ����������� ������������
void SnakeGame::AuthForm::RegisterPlayer() {
	auto login = LoginTextBox->Text;
	auto password = PasswordTextBox->Text;
	auto repeatPassword = RepeatPasswordTextBox->Text;

	if (login->Length == 0 || password->Length == 0)
		return;

	if (login[0] == ' ') {
		ErrorText->Text = "��� ������������ �� ����� ���������� � �������";
		return;
	}
	if (password[0] == ' ') {
		ErrorText->Text = "������ �� ����� ���������� � �������";
		return;
	}

	if (password != repeatPassword) {
		ErrorText->Text = "������ �� ���������";
		return;
	}

	for(int i = 0; i < usersNum; i++)
	{
		if (login == allUsers[i]->name) {
			ErrorText->Text = "������������ � ����� ������ ��� ����������";
			return;
		}
	}

	// ������ ������ ������������ � ����
	FileStream^ fs = gcnew FileStream(fileName, FileMode::OpenOrCreate);
	BinaryWriter^ w = gcnew BinaryWriter(fs);

	w->BaseStream->Position = w->BaseStream->Length; // ������ � ����� �����

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

	currentUser = allUsers[usersNum - 1]; // ��������� ������������ � ������ ������������� - ����� ������������

	this->Hide();
	auto mainMenuForm = gcnew SnakeGame::MainMenuForm;
	mainMenuForm->Show();
}

// ������ ������������� � ������ � ������
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

// ���������� "���������" ������������� �� ������������� ����� �� ��������
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

// ���������� �������������
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

// �������� ��������� � ���������
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

// ������������ ����������� � �����������
void SnakeGame::AuthForm::SwitchAuthButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	isLoginMode = !isLoginMode;

	// ��������� ������
	if (isLoginMode) 
	{
		this->Text = "�����������";
		AuthText->Text = "�����������";
		EnterButton->Text = "����� � �������";
		SwitchAuthButton->Text = "�����������";
	}
	else 
	{
		this->Text = "�����������";
		AuthText->Text = "�����������";
		EnterButton->Text = "������������������";
		SwitchAuthButton->Text = "�����������";
	}

	// ����� ���� ����� �����
	LoginTextBox->Clear();
	PasswordTextBox->Clear();
	RepeatPasswordTextBox->Clear();

	// ����������� ��������������� ���� � �������
	RepeatPasswordText->Visible = !isLoginMode;
	RepeatPasswordTextBox->Visible = !isLoginMode;
	ShowPasswordButton2->Visible = !isLoginMode;

	// ����� ����������� ������
	if (!isPasswordHidden)
		ShowPasswordButton1_Click(sender, e);
	if (!isRepeatPasswordHidden)
		ShowPasswordButton2_Click(sender, e);

	// ����� ������ �� ������
	ErrorText->Text = "";
}

// ������ ����������� ������
void SnakeGame::AuthForm::ShowPasswordButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	isPasswordHidden = !isPasswordHidden;
	if (isPasswordHidden) {
		PasswordTextBox->UseSystemPasswordChar = true;
		ShowPasswordButton1->Text = "��������";
	}
	else {
		PasswordTextBox->UseSystemPasswordChar = false;
		ShowPasswordButton1->Text = "������";
	}
}

// ������ ������ ����������� ������
void SnakeGame::AuthForm::ShowPasswordButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	isRepeatPasswordHidden = !isRepeatPasswordHidden;
	if (isRepeatPasswordHidden) {
		RepeatPasswordTextBox->UseSystemPasswordChar = true;
		ShowPasswordButton2->Text = "��������";
	}
	else {
		RepeatPasswordTextBox->UseSystemPasswordChar = false;
		ShowPasswordButton2->Text = "������";
	}
}
