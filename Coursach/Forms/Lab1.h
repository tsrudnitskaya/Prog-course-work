#include "../Sources/Service.h"
#pragma once

namespace Coursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab1
	/// </summary>
	public ref class Lab1 : public System::Windows::Forms::Form
	{
	public:
		Lab1(void)
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
		~Lab1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




















	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ errorLabel1;
	private: System::Windows::Forms::Panel^ errorPanel;
	private: System::Windows::Forms::Panel^ errPanel;




	private: System::Windows::Forms::Panel^ controlsPanel;
	private: System::Windows::Forms::Button^ btnCloseForm;
	private: System::Windows::Forms::Panel^ workPanel;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ labBoolSize;
	private: System::Windows::Forms::Label^ labCharSize;
	private: System::Windows::Forms::Label^ labLongDSize;
	private: System::Windows::Forms::Label^ labDoubleSize;
	private: System::Windows::Forms::Label^ labFloatSize;
	private: System::Windows::Forms::Label^ lablongSize;
	private: System::Windows::Forms::Label^ labShortSize;
	private: System::Windows::Forms::Label^ labIntSize;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ btnShowDouble;
	private: System::Windows::Forms::Button^ btnShowFloat;
	private: System::Windows::Forms::Button^ btnShowInt;
	private: System::Windows::Forms::Label^ showDoubleLbl;
	private: System::Windows::Forms::Label^ showFloatLbl;
	private: System::Windows::Forms::Label^ showIntLbl;
	private: System::Windows::Forms::TextBox^ doubleBox;
	private: System::Windows::Forms::TextBox^ floatBox;
	private: System::Windows::Forms::TextBox^ intBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->errorPanel = (gcnew System::Windows::Forms::Panel());
			this->errPanel = (gcnew System::Windows::Forms::Panel());
			this->controlsPanel = (gcnew System::Windows::Forms::Panel());
			this->btnCloseForm = (gcnew System::Windows::Forms::Button());
			this->workPanel = (gcnew System::Windows::Forms::Panel());
			this->showDoubleLbl = (gcnew System::Windows::Forms::Label());
			this->showFloatLbl = (gcnew System::Windows::Forms::Label());
			this->showIntLbl = (gcnew System::Windows::Forms::Label());
			this->doubleBox = (gcnew System::Windows::Forms::TextBox());
			this->floatBox = (gcnew System::Windows::Forms::TextBox());
			this->intBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btnShowDouble = (gcnew System::Windows::Forms::Button());
			this->btnShowFloat = (gcnew System::Windows::Forms::Button());
			this->btnShowInt = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labBoolSize = (gcnew System::Windows::Forms::Label());
			this->labCharSize = (gcnew System::Windows::Forms::Label());
			this->labLongDSize = (gcnew System::Windows::Forms::Label());
			this->labDoubleSize = (gcnew System::Windows::Forms::Label());
			this->labFloatSize = (gcnew System::Windows::Forms::Label());
			this->lablongSize = (gcnew System::Windows::Forms::Label());
			this->labShortSize = (gcnew System::Windows::Forms::Label());
			this->labIntSize = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->errorPanel->SuspendLayout();
			this->errPanel->SuspendLayout();
			this->controlsPanel->SuspendLayout();
			this->workPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(21, 21);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// errorLabel1
			// 
			this->errorLabel1->AutoSize = true;
			this->errorLabel1->Location = System::Drawing::Point(27, 9);
			this->errorLabel1->Name = L"errorLabel1";
			this->errorLabel1->Size = System::Drawing::Size(0, 13);
			this->errorLabel1->TabIndex = 33;
			// 
			// errorPanel
			// 
			this->errorPanel->Controls->Add(this->pictureBox1);
			this->errorPanel->Controls->Add(this->errorLabel1);
			this->errorPanel->Location = System::Drawing::Point(46, 0);
			this->errorPanel->Name = L"errorPanel";
			this->errorPanel->Size = System::Drawing::Size(621, 52);
			this->errorPanel->TabIndex = 35;
			this->errorPanel->Visible = false;
			// 
			// errPanel
			// 
			this->errPanel->BackColor = System::Drawing::Color::White;
			this->errPanel->Controls->Add(this->errorPanel);
			this->errPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->errPanel->Location = System::Drawing::Point(0, 486);
			this->errPanel->Name = L"errPanel";
			this->errPanel->Size = System::Drawing::Size(773, 46);
			this->errPanel->TabIndex = 40;
			// 
			// controlsPanel
			// 
			this->controlsPanel->BackColor = System::Drawing::Color::White;
			this->controlsPanel->Controls->Add(this->btnCloseForm);
			this->controlsPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->controlsPanel->Location = System::Drawing::Point(0, 0);
			this->controlsPanel->Name = L"controlsPanel";
			this->controlsPanel->Size = System::Drawing::Size(773, 25);
			this->controlsPanel->TabIndex = 39;
			// 
			// btnCloseForm
			// 
			this->btnCloseForm->FlatAppearance->BorderSize = 0;
			this->btnCloseForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseForm->Location = System::Drawing::Point(0, 0);
			this->btnCloseForm->Name = L"btnCloseForm";
			this->btnCloseForm->Size = System::Drawing::Size(32, 23);
			this->btnCloseForm->TabIndex = 0;
			this->btnCloseForm->Text = L"x";
			this->btnCloseForm->UseVisualStyleBackColor = true;
			// 
			// workPanel
			// 
			this->workPanel->BackColor = System::Drawing::Color::White;
			this->workPanel->Controls->Add(this->showDoubleLbl);
			this->workPanel->Controls->Add(this->showFloatLbl);
			this->workPanel->Controls->Add(this->showIntLbl);
			this->workPanel->Controls->Add(this->doubleBox);
			this->workPanel->Controls->Add(this->floatBox);
			this->workPanel->Controls->Add(this->intBox);
			this->workPanel->Controls->Add(this->label18);
			this->workPanel->Controls->Add(this->btnShowDouble);
			this->workPanel->Controls->Add(this->btnShowFloat);
			this->workPanel->Controls->Add(this->btnShowInt);
			this->workPanel->Controls->Add(this->label14);
			this->workPanel->Controls->Add(this->label15);
			this->workPanel->Controls->Add(this->label16);
			this->workPanel->Controls->Add(this->label17);
			this->workPanel->Controls->Add(this->label12);
			this->workPanel->Controls->Add(this->label13);
			this->workPanel->Controls->Add(this->label11);
			this->workPanel->Controls->Add(this->label10);
			this->workPanel->Controls->Add(this->labBoolSize);
			this->workPanel->Controls->Add(this->labCharSize);
			this->workPanel->Controls->Add(this->labLongDSize);
			this->workPanel->Controls->Add(this->labDoubleSize);
			this->workPanel->Controls->Add(this->labFloatSize);
			this->workPanel->Controls->Add(this->lablongSize);
			this->workPanel->Controls->Add(this->labShortSize);
			this->workPanel->Controls->Add(this->labIntSize);
			this->workPanel->Controls->Add(this->label9);
			this->workPanel->Controls->Add(this->label8);
			this->workPanel->Controls->Add(this->label7);
			this->workPanel->Controls->Add(this->label6);
			this->workPanel->Controls->Add(this->label5);
			this->workPanel->Controls->Add(this->label4);
			this->workPanel->Controls->Add(this->label2);
			this->workPanel->Controls->Add(this->label1);
			this->workPanel->Controls->Add(this->label3);
			this->workPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workPanel->Location = System::Drawing::Point(0, 25);
			this->workPanel->Name = L"workPanel";
			this->workPanel->Size = System::Drawing::Size(773, 461);
			this->workPanel->TabIndex = 2;
			// 
			// showDoubleLbl
			// 
			this->showDoubleLbl->AutoSize = true;
			this->showDoubleLbl->Enabled = false;
			this->showDoubleLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->showDoubleLbl->Location = System::Drawing::Point(363, 320);
			this->showDoubleLbl->Name = L"showDoubleLbl";
			this->showDoubleLbl->Size = System::Drawing::Size(0, 19);
			this->showDoubleLbl->TabIndex = 68;
			// 
			// showFloatLbl
			// 
			this->showFloatLbl->AutoSize = true;
			this->showFloatLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->showFloatLbl->Location = System::Drawing::Point(363, 267);
			this->showFloatLbl->Name = L"showFloatLbl";
			this->showFloatLbl->Size = System::Drawing::Size(0, 19);
			this->showFloatLbl->TabIndex = 67;
			// 
			// showIntLbl
			// 
			this->showIntLbl->AutoSize = true;
			this->showIntLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->showIntLbl->Location = System::Drawing::Point(363, 214);
			this->showIntLbl->Name = L"showIntLbl";
			this->showIntLbl->Size = System::Drawing::Size(0, 19);
			this->showIntLbl->TabIndex = 66;
			// 
			// doubleBox
			// 
			this->doubleBox->Enabled = false;
			this->doubleBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->doubleBox->Location = System::Drawing::Point(49, 320);
			this->doubleBox->Name = L"doubleBox";
			this->doubleBox->Size = System::Drawing::Size(163, 22);
			this->doubleBox->TabIndex = 65;
			this->doubleBox->Text = L"999999999";
			// 
			// floatBox
			// 
			this->floatBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->floatBox->Location = System::Drawing::Point(49, 267);
			this->floatBox->Name = L"floatBox";
			this->floatBox->Size = System::Drawing::Size(163, 22);
			this->floatBox->TabIndex = 64;
			this->floatBox->Text = L"3.14";
			// 
			// intBox
			// 
			this->intBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->intBox->Location = System::Drawing::Point(49, 214);
			this->intBox->Name = L"intBox";
			this->intBox->Size = System::Drawing::Size(163, 22);
			this->intBox->TabIndex = 63;
			this->intBox->Text = L"123";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(42, 162);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(375, 19);
			this->label18->TabIndex = 62;
			this->label18->Text = L"Введите числа соответствующих типов в поля ниже";
			// 
			// btnShowDouble
			// 
			this->btnShowDouble->AutoSize = true;
			this->btnShowDouble->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnShowDouble->Enabled = false;
			this->btnShowDouble->FlatAppearance->BorderSize = 0;
			this->btnShowDouble->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShowDouble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShowDouble->ForeColor = System::Drawing::Color::White;
			this->btnShowDouble->Location = System::Drawing::Point(236, 312);
			this->btnShowDouble->Name = L"btnShowDouble";
			this->btnShowDouble->Size = System::Drawing::Size(107, 35);
			this->btnShowDouble->TabIndex = 61;
			this->btnShowDouble->Text = L"Вывести double";
			this->btnShowDouble->UseVisualStyleBackColor = false;
			// 
			// btnShowFloat
			// 
			this->btnShowFloat->AutoSize = true;
			this->btnShowFloat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnShowFloat->FlatAppearance->BorderSize = 0;
			this->btnShowFloat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShowFloat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShowFloat->ForeColor = System::Drawing::Color::White;
			this->btnShowFloat->Location = System::Drawing::Point(236, 259);
			this->btnShowFloat->Name = L"btnShowFloat";
			this->btnShowFloat->Size = System::Drawing::Size(107, 35);
			this->btnShowFloat->TabIndex = 60;
			this->btnShowFloat->Text = L"Вывести float";
			this->btnShowFloat->UseVisualStyleBackColor = false;
			this->btnShowFloat->Click += gcnew System::EventHandler(this, &Lab1::btnShowFloat_Click);
			// 
			// btnShowInt
			// 
			this->btnShowInt->AutoSize = true;
			this->btnShowInt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnShowInt->FlatAppearance->BorderSize = 0;
			this->btnShowInt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShowInt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShowInt->ForeColor = System::Drawing::Color::White;
			this->btnShowInt->Location = System::Drawing::Point(236, 206);
			this->btnShowInt->Name = L"btnShowInt";
			this->btnShowInt->Size = System::Drawing::Size(107, 35);
			this->btnShowInt->TabIndex = 59;
			this->btnShowInt->Text = L"Вывести int";
			this->btnShowInt->UseVisualStyleBackColor = false;
			this->btnShowInt->Click += gcnew System::EventHandler(this, &Lab1::btnShowInt_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(305, 114);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 19);
			this->label14->TabIndex = 58;
			this->label14->Text = L"байт";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(305, 95);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 19);
			this->label15->TabIndex = 57;
			this->label15->Text = L"байт";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(305, 76);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 19);
			this->label16->TabIndex = 56;
			this->label16->Text = L"байт";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(305, 57);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 19);
			this->label17->TabIndex = 55;
			this->label17->Text = L"байт";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(136, 114);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 19);
			this->label12->TabIndex = 54;
			this->label12->Text = L"байта";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(136, 95);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 19);
			this->label13->TabIndex = 53;
			this->label13->Text = L"байта";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(136, 76);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 19);
			this->label11->TabIndex = 52;
			this->label11->Text = L"байта";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(136, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 19);
			this->label10->TabIndex = 51;
			this->label10->Text = L"байта";
			// 
			// labBoolSize
			// 
			this->labBoolSize->AutoSize = true;
			this->labBoolSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labBoolSize->Location = System::Drawing::Point(282, 114);
			this->labBoolSize->Name = L"labBoolSize";
			this->labBoolSize->Size = System::Drawing::Size(17, 19);
			this->labBoolSize->TabIndex = 50;
			this->labBoolSize->Text = L"4";
			// 
			// labCharSize
			// 
			this->labCharSize->AutoSize = true;
			this->labCharSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labCharSize->Location = System::Drawing::Point(282, 95);
			this->labCharSize->Name = L"labCharSize";
			this->labCharSize->Size = System::Drawing::Size(17, 19);
			this->labCharSize->TabIndex = 49;
			this->labCharSize->Text = L"4";
			// 
			// labLongDSize
			// 
			this->labLongDSize->AutoSize = true;
			this->labLongDSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labLongDSize->Location = System::Drawing::Point(282, 76);
			this->labLongDSize->Name = L"labLongDSize";
			this->labLongDSize->Size = System::Drawing::Size(17, 19);
			this->labLongDSize->TabIndex = 48;
			this->labLongDSize->Text = L"4";
			// 
			// labDoubleSize
			// 
			this->labDoubleSize->AutoSize = true;
			this->labDoubleSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labDoubleSize->Location = System::Drawing::Point(282, 57);
			this->labDoubleSize->Name = L"labDoubleSize";
			this->labDoubleSize->Size = System::Drawing::Size(17, 19);
			this->labDoubleSize->TabIndex = 47;
			this->labDoubleSize->Text = L"4";
			// 
			// labFloatSize
			// 
			this->labFloatSize->AutoSize = true;
			this->labFloatSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labFloatSize->Location = System::Drawing::Point(113, 114);
			this->labFloatSize->Name = L"labFloatSize";
			this->labFloatSize->Size = System::Drawing::Size(17, 19);
			this->labFloatSize->TabIndex = 46;
			this->labFloatSize->Text = L"4";
			// 
			// lablongSize
			// 
			this->lablongSize->AutoSize = true;
			this->lablongSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lablongSize->Location = System::Drawing::Point(113, 95);
			this->lablongSize->Name = L"lablongSize";
			this->lablongSize->Size = System::Drawing::Size(17, 19);
			this->lablongSize->TabIndex = 45;
			this->lablongSize->Text = L"4";
			// 
			// labShortSize
			// 
			this->labShortSize->AutoSize = true;
			this->labShortSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labShortSize->Location = System::Drawing::Point(113, 76);
			this->labShortSize->Name = L"labShortSize";
			this->labShortSize->Size = System::Drawing::Size(17, 19);
			this->labShortSize->TabIndex = 44;
			this->labShortSize->Text = L"4";
			// 
			// labIntSize
			// 
			this->labIntSize->AutoSize = true;
			this->labIntSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labIntSize->Location = System::Drawing::Point(113, 57);
			this->labIntSize->Name = L"labIntSize";
			this->labIntSize->Size = System::Drawing::Size(17, 19);
			this->labIntSize->TabIndex = 43;
			this->labIntSize->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(240, 114);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 19);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Bool";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(238, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 19);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Char";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(190, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 19);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Long double";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(223, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 19);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Double";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(68, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 19);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Float";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(47, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 19);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Long int";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(47, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 19);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Short int";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(81, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 19);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Int";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(42, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(477, 19);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Количество памяти, занимаемое переменными различных типов:";
			// 
			// Lab1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 532);
			this->Controls->Add(this->workPanel);
			this->Controls->Add(this->errPanel);
			this->Controls->Add(this->controlsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Lab1";
			this->Text = L"Lab1";
			this->Load += gcnew System::EventHandler(this, &Lab1::Lab1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->errorPanel->ResumeLayout(false);
			this->errorPanel->PerformLayout();
			this->errPanel->ResumeLayout(false);
			this->controlsPanel->ResumeLayout(false);
			this->workPanel->ResumeLayout(false);
			this->workPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void printSizes();
		void hideEr();
		void showEr(String^ text);

	private: System::Void Lab1_Load(System::Object^ sender, System::EventArgs^ e);
		   void showInt(int num);
private: System::Void btnShowInt_Click(System::Object^ sender, System::EventArgs^ e);
	   void showFloat();
private: System::Void btnShowFloat_Click(System::Object^ sender, System::EventArgs^ e);
};
}
