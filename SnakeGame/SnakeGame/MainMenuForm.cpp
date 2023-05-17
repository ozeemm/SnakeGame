#include "MainMenuForm.h"
#include "AuthForm.h"
#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

// ��� ������� �����
void SnakeGame::MainMenuForm::MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	toolStripStatusLabel->Text = "�� ������������ ��� \"" + AuthForm::currentUser->name + "\"";
}

// ������ "������"
void SnakeGame::MainMenuForm::PlayButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if(currentMenu == MenuType::MainMenu)
		SwitchMenu(MenuType::DifficultyMenu);
	else if (currentMenu == MenuType::DifficultyMenu) {
		LoadGame(Difficulty::Easy);
	}
}

// ������ "����������"
void SnakeGame::MainMenuForm::StatButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (currentMenu == MenuType::MainMenu)
		SwitchMenu(MenuType::StatMenu);
	else if (currentMenu == MenuType::DifficultyMenu) {
		LoadGame(Difficulty::Medium);
	}
}

// ������ "�������"
void SnakeGame::MainMenuForm::InfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (currentMenu == MenuType::MainMenu) {
		Diagnostics::Process::Start("Info.chm"); // ������� ���� �������
		
	}
	else if (currentMenu == MenuType::DifficultyMenu) {
		LoadGame(Difficulty::Hard);
	}
}

// ������ "�����"
void SnakeGame::MainMenuForm::ExitButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// ������������ ����������� ����
	String^ caption = "�����";
	String^ message = "�� �������, ��� ������ ����� �� ����?";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

	if (result == ::DialogResult::Yes) {
		Application::OpenForms[0]->Close(); // �������� ��������� ����� (��� ���������� - ����� ����������)
	}
}

// ������ "�����"
void SnakeGame::MainMenuForm::BackButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	SwitchMenu(MenuType::MainMenu);
}

// ������ "� ���������"
void SnakeGame::MainMenuForm::AboutButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ caption = "� ���������";
	String^ message = "���� \"������\"\n������: 1.0\n���� �������� ��������� ���������: 15.05.2023\n�����: �������� ����� ���������, ������� ������ ����-22-1";
	MessageBox::Show(message, caption);
}

// ��������� ����������
void SnakeGame::MainMenuForm::GenerateStats()
{
	// ������ ����
	BestScoreNum->Text = AuthForm::currentUser->bestScore.ToString();

	// ������� ����
	LastGamesList->Text = "";
	for (int i = 0; i < 5; i++) {
		if(AuthForm::currentUser->lastGames[i] != -1)
			LastGamesList->Text += (i + 1) + ") " + AuthForm::currentUser->lastGames[i] + "\n";
	}

	// ��� �������
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

// ����� ������� �� �����
void SnakeGame::MainMenuForm::SwitchMenu(MenuType menuType)
{
	switch (menuType)
	{
		case MenuType::StatMenu:
			Header->Text = "����������";
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
			Header->Text = "���������";
			PlayButton->Text = "˸����";
			StatButton->Text = "�������";
			InfoButton->Text = "�������";
			ExitButton->Visible = false;
			AboutButton->Visible = false;
			BackButton->Visible = true;
			break;

		case MenuType::MainMenu:
			Header->Text = "������� ����";
			if (currentMenu == MenuType::DifficultyMenu) {				
				PlayButton->Text = "������";
				StatButton->Text = "����������";
				InfoButton->Text = "�������";
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

// ������ �������� ����
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

// ����� ��������� ���� (������� �� �������)
void SnakeGame::MainMenuForm::MainMenuForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	// ������������ ����������� ����
	String^ caption = "�����";
	String^ message = "�� �������, ��� ������ ����� �� ����?";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

	if (result == ::DialogResult::Yes) {
		Application::OpenForms[0]->Close(); // �������� ��������� ����� (��� ���������� - ����� ����������)
	}
	else
		e->Cancel = true;
}