#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SplashForm
	/// </summary>
	public ref class SplashForm : public System::Windows::Forms::Form
	{
	public:
		SplashForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SplashForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Pixel1;
	private: System::Windows::Forms::PictureBox^ Pixel2;
	private: System::Windows::Forms::PictureBox^ Pixel3;
	private: System::Windows::Forms::PictureBox^ Pixel6;
	private: System::Windows::Forms::PictureBox^ Pixel8;
	private: System::Windows::Forms::PictureBox^ Pixel11;
	protected:

	protected:





	private: System::Windows::Forms::PictureBox^ Pixel5;
	private: System::Windows::Forms::PictureBox^ Pixel7;
	private: System::Windows::Forms::PictureBox^ Pixel9;
	private: System::Windows::Forms::PictureBox^ Pixel10;
	private: System::Windows::Forms::PictureBox^ Pixel12;
	private: System::Windows::Forms::PictureBox^ Pixel14;
	private: System::Windows::Forms::PictureBox^ Pixel15;
	private: System::Windows::Forms::PictureBox^ Pixel16;








	private: System::Windows::Forms::PictureBox^ Pixel4;
	private: System::Windows::Forms::PictureBox^ Pixel13;


	private: System::Windows::Forms::PictureBox^ pictureBox16;



	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox25;

	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ pictureBox41;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::PictureBox^ pictureBox45;
	private: System::Windows::Forms::PictureBox^ pictureBox46;
	private: System::Windows::Forms::PictureBox^ pictureBox48;
	private: System::Windows::Forms::PictureBox^ pictureBox50;
	private: System::Windows::Forms::PictureBox^ pictureBox51;
	private: System::Windows::Forms::PictureBox^ pictureBox53;
	private: System::Windows::Forms::PictureBox^ pictureBox47;
	private: System::Windows::Forms::PictureBox^ pictureBox49;
	private: System::Windows::Forms::PictureBox^ pictureBox52;
	private: System::Windows::Forms::PictureBox^ pictureBox54;
	private: System::Windows::Forms::PictureBox^ pictureBox55;
	private: System::Windows::Forms::PictureBox^ pictureBox56;
	private: System::Windows::Forms::PictureBox^ pictureBox57;
	private: System::Windows::Forms::PictureBox^ pictureBox58;
	private: System::Windows::Forms::PictureBox^ pictureBox59;
	private: System::Windows::Forms::PictureBox^ pictureBox60;
	private: System::Windows::Forms::PictureBox^ pictureBox61;
	private: System::Windows::Forms::PictureBox^ pictureBox62;
	private: System::Windows::Forms::PictureBox^ pictureBox63;
	private: System::Windows::Forms::PictureBox^ pictureBox64;
private: System::Windows::Forms::PictureBox^ Food;

private: System::Windows::Forms::PictureBox^ SnakeHead;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Timer^ Timer;
private: System::Windows::Forms::PictureBox^ HiderBox;
private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SplashForm::typeid));
			this->Pixel1 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel2 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel3 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel6 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel8 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel11 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel5 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel7 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel9 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel10 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel12 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel14 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel15 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel16 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel4 = (gcnew System::Windows::Forms::PictureBox());
			this->Pixel13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->Food = (gcnew System::Windows::Forms::PictureBox());
			this->SnakeHead = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->HiderBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Food))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SnakeHead))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HiderBox))->BeginInit();
			this->SuspendLayout();
			// 
			// Pixel1
			// 
			this->Pixel1->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel1->Location = System::Drawing::Point(39, 216);
			this->Pixel1->Name = L"Pixel1";
			this->Pixel1->Size = System::Drawing::Size(25, 25);
			this->Pixel1->TabIndex = 0;
			this->Pixel1->TabStop = false;
			this->Pixel1->Visible = false;
			// 
			// Pixel2
			// 
			this->Pixel2->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel2->Location = System::Drawing::Point(69, 216);
			this->Pixel2->Name = L"Pixel2";
			this->Pixel2->Size = System::Drawing::Size(25, 25);
			this->Pixel2->TabIndex = 1;
			this->Pixel2->TabStop = false;
			this->Pixel2->Visible = false;
			// 
			// Pixel3
			// 
			this->Pixel3->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel3->Location = System::Drawing::Point(99, 216);
			this->Pixel3->Name = L"Pixel3";
			this->Pixel3->Size = System::Drawing::Size(25, 25);
			this->Pixel3->TabIndex = 2;
			this->Pixel3->TabStop = false;
			this->Pixel3->Visible = false;
			// 
			// Pixel6
			// 
			this->Pixel6->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel6->Location = System::Drawing::Point(130, 155);
			this->Pixel6->Name = L"Pixel6";
			this->Pixel6->Size = System::Drawing::Size(25, 25);
			this->Pixel6->TabIndex = 3;
			this->Pixel6->TabStop = false;
			this->Pixel6->Visible = false;
			// 
			// Pixel8
			// 
			this->Pixel8->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel8->Location = System::Drawing::Point(99, 124);
			this->Pixel8->Name = L"Pixel8";
			this->Pixel8->Size = System::Drawing::Size(25, 25);
			this->Pixel8->TabIndex = 4;
			this->Pixel8->TabStop = false;
			this->Pixel8->Visible = false;
			// 
			// Pixel11
			// 
			this->Pixel11->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel11->Location = System::Drawing::Point(39, 93);
			this->Pixel11->Name = L"Pixel11";
			this->Pixel11->Size = System::Drawing::Size(25, 25);
			this->Pixel11->TabIndex = 5;
			this->Pixel11->TabStop = false;
			this->Pixel11->Visible = false;
			// 
			// Pixel5
			// 
			this->Pixel5->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel5->Location = System::Drawing::Point(130, 186);
			this->Pixel5->Name = L"Pixel5";
			this->Pixel5->Size = System::Drawing::Size(25, 25);
			this->Pixel5->TabIndex = 6;
			this->Pixel5->TabStop = false;
			this->Pixel5->Visible = false;
			// 
			// Pixel7
			// 
			this->Pixel7->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel7->Location = System::Drawing::Point(130, 124);
			this->Pixel7->Name = L"Pixel7";
			this->Pixel7->Size = System::Drawing::Size(25, 25);
			this->Pixel7->TabIndex = 7;
			this->Pixel7->TabStop = false;
			this->Pixel7->Visible = false;
			// 
			// Pixel9
			// 
			this->Pixel9->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel9->Location = System::Drawing::Point(68, 124);
			this->Pixel9->Name = L"Pixel9";
			this->Pixel9->Size = System::Drawing::Size(25, 25);
			this->Pixel9->TabIndex = 8;
			this->Pixel9->TabStop = false;
			this->Pixel9->Visible = false;
			// 
			// Pixel10
			// 
			this->Pixel10->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel10->Location = System::Drawing::Point(39, 124);
			this->Pixel10->Name = L"Pixel10";
			this->Pixel10->Size = System::Drawing::Size(25, 25);
			this->Pixel10->TabIndex = 9;
			this->Pixel10->TabStop = false;
			this->Pixel10->Visible = false;
			// 
			// Pixel12
			// 
			this->Pixel12->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel12->Location = System::Drawing::Point(39, 62);
			this->Pixel12->Name = L"Pixel12";
			this->Pixel12->Size = System::Drawing::Size(25, 25);
			this->Pixel12->TabIndex = 10;
			this->Pixel12->TabStop = false;
			this->Pixel12->Visible = false;
			// 
			// Pixel14
			// 
			this->Pixel14->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel14->Location = System::Drawing::Point(68, 31);
			this->Pixel14->Name = L"Pixel14";
			this->Pixel14->Size = System::Drawing::Size(25, 25);
			this->Pixel14->TabIndex = 11;
			this->Pixel14->TabStop = false;
			this->Pixel14->Visible = false;
			// 
			// Pixel15
			// 
			this->Pixel15->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel15->Location = System::Drawing::Point(99, 31);
			this->Pixel15->Name = L"Pixel15";
			this->Pixel15->Size = System::Drawing::Size(25, 25);
			this->Pixel15->TabIndex = 12;
			this->Pixel15->TabStop = false;
			this->Pixel15->Visible = false;
			// 
			// Pixel16
			// 
			this->Pixel16->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel16->Location = System::Drawing::Point(130, 31);
			this->Pixel16->Name = L"Pixel16";
			this->Pixel16->Size = System::Drawing::Size(25, 25);
			this->Pixel16->TabIndex = 13;
			this->Pixel16->TabStop = false;
			this->Pixel16->Visible = false;
			// 
			// Pixel4
			// 
			this->Pixel4->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel4->Location = System::Drawing::Point(130, 216);
			this->Pixel4->Name = L"Pixel4";
			this->Pixel4->Size = System::Drawing::Size(25, 25);
			this->Pixel4->TabIndex = 18;
			this->Pixel4->TabStop = false;
			this->Pixel4->Visible = false;
			// 
			// Pixel13
			// 
			this->Pixel13->BackColor = System::Drawing::Color::MediumPurple;
			this->Pixel13->Location = System::Drawing::Point(39, 31);
			this->Pixel13->Name = L"Pixel13";
			this->Pixel13->Size = System::Drawing::Size(25, 25);
			this->Pixel13->TabIndex = 19;
			this->Pixel13->TabStop = false;
			this->Pixel13->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox16->Location = System::Drawing::Point(193, 216);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(25, 25);
			this->pictureBox16->TabIndex = 20;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox17->Location = System::Drawing::Point(193, 184);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(25, 25);
			this->pictureBox17->TabIndex = 21;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox18->Location = System::Drawing::Point(193, 154);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(25, 25);
			this->pictureBox18->TabIndex = 22;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox20->Location = System::Drawing::Point(193, 93);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(25, 25);
			this->pictureBox20->TabIndex = 23;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox21->Location = System::Drawing::Point(224, 93);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(25, 25);
			this->pictureBox21->TabIndex = 24;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox22->Location = System::Drawing::Point(255, 93);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(25, 25);
			this->pictureBox22->TabIndex = 25;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox23->Location = System::Drawing::Point(286, 123);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(25, 25);
			this->pictureBox23->TabIndex = 26;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox26->Location = System::Drawing::Point(286, 155);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(25, 25);
			this->pictureBox26->TabIndex = 29;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox25->Location = System::Drawing::Point(286, 186);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(25, 25);
			this->pictureBox25->TabIndex = 30;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox27->Location = System::Drawing::Point(350, 216);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(25, 25);
			this->pictureBox27->TabIndex = 32;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox28->Location = System::Drawing::Point(350, 185);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(25, 25);
			this->pictureBox28->TabIndex = 33;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox29->Location = System::Drawing::Point(350, 155);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(25, 25);
			this->pictureBox29->TabIndex = 34;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox30->Location = System::Drawing::Point(381, 93);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(25, 25);
			this->pictureBox30->TabIndex = 35;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox32->Location = System::Drawing::Point(412, 93);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(25, 25);
			this->pictureBox32->TabIndex = 37;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox34->Location = System::Drawing::Point(443, 155);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(25, 25);
			this->pictureBox34->TabIndex = 39;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox35->Location = System::Drawing::Point(443, 186);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(25, 25);
			this->pictureBox35->TabIndex = 40;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox36->Location = System::Drawing::Point(443, 216);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(25, 25);
			this->pictureBox36->TabIndex = 41;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox37->Location = System::Drawing::Point(412, 155);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(25, 25);
			this->pictureBox37->TabIndex = 42;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox38->Location = System::Drawing::Point(381, 155);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(25, 25);
			this->pictureBox38->TabIndex = 43;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox31->Location = System::Drawing::Point(494, 216);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(25, 25);
			this->pictureBox31->TabIndex = 44;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox33->Location = System::Drawing::Point(494, 185);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(25, 25);
			this->pictureBox33->TabIndex = 45;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox39->Location = System::Drawing::Point(494, 154);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(25, 25);
			this->pictureBox39->TabIndex = 46;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox40->Location = System::Drawing::Point(494, 123);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(25, 25);
			this->pictureBox40->TabIndex = 47;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox41->Location = System::Drawing::Point(286, 217);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(25, 25);
			this->pictureBox41->TabIndex = 48;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox42->Location = System::Drawing::Point(193, 124);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(25, 25);
			this->pictureBox42->TabIndex = 49;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox43->Location = System::Drawing::Point(443, 124);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(25, 25);
			this->pictureBox43->TabIndex = 51;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox44->Location = System::Drawing::Point(350, 124);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(25, 25);
			this->pictureBox44->TabIndex = 50;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox45->Location = System::Drawing::Point(494, 93);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(25, 25);
			this->pictureBox45->TabIndex = 52;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox46->Location = System::Drawing::Point(525, 155);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(25, 25);
			this->pictureBox46->TabIndex = 53;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox48->Location = System::Drawing::Point(556, 185);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(25, 25);
			this->pictureBox48->TabIndex = 55;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox50->Location = System::Drawing::Point(587, 216);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(25, 25);
			this->pictureBox50->TabIndex = 57;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox51->Location = System::Drawing::Point(556, 124);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(25, 25);
			this->pictureBox51->TabIndex = 59;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox53->Location = System::Drawing::Point(587, 93);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(25, 25);
			this->pictureBox53->TabIndex = 60;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox47->Location = System::Drawing::Point(641, 93);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(25, 25);
			this->pictureBox47->TabIndex = 65;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox49->Location = System::Drawing::Point(641, 123);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(25, 25);
			this->pictureBox49->TabIndex = 64;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox52->Location = System::Drawing::Point(641, 154);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(25, 25);
			this->pictureBox52->TabIndex = 63;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox54->Location = System::Drawing::Point(641, 185);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(25, 25);
			this->pictureBox54->TabIndex = 62;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox55->Location = System::Drawing::Point(641, 216);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(25, 25);
			this->pictureBox55->TabIndex = 61;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox56->Location = System::Drawing::Point(672, 216);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(25, 25);
			this->pictureBox56->TabIndex = 66;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox57->Location = System::Drawing::Point(703, 216);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(25, 25);
			this->pictureBox57->TabIndex = 67;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox58->Location = System::Drawing::Point(734, 216);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(25, 25);
			this->pictureBox58->TabIndex = 68;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox59->Location = System::Drawing::Point(734, 154);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(25, 25);
			this->pictureBox59->TabIndex = 71;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox60->Location = System::Drawing::Point(703, 154);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(25, 25);
			this->pictureBox60->TabIndex = 70;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox61->Location = System::Drawing::Point(672, 155);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(25, 25);
			this->pictureBox61->TabIndex = 69;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox62->Location = System::Drawing::Point(734, 93);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(25, 25);
			this->pictureBox62->TabIndex = 74;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox63->Location = System::Drawing::Point(703, 93);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(25, 25);
			this->pictureBox63->TabIndex = 73;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox64->Location = System::Drawing::Point(672, 93);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(25, 25);
			this->pictureBox64->TabIndex = 72;
			this->pictureBox64->TabStop = false;
			// 
			// Food
			// 
			this->Food->BackColor = System::Drawing::Color::Red;
			this->Food->Location = System::Drawing::Point(796, 217);
			this->Food->Name = L"Food";
			this->Food->Size = System::Drawing::Size(25, 25);
			this->Food->TabIndex = 76;
			this->Food->TabStop = false;
			// 
			// SnakeHead
			// 
			this->SnakeHead->BackColor = System::Drawing::Color::Purple;
			this->SnakeHead->Location = System::Drawing::Point(8, 216);
			this->SnakeHead->Name = L"SnakeHead";
			this->SnakeHead->Size = System::Drawing::Size(25, 25);
			this->SnakeHead->TabIndex = 77;
			this->SnakeHead->TabStop = false;
			this->SnakeHead->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MediumPurple;
			this->pictureBox1->Location = System::Drawing::Point(255, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->TabIndex = 78;
			this->pictureBox1->TabStop = false;
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 500;
			this->Timer->Tick += gcnew System::EventHandler(this, &SplashForm::Timer_Tick);
			// 
			// HiderBox
			// 
			this->HiderBox->Location = System::Drawing::Point(185, 31);
			this->HiderBox->Name = L"HiderBox";
			this->HiderBox->Size = System::Drawing::Size(641, 226);
			this->HiderBox->TabIndex = 79;
			this->HiderBox->TabStop = false;
			// 
			// SplashForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(838, 299);
			this->Controls->Add(this->HiderBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SnakeHead);
			this->Controls->Add(this->Food);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->Pixel13);
			this->Controls->Add(this->Pixel4);
			this->Controls->Add(this->Pixel16);
			this->Controls->Add(this->Pixel15);
			this->Controls->Add(this->Pixel14);
			this->Controls->Add(this->Pixel12);
			this->Controls->Add(this->Pixel10);
			this->Controls->Add(this->Pixel9);
			this->Controls->Add(this->Pixel7);
			this->Controls->Add(this->Pixel5);
			this->Controls->Add(this->Pixel11);
			this->Controls->Add(this->Pixel8);
			this->Controls->Add(this->Pixel6);
			this->Controls->Add(this->Pixel3);
			this->Controls->Add(this->Pixel2);
			this->Controls->Add(this->Pixel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"SplashForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"«мейка";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SplashForm::SplashForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pixel13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Food))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SnakeHead))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HiderBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e);
		private: System::Void SplashForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
