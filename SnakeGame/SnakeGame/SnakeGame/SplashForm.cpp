#include "SplashForm.h"
#include "AuthForm.h"

using namespace System;
using namespace System::Windows::Forms;

// ������� ����
int frame = 0;


void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SnakeGame::SplashForm splashForm;

	Application::Run(% splashForm);
}

// ��������
void SnakeGame::SplashForm::Timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if(frame == 0)
		SnakeHead->Visible = true; // ������ ���� - ���������
	else if (frame > 0 && frame <= 16) {
		String^ name = "Pixel" + frame;
		auto pixel = Controls->Find(name, false)[0]; // ��� ����������� ������

		SnakeHead->Location = pixel->Location;
		pixel->Visible = true;
	}
	else if (frame == 17) {
		HiderBox->Visible = false;
	}
	else if (frame == 20) {
		// ����������� ��������� �����
		auto authForm = gcnew SnakeGame::AuthForm;
		authForm->Show();
		this->Hide();

		Timer->Stop();
	}

	frame++;

}

// ������� �������� ��� ������� �� Enter
void SnakeGame::SplashForm::SplashForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e){
	if(e->KeyCode == Keys::Enter || e->KeyCode == Keys::Space)
		frame = 20;
}