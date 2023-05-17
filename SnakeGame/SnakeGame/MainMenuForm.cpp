#include "MainMenuForm.h"
#include "AuthForm.h"
#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

// При запуске формы
void SnakeGame::MainMenuForm::MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	toolStripStatusLabel->Text = "Вы авторизованы как \"" + AuthForm::currentUser->name + "\"";
}

// Кнопка "Играть"
void SnakeGame::MainMenuForm::PlayButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if(currentMenu == MenuType::MainMenu)
		SwitchMenu(MenuType::DifficultyMenu);
	else if (currentMenu == MenuType::DifficultyMenu) {
		LoadGame(Difficulty::Easy);
	}
}

// Кнопка "Статистика"
void SnakeGame::MainMenuForm::StatButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (currentMenu == MenuType::MainMenu)
		SwitchMenu(MenuType::StatMenu);
	else if (currentMenu == MenuType::DifficultyMenu) {
		LoadGame(Difficulty::Medium);
	}
}

// Кнопка "Справка"
void SnakeGame::MainMenuForm::InfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (currentMenu == MenuType::MainMenu) {
		Diagnostics::Process::Start("Info.chm"); // Открыть окно справки
		
	}
	else if (currentMenu == MenuType::DifficultyMenu) {
		LoadGame(Difficulty::Hard);
	}
}

// Кнопка "Выход"
void SnakeGame::MainMenuForm::ExitButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// Формирование диалогового окна
	String^ caption = "Выход";
	String^ message = "Вы уверены, что хотите выйти из игры?";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

	if (result == ::DialogResult::Yes) {
		Application::OpenForms[0]->Close(); // Закрытие начальной формы (как следиствие - всего приложения)
	}
}

// Кнопка "Назад"
void SnakeGame::MainMenuForm::BackButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	SwitchMenu(MenuType::MainMenu);
}

// Кнопка "О программе"
void SnakeGame::MainMenuForm::AboutButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ caption = "О программе";
	String^ message = "Игра \"Змейка\"\nВерсия: 1.0\nДата внесения последних изменений: 15.05.2023\nАвтор: Патрушев Денис Романович, студент группы ИСТб-22-1";
	MessageBox::Show(message, caption);
}

// Генерация статистики
void SnakeGame::MainMenuForm::GenerateStats()
{
	// Лучший счёт
	BestScoreNum->Text = AuthForm::currentUser->bestScore.ToString();

	// Прошлые игры
	LastGamesList->Text = "";
	for (int i = 0; i < 5; i++) {
		if(AuthForm::currentUser->lastGames[i] != -1)
			LastGamesList->Text += (i + 1) + ") " + AuthForm::currentUser->lastGames[i] + "\n";
	}

	// Топ игроков
	BestPlayerList->Text = "";
	AuthForm::SortUsers();
	for (int i = 0; i < 10; i++) {
		BestPlayerList->Text += (i+1) + ". ";
		if (i < AuthForm::usersNum) {
			BestPlayerList->Text += AuthForm::allUsers[i]->name + ": " + AuthForm::allUsers[i]->bestScore;
		}
		BestPlayerList->Text += "\n";
	}
}

// Смена менюшек на форме
void SnakeGame::MainMenuForm::SwitchMenu(MenuType menuType)
{
	switch (menuType)
	{
		case MenuType::StatMenu:
			Header->Text = "Статистика";
			GenerateStats();
			BestScoreText->Visible = true;
			BestScoreNum->Visible = true;
			LastGamesText->Visible = true;			
			LastGamesList->Visible = true;
			BestPlayersText->Visible = true;
			BestPlayerList->Visible = true;

			PlayButton->Visible = false;
			StatButton->Visible = false;
			InfoButton->Visible = false;
			ExitButton->Visible = false;
			AboutButton->Visible = false;
			
			BackButton->Visible = true;
			break;

		case MenuType::DifficultyMenu:
			Header->Text = "Сложность";
			PlayButton->Text = "Лёгкая";
			StatButton->Text = "Средняя";
			InfoButton->Text = "Сложная";
			ExitButton->Visible = false;
			AboutButton->Visible = false;
			BackButton->Visible = true;
			break;

		case MenuType::MainMenu:
			Header->Text = "Главное меню";
			if (currentMenu == MenuType::DifficultyMenu) {				
				PlayButton->Text = "Играть";
				StatButton->Text = "Статистика";
				InfoButton->Text = "Справка";
			}
			else {
				BestScoreText->Visible = false;
				BestScoreNum->Visible = false;
				LastGamesText->Visible = false;
				LastGamesList->Visible = false;
				BestPlayersText->Visible = false;
				BestPlayerList->Visible = false;

				PlayButton->Visible = true;
				StatButton->Visible = true;
				InfoButton->Visible = true;
				ExitButton->Visible = true;
			}
			BackButton->Visible = false;
			ExitButton->Visible = true;
			AboutButton->Visible = true;
			break;
	}

	currentMenu = menuType;
}

// Запуск основной игры
void SnakeGame::MainMenuForm::LoadGame(Difficulty difficulty)
{
	switch (difficulty) 
	{
		case Difficulty::Easy:
			GameForm::updateTime = 150;
			break;	

		case Difficulty::Medium:
			GameForm::updateTime = 100;
			break;

		case Difficulty::Hard:
			GameForm::updateTime = 50;
			break;
	}

	GameForm::isFirstLaunch = true;

	auto gameForm = gcnew SnakeGame::GameForm();
	SwitchMenu(MenuType::MainMenu);
	gameForm->ShowDialog();
}

// Перед закрытием окна (нажатие на крестик)
void SnakeGame::MainMenuForm::MainMenuForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	// Формирование диалогового окна
	String^ caption = "Выход";
	String^ message = "Вы уверены, что хотите выйти из игры?";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

	if (result == ::DialogResult::Yes) {
		Application::OpenForms[0]->Close(); // Закрытие начальной формы (как следиствие - всего приложения)
	}
	else
		e->Cancel = true;
}