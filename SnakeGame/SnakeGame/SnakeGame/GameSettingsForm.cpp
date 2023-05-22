#include "GameSettingsForm.h"
#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

// ��� ������� �����
void SnakeGame::GameSettingsForm::GameSettingsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	HeadColor->BackColor = GameForm::snakeHeadColor;
	TailColor->BackColor = GameForm::snakeElementsColor;
	FoodColor->BackColor = GameForm::foodColor;
	BordersCheckBox->Checked = GameForm::borders;
	UpdateTimeInput->Value = GameForm::updateTime;
}

// ��������� ����� ������
void SnakeGame::GameSettingsForm::HeadColor_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (colorDialog->ShowDialog() == ::DialogResult::OK) {
		HeadColor->BackColor = colorDialog->Color;
	}
}

// ��������� ����� ������
void SnakeGame::GameSettingsForm::TailColor_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (colorDialog->ShowDialog() == ::DialogResult::OK) {
		TailColor->BackColor = colorDialog->Color;
	}
}

// ��������� ����� ���
void SnakeGame::GameSettingsForm::FoodColor_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (colorDialog->ShowDialog() == ::DialogResult::OK) {
		FoodColor->BackColor = colorDialog->Color;
	}
}

// ������ "��������"
void SnakeGame::GameSettingsForm::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}

// ������ "�������"
void SnakeGame::GameSettingsForm::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	GameForm::snakeHeadColor = HeadColor->BackColor;
	GameForm::snakeElementsColor = TailColor->BackColor;
	GameForm::foodColor = FoodColor->BackColor;
	GameForm::borders = BordersCheckBox->Checked;
	GameForm::updateTime = (int)UpdateTimeInput->Value;
	CancelButton_Click(sender, e);
}

// ��� �������� �����
void SnakeGame::GameSettingsForm::GameSettingsForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	this->DialogResult = ::DialogResult::OK;
}