#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameSettingsForm
	/// </summary>
	public ref class GameSettingsForm : public System::Windows::Forms::Form
	{
	public:
		GameSettingsForm(void)
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
		~GameSettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AcceptButton;
	protected:

	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ HeadColor;
	private: System::Windows::Forms::Button^ TailColor;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ FoodColor;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ BordersCheckBox;
	private: System::Windows::Forms::NumericUpDown^ UpdateTimeInput;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ColorDialog^ colorDialog;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameSettingsForm::typeid));
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->HeadColor = (gcnew System::Windows::Forms::Button());
			this->TailColor = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FoodColor = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BordersCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->UpdateTimeInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpdateTimeInput))->BeginInit();
			this->SuspendLayout();
			// 
			// AcceptButton
			// 
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AcceptButton->Location = System::Drawing::Point(185, 214);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(106, 27);
			this->AcceptButton->TabIndex = 0;
			this->AcceptButton->Text = L"Применить";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &GameSettingsForm::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CancelButton->Location = System::Drawing::Point(22, 214);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(106, 27);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Отмена";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &GameSettingsForm::CancelButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(112, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Цвет головы змейки";
			// 
			// HeadColor
			// 
			this->HeadColor->Location = System::Drawing::Point(279, 12);
			this->HeadColor->Name = L"HeadColor";
			this->HeadColor->Size = System::Drawing::Size(25, 25);
			this->HeadColor->TabIndex = 3;
			this->HeadColor->UseVisualStyleBackColor = true;
			this->HeadColor->Click += gcnew System::EventHandler(this, &GameSettingsForm::HeadColor_Click);
			// 
			// TailColor
			// 
			this->TailColor->Location = System::Drawing::Point(279, 41);
			this->TailColor->Name = L"TailColor";
			this->TailColor->Size = System::Drawing::Size(25, 25);
			this->TailColor->TabIndex = 5;
			this->TailColor->UseVisualStyleBackColor = true;
			this->TailColor->Click += gcnew System::EventHandler(this, &GameSettingsForm::TailColor_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(112, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Цвет хвоста змейки";
			// 
			// FoodColor
			// 
			this->FoodColor->Location = System::Drawing::Point(279, 72);
			this->FoodColor->Name = L"FoodColor";
			this->FoodColor->Size = System::Drawing::Size(25, 25);
			this->FoodColor->TabIndex = 7;
			this->FoodColor->UseVisualStyleBackColor = true;
			this->FoodColor->Click += gcnew System::EventHandler(this, &GameSettingsForm::FoodColor_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(190, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Цвет еды";
			// 
			// BordersCheckBox
			// 
			this->BordersCheckBox->AutoSize = true;
			this->BordersCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BordersCheckBox->Location = System::Drawing::Point(16, 103);
			this->BordersCheckBox->Name = L"BordersCheckBox";
			this->BordersCheckBox->Size = System::Drawing::Size(93, 24);
			this->BordersCheckBox->TabIndex = 8;
			this->BordersCheckBox->Text = L"Границы";
			this->BordersCheckBox->UseVisualStyleBackColor = true;
			// 
			// UpdateTimeInput
			// 
			this->UpdateTimeInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UpdateTimeInput->Location = System::Drawing::Point(222, 153);
			this->UpdateTimeInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->UpdateTimeInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->UpdateTimeInput->Name = L"UpdateTimeInput";
			this->UpdateTimeInput->Size = System::Drawing::Size(77, 26);
			this->UpdateTimeInput->TabIndex = 9;
			this->UpdateTimeInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(287, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Промежуток времени между шагами";
			// 
			// GameSettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(322, 258);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->UpdateTimeInput);
			this->Controls->Add(this->BordersCheckBox);
			this->Controls->Add(this->FoodColor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TailColor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->HeadColor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GameSettingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение настроек";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &GameSettingsForm::GameSettingsForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &GameSettingsForm::GameSettingsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpdateTimeInput))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void GameSettingsForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void HeadColor_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void TailColor_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void FoodColor_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void GameSettingsForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
