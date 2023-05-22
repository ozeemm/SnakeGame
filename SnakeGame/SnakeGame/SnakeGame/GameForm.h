#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
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
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ UpBorder;
	protected:
	private: System::Windows::Forms::PictureBox^ DownBorder;
	private: System::Windows::Forms::PictureBox^ RightBorder;
	private: System::Windows::Forms::PictureBox^ LeftBorder;
	private: System::Windows::Forms::Label^ CoordText;
	private: System::Windows::Forms::Timer^ Timer;








	private: System::Windows::Forms::Label^ DebugText;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ управлениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ паузаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ перезапускToolStripMenuItem;


	private: System::Windows::Forms::StatusStrip^ StatusBar;
	private: System::Windows::Forms::ToolStripStatusLabel^ StatusBarCoord;
	private: System::Windows::Forms::ToolStripStatusLabel^ StatusBarScore;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ StatusBarBorders;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripMenuItem^ SettingsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripStatusLabel^ StatusBarPause;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

































	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->UpBorder = (gcnew System::Windows::Forms::PictureBox());
			this->DownBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->CoordText = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->DebugText = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->управлениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->паузаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->перезапускToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SettingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StatusBar = (gcnew System::Windows::Forms::StatusStrip());
			this->StatusBarCoord = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->StatusBarScore = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->StatusBarBorders = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->StatusBarPause = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DownBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->StatusBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// UpBorder
			// 
			this->UpBorder->BackColor = System::Drawing::Color::Black;
			this->UpBorder->Location = System::Drawing::Point(5, 85);
			this->UpBorder->Name = L"UpBorder";
			this->UpBorder->Size = System::Drawing::Size(785, 5);
			this->UpBorder->TabIndex = 0;
			this->UpBorder->TabStop = false;
			// 
			// DownBorder
			// 
			this->DownBorder->BackColor = System::Drawing::Color::Black;
			this->DownBorder->Location = System::Drawing::Point(5, 715);
			this->DownBorder->Name = L"DownBorder";
			this->DownBorder->Size = System::Drawing::Size(785, 5);
			this->DownBorder->TabIndex = 1;
			this->DownBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::Color::Black;
			this->RightBorder->Location = System::Drawing::Point(785, 90);
			this->RightBorder->Name = L"RightBorder";
			this->RightBorder->Size = System::Drawing::Size(5, 630);
			this->RightBorder->TabIndex = 2;
			this->RightBorder->TabStop = false;
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::Color::Black;
			this->LeftBorder->Location = System::Drawing::Point(5, 90);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(5, 630);
			this->LeftBorder->TabIndex = 3;
			this->LeftBorder->TabStop = false;
			// 
			// CoordText
			// 
			this->CoordText->AutoSize = true;
			this->CoordText->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CoordText->Location = System::Drawing::Point(692, 47);
			this->CoordText->Name = L"CoordText";
			this->CoordText->Size = System::Drawing::Size(73, 26);
			this->CoordText->TabIndex = 4;
			this->CoordText->Text = L"Счёт:";
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 200;
			this->Timer->Tick += gcnew System::EventHandler(this, &GameForm::Timer_Tick);
			// 
			// DebugText
			// 
			this->DebugText->AutoSize = true;
			this->DebugText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebugText->Location = System::Drawing::Point(12, 47);
			this->DebugText->Name = L"DebugText";
			this->DebugText->Size = System::Drawing::Size(0, 17);
			this->DebugText->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->управлениеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(803, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// управлениеToolStripMenuItem
			// 
			this->управлениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->паузаToolStripMenuItem,
					this->перезапускToolStripMenuItem, this->SettingsToolStripMenuItem
			});
			this->управлениеToolStripMenuItem->Name = L"управлениеToolStripMenuItem";
			this->управлениеToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->управлениеToolStripMenuItem->Text = L"Управление";
			// 
			// паузаToolStripMenuItem
			// 
			this->паузаToolStripMenuItem->Name = L"паузаToolStripMenuItem";
			this->паузаToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->паузаToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->паузаToolStripMenuItem->Text = L"Пауза";
			this->паузаToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::паузаToolStripMenuItem_Click);
			// 
			// перезапускToolStripMenuItem
			// 
			this->перезапускToolStripMenuItem->Name = L"перезапускToolStripMenuItem";
			this->перезапускToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->перезапускToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->перезапускToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->перезапускToolStripMenuItem->Text = L"Перезапуск";
			this->перезапускToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::перезапускToolStripMenuItem_Click);
			// 
			// SettingsToolStripMenuItem
			// 
			this->SettingsToolStripMenuItem->Name = L"SettingsToolStripMenuItem";
			this->SettingsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->SettingsToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->SettingsToolStripMenuItem->Text = L"Изменение настроек";
			this->SettingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::SettingsToolStripMenuItem_Click);
			// 
			// StatusBar
			// 
			this->StatusBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->StatusBarCoord, this->toolStripStatusLabel1,
					this->StatusBarScore, this->toolStripStatusLabel2, this->StatusBarBorders, this->toolStripStatusLabel3, this->StatusBarPause
			});
			this->StatusBar->Location = System::Drawing::Point(0, 736);
			this->StatusBar->Name = L"StatusBar";
			this->StatusBar->Size = System::Drawing::Size(803, 22);
			this->StatusBar->TabIndex = 9;
			// 
			// StatusBarCoord
			// 
			this->StatusBarCoord->Name = L"StatusBarCoord";
			this->StatusBarCoord->Size = System::Drawing::Size(40, 17);
			this->StatusBarCoord->Text = L"Coord";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(10, 17);
			this->toolStripStatusLabel1->Text = L"|";
			// 
			// StatusBarScore
			// 
			this->StatusBarScore->Name = L"StatusBarScore";
			this->StatusBarScore->Size = System::Drawing::Size(36, 17);
			this->StatusBarScore->Text = L"Score";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(10, 17);
			this->toolStripStatusLabel2->Text = L"|";
			// 
			// StatusBarBorders
			// 
			this->StatusBarBorders->Name = L"StatusBarBorders";
			this->StatusBarBorders->Size = System::Drawing::Size(47, 17);
			this->StatusBarBorders->Text = L"Borders";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(10, 17);
			this->toolStripStatusLabel3->Text = L"|";
			// 
			// StatusBarPause
			// 
			this->StatusBarPause->Name = L"StatusBarPause";
			this->StatusBarPause->Size = System::Drawing::Size(38, 17);
			this->StatusBarPause->Text = L"Pause";
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(803, 758);
			this->Controls->Add(this->StatusBar);
			this->Controls->Add(this->DebugText);
			this->Controls->Add(this->CoordText);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->DownBorder);
			this->Controls->Add(this->UpBorder);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Змейка";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &GameForm::GameForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DownBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->StatusBar->ResumeLayout(false);
			this->StatusBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Глобальные переменные
		public: static int updateTime; // Время срабатывания таймера (в милисекундах), влияет на скорость
		public: static bool isFirstLaunch = true; // Первый ли запуск игры
		public: static  bool borders = true; // Включены ли границы

		public: static Color snakeHeadColor = Color::Purple; // Цвет головы змейки
		public: static Color snakeElementsColor = Color::MediumPurple; // Цвет хвоста змейки
		public: static Color foodColor = Color::Red; // Цвет еды

		private: Control^ SnakeHead; // Голова змейки
		private: PictureBox^ SnakeElement; // Один элемент змейки
		private: PictureBox^ food; // Еда

		// Заголовки функций
		private: void UpdateStatusBar(); // Обновление строки состояния
		private: void RestartGame(); // Перезапуск уровня
		private: void PauseGame(); // Пауза
		private: void GenerateFood(); // Генерация еды
		private: void GameOver(); // Завершение игры
			  
		private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e);
		private: System::Void GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);	
		private: System::Void паузаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void перезапускToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void SettingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void GameForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);	
	};
}
