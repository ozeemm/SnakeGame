using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

#include "iostream"

#include "GameForm.h"
#include "AuthForm.h"
#include "GameSettingsForm.h"

// Структура вектора в двухмерном пространстве
struct Vector2 {
	int x, y;
};

const int step = 30; // Шаг (количество проходимых единиц за интервал времени, равен размеру элемента змейки)
const int snakeElementSize = 25; // Размер элемента змейки

Vector2 direction; // Направление движения
Vector2 currentPosition; // Текущая позиция головы змейки
int score = 0; // Счёт
int length = 1; // Длина змейки
bool canMove = true; // Для завершения игры
bool isPaused = false; // На паузе ли игра
bool askOnLeave = true; // Нужно ли диалоговое окно при закрытии формы
//bool walls = false; // Включены ли стены (not working)
//bool isWallsSpawned = false; // Сгенерированы ли стены

// Перезапуск/запуск уровня
void SnakeGame::GameForm::RestartGame()
{
	// Очистка игровой зоны
	if (!isFirstLaunch) {
		// Удаление еды
		Controls->Remove(food);

		// Удаление элементов змейки
		auto snakeElements = Controls->Find("Snake", false); 
		for (int i = 0; i < length; i++) {
			Controls->Remove(snakeElements[i]);
		}

		// Удаление стен при необходимости
		//if (isWallsSpawned) {
		//	auto walls = Controls->Find("Wall", false);
		//	for (int i = 0; i < length; i++) {
		//		Controls->Remove(walls[i]);
		//	}
		//}
	}

	isFirstLaunch = false;
	//if(walls)
	//	SpawnWalls();
	// Установка начальных параметров
	direction = { 1, 0 };
	currentPosition = { 250, 420 };
	length = 1;
	score = 0;
	canMove = true;
	isPaused = false;
	askOnLeave = true;
	Timer->Interval = updateTime;
	Timer->Start();

	// Создание еды
	food = gcnew PictureBox();
	food->BackColor = foodColor;
	food->Width = snakeElementSize;
	food->Height = snakeElementSize;
	Controls->Add(food); // Добавление элемента еды

	// Создание головы змейки
	SnakeElement = gcnew PictureBox();
	SnakeElement->Location = Point(currentPosition.x, currentPosition.y);
	SnakeElement->BackColor = snakeHeadColor;
	SnakeElement->Width = snakeElementSize;
	SnakeElement->Height = snakeElementSize;
	SnakeElement->Name = "Snake";
	Controls->Add(SnakeElement); // Добавление элемента змейки на форму

	SnakeHead = Controls->Find("Snake", false)[0]; // Инициализация переменной, отвечающей за голову змейки

	паузаToolStripMenuItem->Checked = isPaused;

	GenerateFood();
}

// Пауза
void SnakeGame::GameForm::PauseGame() {
	isPaused = !isPaused;
	if (isPaused) {
		Timer->Stop();
	}
	else {
		Timer->Start();
	}
	паузаToolStripMenuItem->Checked = isPaused;
	UpdateStatusBar();
}

// Генерация еды
void SnakeGame::GameForm::GenerateFood() {
	Vector2 FoodPosition;

	// Сгенерировалась ли еда в змейке?
	bool isTouchingSnake = false;
	do {
		isTouchingSnake = false;
		FoodPosition.x = 30 * (rand() % 26) + 10;
		FoodPosition.y = 30 * (rand() % 21) + 90;

		auto snakeElements = Controls->Find("Snake", false);
		for (int i = 0; i < length; i++) {
			if (FoodPosition.x == snakeElements[i]->Location.X && FoodPosition.y == snakeElements[i]->Location.Y)
				isTouchingSnake = true;
		}
	} while (isTouchingSnake);

	food->Location = Point(FoodPosition.x, FoodPosition.y);
}

// Проигрыш
void SnakeGame::GameForm::GameOver()
{
	// Остановка движения
	canMove = false;

	// Добавление результата
	if(score > 0)
		AuthForm::AddGameResult(score);

	// Формирование диалогового окна
	String^ caption = "Проигрыш";
	String^ message = "Вы проиграли!\nСчёт: " + score + "\nХотите переиграть?";
	MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

	if (result == ::DialogResult::OK) {
		RestartGame();
	}
	if (result == ::DialogResult::Cancel) {
		askOnLeave = false;
		Timer->Stop();
		this->Close();
	}
}

// Генерация стен
void SnakeGame::GameForm::SpawnWalls() 
{
	/*isWallsSpawned = true;*/
	for (int i = 0; i < 12; i++) {
		wall = gcnew PictureBox();
		wall->Location = Point(10 + step * i, 360);
		wall->BackColor = Color::Black;
		wall->Width = step;
		wall->Height = step;
		wall->Name = "Wall";
		Controls->Add(wall);
	}
	for (int i = 1; i < 10; i++) {
		wall = gcnew PictureBox();
		wall->Location = Point(340, 360 - step * i);
		wall->BackColor = Color::Black;
		wall->Width = step;
		wall->Height = step;
		wall->Name = "Wall";
		Controls->Add(wall);
	}
	for (int i = 0; i < 8; i++) {
		wall = gcnew PictureBox();
		wall->Location = Point(760 - step * i, 510);
		wall->BackColor = Color::Black;
		wall->Width = step;
		wall->Height = step;
		wall->Name = "Wall";
		Controls->Add(wall);
	}
	for (int i = 1; i < 7; i++) {
		wall = gcnew PictureBox();
		wall->Location = Point(550, 510 + step*i);
		wall->BackColor = Color::Black;
		wall->Width = step;
		wall->Height = step;
		wall->Name = "Wall";
		Controls->Add(wall);
	}
	
}

