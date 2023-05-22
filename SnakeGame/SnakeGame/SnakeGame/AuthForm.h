#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AuthForm
	/// </summary>
	public ref class AuthForm : public System::Windows::Forms::Form
	{
	public:
		AuthForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AuthForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AuthText;
	protected:

	private: System::Windows::Forms::Button^ EnterButton;
	protected:

	private: System::Windows::Forms::TextBox^ LoginTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ RepeatPasswordText;

	private: System::Windows::Forms::TextBox^ RepeatPasswordTextBox;
	private: System::Windows::Forms::Button^ ShowPasswordButton1;


	private: System::Windows::Forms::Button^ ShowPasswordButton2;
	private: System::Windows::Forms::Button^ SwitchAuthButton;

	private: System::Windows::Forms::Label^ ErrorText;
	private: System::Windows::Forms::Label^ DebugText;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AuthForm::typeid));
			this->AuthText = (gcnew System::Windows::Forms::Label());
			this->EnterButton = (gcnew System::Windows::Forms::Button());
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RepeatPasswordText = (gcnew System::Windows::Forms::Label());
			this->RepeatPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ShowPasswordButton1 = (gcnew System::Windows::Forms::Button());
			this->ShowPasswordButton2 = (gcnew System::Windows::Forms::Button());
			this->SwitchAuthButton = (gcnew System::Windows::Forms::Button());
			this->ErrorText = (gcnew System::Windows::Forms::Label());
			this->DebugText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AuthText
			// 
			this->AuthText->AutoSize = true;
			this->AuthText->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AuthText->Location = System::Drawing::Point(62, 26);
			this->AuthText->Name = L"AuthText";
			this->AuthText->Size = System::Drawing::Size(357, 60);
			this->AuthText->TabIndex = 0;
			this->AuthText->Text = L"Авторизация";
			this->AuthText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EnterButton
			// 
			this->EnterButton->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EnterButton->Location = System::Drawing::Point(96, 429);
			this->EnterButton->Name = L"EnterButton";
			this->EnterButton->Size = System::Drawing::Size(280, 46);
			this->EnterButton->TabIndex = 1;
			this->EnterButton->Text = L"Войти в профиль";
			this->EnterButton->UseVisualStyleBackColor = true;
			this->EnterButton->Click += gcnew System::EventHandler(this, &AuthForm::EnterButton_Click);
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginTextBox->Location = System::Drawing::Point(37, 139);
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Size = System::Drawing::Size(402, 44);
			this->LoginTextBox->TabIndex = 2;
			this->LoginTextBox->TextChanged += gcnew System::EventHandler(this, &AuthForm::LoginTextBox_TextChanged);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PasswordTextBox->Location = System::Drawing::Point(37, 239);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(402, 44);
			this->PasswordTextBox->TabIndex = 4;
			this->PasswordTextBox->UseSystemPasswordChar = true;
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &AuthForm::PasswordTextBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Имя пользователя:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(33, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Пароль:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// RepeatPasswordText
			// 
			this->RepeatPasswordText->AutoSize = true;
			this->RepeatPasswordText->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RepeatPasswordText->Location = System::Drawing::Point(33, 310);
			this->RepeatPasswordText->Name = L"RepeatPasswordText";
			this->RepeatPasswordText->Size = System::Drawing::Size(192, 28);
			this->RepeatPasswordText->TabIndex = 8;
			this->RepeatPasswordText->Text = L"Повтор пароля:";
			this->RepeatPasswordText->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->RepeatPasswordText->Visible = false;
			// 
			// RepeatPasswordTextBox
			// 
			this->RepeatPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RepeatPasswordTextBox->Location = System::Drawing::Point(37, 339);
			this->RepeatPasswordTextBox->Name = L"RepeatPasswordTextBox";
			this->RepeatPasswordTextBox->Size = System::Drawing::Size(402, 44);
			this->RepeatPasswordTextBox->TabIndex = 7;
			this->RepeatPasswordTextBox->UseSystemPasswordChar = true;
			this->RepeatPasswordTextBox->Visible = false;
			this->RepeatPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &AuthForm::RepeatPasswordTextBox_TextChanged);
			// 
			// ShowPasswordButton1
			// 
			this->ShowPasswordButton1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ShowPasswordButton1->Location = System::Drawing::Point(360, 289);
			this->ShowPasswordButton1->Name = L"ShowPasswordButton1";
			this->ShowPasswordButton1->Size = System::Drawing::Size(79, 23);
			this->ShowPasswordButton1->TabIndex = 9;
			this->ShowPasswordButton1->TabStop = false;
			this->ShowPasswordButton1->Text = L"Показать";
			this->ShowPasswordButton1->UseVisualStyleBackColor = true;
			this->ShowPasswordButton1->Click += gcnew System::EventHandler(this, &AuthForm::ShowPasswordButton1_Click);
			// 
			// ShowPasswordButton2
			// 
			this->ShowPasswordButton2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ShowPasswordButton2->Location = System::Drawing::Point(360, 389);
			this->ShowPasswordButton2->Name = L"ShowPasswordButton2";
			this->ShowPasswordButton2->Size = System::Drawing::Size(79, 23);
			this->ShowPasswordButton2->TabIndex = 10;
			this->ShowPasswordButton2->TabStop = false;
			this->ShowPasswordButton2->Text = L"Показать";
			this->ShowPasswordButton2->UseVisualStyleBackColor = true;
			this->ShowPasswordButton2->Visible = false;
			this->ShowPasswordButton2->Click += gcnew System::EventHandler(this, &AuthForm::ShowPasswordButton2_Click);
			// 
			// SwitchAuthButton
			// 
			this->SwitchAuthButton->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwitchAuthButton->Location = System::Drawing::Point(160, 490);
			this->SwitchAuthButton->Name = L"SwitchAuthButton";
			this->SwitchAuthButton->Size = System::Drawing::Size(156, 29);
			this->SwitchAuthButton->TabIndex = 11;
			this->SwitchAuthButton->Text = L"Регистрация";
			this->SwitchAuthButton->UseVisualStyleBackColor = true;
			this->SwitchAuthButton->Click += gcnew System::EventHandler(this, &AuthForm::SwitchAuthButton_Click);
			// 
			// ErrorText
			// 
			this->ErrorText->AutoSize = true;
			this->ErrorText->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ErrorText->ForeColor = System::Drawing::Color::Red;
			this->ErrorText->Location = System::Drawing::Point(52, 539);
			this->ErrorText->MaximumSize = System::Drawing::Size(420, 0);
			this->ErrorText->Name = L"ErrorText";
			this->ErrorText->Size = System::Drawing::Size(0, 24);
			this->ErrorText->TabIndex = 13;
			this->ErrorText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DebugText
			// 
			this->DebugText->AutoSize = true;
			this->DebugText->Location = System::Drawing::Point(12, 591);
			this->DebugText->MaximumSize = System::Drawing::Size(500, 0);
			this->DebugText->Name = L"DebugText";
			this->DebugText->Size = System::Drawing::Size(0, 13);
			this->DebugText->TabIndex = 14;
			// 
			// AuthForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(497, 654);
			this->Controls->Add(this->DebugText);
			this->Controls->Add(this->ErrorText);
			this->Controls->Add(this->SwitchAuthButton);
			this->Controls->Add(this->ShowPasswordButton2);
			this->Controls->Add(this->ShowPasswordButton1);
			this->Controls->Add(this->RepeatPasswordText);
			this->Controls->Add(this->RepeatPasswordTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->LoginTextBox);
			this->Controls->Add(this->EnterButton);
			this->Controls->Add(this->AuthText);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"AuthForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AuthForm::AuthForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AuthForm::AuthForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: static String^ fileName = "users.bin";
		public: ref struct User
		{
			String^ name;
			String^ password;
			int bestScore;
			array<int>^ lastGames = gcnew array<int>(5);
		};
		public: static array<User^>^ allUsers;
		public: static User^ currentUser = gcnew User;
		public: static int usersNum = 0;
		public: User^ tempUser;

		// Заголовки функций
		public: static void AddGameResult(int res);
		public: static void SortUsers();
		private: static void SaveUsers();
		public: void ReadUsers();
		private: void LoginPlayer();
		private: void RegisterPlayer();

		private: System::Void ShowPasswordButton1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ShowPasswordButton2_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void EnterButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void SwitchAuthButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void AuthForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void LoginTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			ErrorText->Text = "";
		}
		private: System::Void PasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			ErrorText->Text = "";
		}
		private: System::Void RepeatPasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			ErrorText->Text = "";
		}
		private: System::Void AuthForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			Application::OpenForms[0]->Close(); // Закрытие первой формы => всего приложения
		}
};
}
