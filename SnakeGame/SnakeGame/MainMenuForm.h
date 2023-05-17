#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainMenuForm
	/// </summary>
	public ref class MainMenuForm : public System::Windows::Forms::Form
	{
	public:
		MainMenuForm(void)
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
		~MainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ PlayButton;
	protected:
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ StatButton;
	private: System::Windows::Forms::Label^ Header;

	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Label^ BestScoreText;
	private: System::Windows::Forms::Label^ LastGamesText;
	private: System::Windows::Forms::Label^ BestPlayersText;
	private: System::Windows::Forms::Label^ BestScoreNum;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel;
	private: System::Windows::Forms::Label^ LastGamesList;
	private: System::Windows::Forms::Label^ BestPlayerList;
	private: System::Windows::Forms::Button^ InfoButton;
	private: System::Windows::Forms::Button^ AboutButton;
	private: System::Windows::Forms::HelpProvider^ helpProvider;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainMenuForm::typeid));
			this->PlayButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->StatButton = (gcnew System::Windows::Forms::Button());
			this->Header = (gcnew System::Windows::Forms::Label());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->BestScoreText = (gcnew System::Windows::Forms::Label());
			this->LastGamesText = (gcnew System::Windows::Forms::Label());
			this->BestPlayersText = (gcnew System::Windows::Forms::Label());
			this->BestScoreNum = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->LastGamesList = (gcnew System::Windows::Forms::Label());
			this->BestPlayerList = (gcnew System::Windows::Forms::Label());
			this->InfoButton = (gcnew System::Windows::Forms::Button());
			this->AboutButton = (gcnew System::Windows::Forms::Button());
			this->helpProvider = (gcnew System::Windows::Forms::HelpProvider());
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// PlayButton
			// 
			this->PlayButton->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlayButton->Location = System::Drawing::Point(150, 130);
			this->PlayButton->Name = L"PlayButton";
			this->PlayButton->Size = System::Drawing::Size(235, 60);
			this->PlayButton->TabIndex = 0;
			this->PlayButton->Text = L"Играть";
			this->PlayButton->UseVisualStyleBackColor = true;
			this->PlayButton->Click += gcnew System::EventHandler(this, &MainMenuForm::PlayButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->Location = System::Drawing::Point(150, 400);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(235, 60);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"Выход";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainMenuForm::ExitButton_Click);
			// 
			// StatButton
			// 
			this->StatButton->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StatButton->Location = System::Drawing::Point(150, 220);
			this->StatButton->Name = L"StatButton";
			this->StatButton->Size = System::Drawing::Size(235, 60);
			this->StatButton->TabIndex = 2;
			this->StatButton->Text = L"Статистика";
			this->StatButton->UseVisualStyleBackColor = true;
			this->StatButton->Click += gcnew System::EventHandler(this, &MainMenuForm::StatButton_Click);
			// 
			// Header
			// 
			this->Header->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Header->Location = System::Drawing::Point(75, 28);
			this->Header->Name = L"Header";
			this->Header->Size = System::Drawing::Size(395, 55);
			this->Header->TabIndex = 3;
			this->Header->Text = L"Главное меню";
			this->Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BackButton
			// 
			this->BackButton->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BackButton->Location = System::Drawing::Point(214, 491);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(101, 27);
			this->BackButton->TabIndex = 4;
			this->BackButton->Text = L"Назад";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Visible = false;
			this->BackButton->Click += gcnew System::EventHandler(this, &MainMenuForm::BackButton_Click);
			// 
			// BestScoreText
			// 
			this->BestScoreText->AutoSize = true;
			this->BestScoreText->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BestScoreText->Location = System::Drawing::Point(24, 109);
			this->BestScoreText->Name = L"BestScoreText";
			this->BestScoreText->Size = System::Drawing::Size(204, 21);
			this->BestScoreText->TabIndex = 5;
			this->BestScoreText->Text = L"Лучший результат: ";
			this->BestScoreText->Visible = false;
			// 
			// LastGamesText
			// 
			this->LastGamesText->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LastGamesText->Location = System::Drawing::Point(24, 187);
			this->LastGamesText->Name = L"LastGamesText";
			this->LastGamesText->Size = System::Drawing::Size(184, 51);
			this->LastGamesText->TabIndex = 6;
			this->LastGamesText->Text = L"Результаты последних игр:";
			this->LastGamesText->Visible = false;
			// 
			// BestPlayersText
			// 
			this->BestPlayersText->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BestPlayersText->Location = System::Drawing::Point(334, 109);
			this->BestPlayersText->Name = L"BestPlayersText";
			this->BestPlayersText->Size = System::Drawing::Size(210, 61);
			this->BestPlayersText->TabIndex = 7;
			this->BestPlayersText->Text = L"Лучшие результаты других игроков:";
			this->BestPlayersText->Visible = false;
			// 
			// BestScoreNum
			// 
			this->BestScoreNum->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 30));
			this->BestScoreNum->Location = System::Drawing::Point(28, 133);
			this->BestScoreNum->Name = L"BestScoreNum";
			this->BestScoreNum->Size = System::Drawing::Size(180, 53);
			this->BestScoreNum->TabIndex = 8;
			this->BestScoreNum->Text = L"0";
			this->BestScoreNum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BestScoreNum->Visible = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel });
			this->statusStrip1->Location = System::Drawing::Point(0, 571);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(556, 22);
			this->statusStrip1->TabIndex = 9;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel
			// 
			this->toolStripStatusLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripStatusLabel->Name = L"toolStripStatusLabel";
			this->toolStripStatusLabel->Size = System::Drawing::Size(138, 17);
			this->toolStripStatusLabel->Text = L"Вы авторизованы как \"\"";
			// 
			// LastGamesList
			// 
			this->LastGamesList->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LastGamesList->Location = System::Drawing::Point(28, 237);
			this->LastGamesList->Name = L"LastGamesList";
			this->LastGamesList->Size = System::Drawing::Size(180, 248);
			this->LastGamesList->TabIndex = 10;
			this->LastGamesList->Visible = false;
			// 
			// BestPlayerList
			// 
			this->BestPlayerList->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BestPlayerList->Location = System::Drawing::Point(333, 160);
			this->BestPlayerList->Name = L"BestPlayerList";
			this->BestPlayerList->Size = System::Drawing::Size(211, 325);
			this->BestPlayerList->TabIndex = 11;
			this->BestPlayerList->Visible = false;
			// 
			// InfoButton
			// 
			this->InfoButton->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoButton->Location = System::Drawing::Point(150, 310);
			this->InfoButton->Name = L"InfoButton";
			this->InfoButton->Size = System::Drawing::Size(235, 60);
			this->InfoButton->TabIndex = 12;
			this->InfoButton->Text = L"Справка";
			this->InfoButton->UseVisualStyleBackColor = true;
			this->InfoButton->Click += gcnew System::EventHandler(this, &MainMenuForm::InfoButton_Click);
			// 
			// AboutButton
			// 
			this->AboutButton->Font = (gcnew System::Drawing::Font(L"DS Pixel Cyr", 9));
			this->AboutButton->Location = System::Drawing::Point(428, 525);
			this->AboutButton->Name = L"AboutButton";
			this->AboutButton->Size = System::Drawing::Size(116, 26);
			this->AboutButton->TabIndex = 14;
			this->AboutButton->Text = L"О программе";
			this->AboutButton->UseVisualStyleBackColor = true;
			this->AboutButton->Click += gcnew System::EventHandler(this, &MainMenuForm::AboutButton_Click);
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(556, 593);
			this->Controls->Add(this->AboutButton);
			this->Controls->Add(this->InfoButton);
			this->Controls->Add(this->BestPlayerList);
			this->Controls->Add(this->LastGamesList);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->BestScoreNum);
			this->Controls->Add(this->BestPlayersText);
			this->Controls->Add(this->LastGamesText);
			this->Controls->Add(this->BestScoreText);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->Header);
			this->Controls->Add(this->StatButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->PlayButton);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Главное меню";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainMenuForm::MainMenuForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: enum class MenuType {
			MainMenu, StatMenu, DifficultyMenu
		};
		private: enum class Difficulty {
			Easy, Medium, Hard
		};

		MenuType currentMenu = MenuType::MainMenu;

		private: void SwitchMenu(MenuType menuType);
		private: void GenerateStats();
		private: void LoadGame(Difficulty difficulty);
	
		private: System::Void MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void PlayButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void StatButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void InfoButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void AboutButton_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void MainMenuForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);


};
}