// Обновление строки состояния
void SnakeGame::GameForm::UpdateStatusBar() {
	StatusBarCoord->Text = "Координаты головы змейки: (" + SnakeHead->Location.X + ", " + SnakeHead->Location.Y + ")";
	StatusBarScore->Text = "Счёт: " + score;
	StatusBarBorders->Text = "Границы: " + (borders ? "Включены" : "Выключены");
	StatusBarPause->Text = "Пауза: " + (isPaused ? "Включена" : "Выключена");
}

// При создании формы (Start)
void SnakeGame::GameForm::GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));

	RestartGame();
}

// Действия, происходящие раз в интервал времени (Update)
void SnakeGame::GameForm::Timer_Tick(System::Object^ sender, System::EventArgs^ e) {	
	if (canMove)
	{
		auto snakeElements = Controls->Find("Snake", false);

		currentPosition.x += direction.x * step;
		currentPosition.y += direction.y * step;

		// Обработка границ
		if (borders) {
			// Обработка выхода за границы
			if ((currentPosition.x <= LeftBorder->Location.X) || (currentPosition.x >= RightBorder->Location.X) || (currentPosition.y <= UpBorder->Location.Y) || (currentPosition.y >= DownBorder->Location.Y))
				GameOver();
		}
		else {
			// Обработка перемещения между границами
			if (currentPosition.x <= LeftBorder->Location.X)
				currentPosition.x += RightBorder->Location.X - LeftBorder->Location.X;

			if (currentPosition.x >= RightBorder->Location.X)
				currentPosition.x -= RightBorder->Location.X - LeftBorder->Location.X;

			if (currentPosition.y <= UpBorder->Location.Y)
				currentPosition.y += DownBorder->Location.Y - UpBorder->Location.Y;

			if(currentPosition.y >= DownBorder->Location.Y)
				currentPosition.y -= DownBorder->Location.Y - UpBorder->Location.Y;
		}

		// Обработка столкновения с хвостом
		for (int i = 0; i < length; i++) {
			if (currentPosition.x == snakeElements[i]->Location.X && currentPosition.y == snakeElements[i]->Location.Y)
				GameOver();
		}

		// Обработка столкновения с стенами
		//if (walls) 
		//{
		//	auto wallsList = Controls->Find("Wall", false);
		//	for (int i = 0; i < length; i++) {
		//		if (currentPosition.x == wallsList[i]->Location.X && currentPosition.y == wallsList[i]->Location.Y)
		//			GameOver();
		//	}
		//}

		// Перемещение змейки и её хвоста
		if (canMove) 
		{			
			for (int i = length-1; i > 0; i--) {
				snakeElements[i]->Location = snakeElements[i - 1]->Location;
			}

			SnakeHead->Location = Point(currentPosition.x, currentPosition.y);
		}

		// Обработка поедания
		if (SnakeHead->Location == food->Location)
		{
			score++;
			length++;

			// Создание нового элемента змейки
			SnakeElement = gcnew PictureBox();
			SnakeElement->Location = Point(currentPosition.x, currentPosition.y);
			SnakeElement->BackColor = snakeElementsColor;
			SnakeElement->Width = snakeElementSize;
			SnakeElement->Height = snakeElementSize;
			SnakeElement->Name = "Snake";
			Controls->Add(SnakeElement);

			GenerateFood();
		}
	}
	UpdateStatusBar();
	CoordText->Text = "Счёт: " + score;
}

// Обработка нажатий клавиш
void SnakeGame::GameForm::GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	// Вверх
	if (e->KeyCode == Keys::W || e->KeyCode == Keys::Up) {
		if (direction.y != 1)
			direction = { 0, -1 };
	}

	// Вниз
	if (e->KeyCode == Keys::S || e->KeyCode == Keys::Down) {
		if (direction.y != -1)
			direction = { 0, 1 };
	}

	// Вправо
	if (e->KeyCode == Keys::D || e->KeyCode == Keys::Right) {
		if (direction.x != -1)
			direction = { 1, 0 };
	}

	// Влево
	if (e->KeyCode == Keys::A || e->KeyCode == Keys::Left) {
		if (direction.x != 1)
			direction = { -1, 0 };
	}
}

// Кнопка "Пауза"
void SnakeGame::GameForm::паузаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	PauseGame();
}

// Кнопка "Рестарт"
void SnakeGame::GameForm::перезапускToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RestartGame();
}

// Открыть изменение настроек
void SnakeGame::GameForm::SettingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isPaused) {
			PauseGame();
		}
		GameSettingsForm settingsForm;

		if (settingsForm.ShowDialog() == ::DialogResult::OK) {
			// Применение настроек
			Timer->Interval = updateTime;
			food->BackColor = foodColor;

			auto snakeElements = Controls->Find("Snake", false);
			for (int i = 0; i < length; i++)
				snakeElements[i]->BackColor = snakeElementsColor;
			SnakeHead->BackColor = snakeHeadColor;

			PauseGame();
		}
}

// При закрытии формы
void SnakeGame::GameForm::GameForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (askOnLeave) {
		if (!isPaused)
			PauseGame();

		// Формирование диалогового окна
		String^ caption = "Закрытие игры";
		String^ message = "Вы уверены, что хотите закончить игру?\nРезультат игры будет потерян.";
		MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
		System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

		if (result == ::DialogResult::OK) {
			Timer->Stop();
		}
		if (result == ::DialogResult::Cancel) {
			e->Cancel = true;
			if (isPaused)
				PauseGame();
		}
	}
}