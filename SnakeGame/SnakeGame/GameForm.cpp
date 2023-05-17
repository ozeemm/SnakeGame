using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

#include "iostream"

#include "GameForm.h"
#include "AuthForm.h"
#include "GameSettingsForm.h"

// ��������� ������� � ���������� ������������
struct Vector2 {
	int x, y;
};

const int step = 30; // ��� (���������� ���������� ������ �� �������� �������, ����� ������� �������� ������)
const int snakeElementSize = 25; // ������ �������� ������

Vector2 direction; // ����������� ��������
Vector2 currentPosition; // ������� ������� ������ ������
int score = 0; // ����
int length = 1; // ����� ������
bool canMove = true; // ��� ���������� ����
bool isPaused = false; // �� ����� �� ����
bool askOnLeave = true; // ����� �� ���������� ���� ��� �������� �����
//bool walls = false; // �������� �� ����� (not working)
//bool isWallsSpawned = false; // ������������� �� �����

// ����������/������ ������
void SnakeGame::GameForm::RestartGame()
{
	// ������� ������� ����
	if (!isFirstLaunch) {
		// �������� ���
		Controls->Remove(food);

		// �������� ��������� ������
		auto snakeElements = Controls->Find("Snake", false); 
		for (int i = 0; i < length; i++) {
			Controls->Remove(snakeElements[i]);
		}

		// �������� ���� ��� �������������
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
	// ��������� ��������� ����������
	direction = { 1, 0 };
	currentPosition = { 250, 420 };
	length = 1;
	score = 0;
	canMove = true;
	isPaused = false;
	askOnLeave = true;
	Timer->Interval = updateTime;
	Timer->Start();

	// �������� ���
	food = gcnew PictureBox();
	food->BackColor = foodColor;
	food->Width = snakeElementSize;
	food->Height = snakeElementSize;
	Controls->Add(food); // ���������� �������� ���

	// �������� ������ ������
	SnakeElement = gcnew PictureBox();
	SnakeElement->Location = Point(currentPosition.x, currentPosition.y);
	SnakeElement->BackColor = snakeHeadColor;
	SnakeElement->Width = snakeElementSize;
	SnakeElement->Height = snakeElementSize;
	SnakeElement->Name = "Snake";
	Controls->Add(SnakeElement); // ���������� �������� ������ �� �����

	SnakeHead = Controls->Find("Snake", false)[0]; // ������������� ����������, ���������� �� ������ ������

	�����ToolStripMenuItem->Checked = isPaused;

	GenerateFood();
}

// �����
void SnakeGame::GameForm::PauseGame() {
	isPaused = !isPaused;
	if (isPaused) {
		Timer->Stop();
	}
	else {
		Timer->Start();
	}
	�����ToolStripMenuItem->Checked = isPaused;
	UpdateStatusBar();
}

// ��������� ���
void SnakeGame::GameForm::GenerateFood() {
	Vector2 FoodPosition;

	// ��������������� �� ��� � ������?
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

// ��������
void SnakeGame::GameForm::GameOver()
{
	// ��������� ��������
	canMove = false;

	// ���������� ����������
	if(score > 0)
		AuthForm::AddGameResult(score);

	// ������������ ����������� ����
	String^ caption = "��������";
	String^ message = "�� ���������!\n����: " + score + "\n������ ����������?";
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

// ��������� ����
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

// ���������� ������ ���������
void SnakeGame::GameForm::UpdateStatusBar() {
	StatusBarCoord->Text = "���������� ������ ������: (" + SnakeHead->Location.X + ", " + SnakeHead->Location.Y + ")";
	StatusBarScore->Text = "����: " + score;
	StatusBarBorders->Text = "�������: " + (borders ? "��������" : "���������");
	StatusBarPause->Text = "�����: " + (isPaused ? "��������" : "���������");
}

// ��� �������� ����� (Start)
void SnakeGame::GameForm::GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));

	RestartGame();
}

