#include "GameForm.h"
#include "AuthForm.h"
#include "MainMenuForm.h"
#include "GameSettingsForm.h"
#include "SplashForm.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

void main() {
	// Базовые настройки для запуска формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Запуск формы
	//SnakeGame::GameForm gameForm;
	//SnakeGame::AuthForm authForm;
	//SnakeGame::MainMenuForm mainMenuForm;
	SnakeGame::SplashForm splashForm;

	Application::Run(% splashForm);
}