// ��������, ������������ ��� � �������� ������� (Update)
void SnakeGame::GameForm::Timer_Tick(System::Object^ sender, System::EventArgs^ e) {	
	if (canMove)
	{
		auto snakeElements = Controls->Find("Snake", false);

		currentPosition.x += direction.x * step;
		currentPosition.y += direction.y * step;

		// ��������� ������
		if (borders) {
			// ��������� ������ �� �������
			if ((currentPosition.x <= LeftBorder->Location.X) || (currentPosition.x >= RightBorder->Location.X) || (currentPosition.y <= UpBorder->Location.Y) || (currentPosition.y >= DownBorder->Location.Y))
				GameOver();
		}
		else {
			// ��������� ����������� ����� ���������
			if (currentPosition.x <= LeftBorder->Location.X)
				currentPosition.x += RightBorder->Location.X - LeftBorder->Location.X;

			if (currentPosition.x >= RightBorder->Location.X)
				currentPosition.x -= RightBorder->Location.X - LeftBorder->Location.X;

			if (currentPosition.y <= UpBorder->Location.Y)
				currentPosition.y += DownBorder->Location.Y - UpBorder->Location.Y;

			if(currentPosition.y >= DownBorder->Location.Y)
				currentPosition.y -= DownBorder->Location.Y - UpBorder->Location.Y;
		}

		// ��������� ������������ � �������
		for (int i = 0; i < length; i++) {
			if (currentPosition.x == snakeElements[i]->Location.X && currentPosition.y == snakeElements[i]->Location.Y)
				GameOver();
		}

		// ��������� ������������ � �������
		//if (walls) 
		//{
		//	auto wallsList = Controls->Find("Wall", false);
		//	for (int i = 0; i < length; i++) {
		//		if (currentPosition.x == wallsList[i]->Location.X && currentPosition.y == wallsList[i]->Location.Y)
		//			GameOver();
		//	}
		//}

		// ����������� ������ � � ������
		if (canMove) 
		{			
			for (int i = length-1; i > 0; i--) {
				snakeElements[i]->Location = snakeElements[i - 1]->Location;
			}

			SnakeHead->Location = Point(currentPosition.x, currentPosition.y);
		}

		// ��������� ��������
		if (SnakeHead->Location == food->Location)
		{
			score++;
			length++;

			// �������� ������ �������� ������
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
	CoordText->Text = "����: " + score;
}

// ��������� ������� ������
void SnakeGame::GameForm::GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	// �����
	if (e->KeyCode == Keys::W || e->KeyCode == Keys::Up) {
		if (direction.y != 1)
			direction = { 0, -1 };
	}

	// ����
	if (e->KeyCode == Keys::S || e->KeyCode == Keys::Down) {
		if (direction.y != -1)
			direction = { 0, 1 };
	}

	// ������
	if (e->KeyCode == Keys::D || e->KeyCode == Keys::Right) {
		if (direction.x != -1)
			direction = { 1, 0 };
	}

	// �����
	if (e->KeyCode == Keys::A || e->KeyCode == Keys::Left) {
		if (direction.x != 1)
			direction = { -1, 0 };
	}
}

// ������ "�����"
void SnakeGame::GameForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	PauseGame();
}

// ������ "�������"
void SnakeGame::GameForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RestartGame();
}

// ������� ��������� ��������
void SnakeGame::GameForm::SettingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isPaused) {
			PauseGame();
		}
		GameSettingsForm settingsForm;

		if (settingsForm.ShowDialog() == ::DialogResult::OK) {
			// ���������� ��������
			Timer->Interval = updateTime;
			food->BackColor = foodColor;

			auto snakeElements = Controls->Find("Snake", false);
			for (int i = 0; i < length; i++)
				snakeElements[i]->BackColor = snakeElementsColor;
			SnakeHead->BackColor = snakeHeadColor;

			PauseGame();
		}
}

// ��� �������� �����
void SnakeGame::GameForm::GameForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (askOnLeave) {
		if (!isPaused)
			PauseGame();

		// ������������ ����������� ����
		String^ caption = "�������� ����";
		String^ message = "�� �������, ��� ������ ��������� ����?\n��������� ���� ����� �������.";
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