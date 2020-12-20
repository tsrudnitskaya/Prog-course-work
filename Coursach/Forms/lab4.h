#include "../Sources/Service.h"
#pragma once

namespace Coursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для lab4
	/// </summary>
	public ref class lab4 : public System::Windows::Forms::Form
	{
	public:
		lab4(void)
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
		~lab4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ btnCloseForm;

	private: System::Windows::Forms::Panel^ controlsPanel;
	private: System::Windows::Forms::Panel^ errPanel;
	private: System::Windows::Forms::Panel^ errorPanel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ errorLabel1;
	private: System::Windows::Forms::Panel^ welcomePanel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ workPanel;


	private: System::Windows::Forms::Label^ correctText;
	private: System::Windows::Forms::Button^ btnGetText;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ searchResultsPanel;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ searchIndexesLabel;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ knmSearchBtn;

	private: System::Windows::Forms::TextBox^ searchBox;
	private: System::Windows::Forms::Button^ bruteForceSearchBtn;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ delBox;


	private: System::Windows::Forms::Button^ btnDeleteSubstr;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnFirstLetterSearch;
	private: System::Windows::Forms::Label^ deleteSubstrLabel;
	private: System::Windows::Forms::Button^ loadFromFile;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(lab4::typeid));
			this->btnCloseForm = (gcnew System::Windows::Forms::Button());
			this->controlsPanel = (gcnew System::Windows::Forms::Panel());
			this->loadFromFile = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnGetText = (gcnew System::Windows::Forms::Button());
			this->errPanel = (gcnew System::Windows::Forms::Panel());
			this->errorPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->welcomePanel = (gcnew System::Windows::Forms::Panel());
			this->workPanel = (gcnew System::Windows::Forms::Panel());
			this->deleteSubstrLabel = (gcnew System::Windows::Forms::Label());
			this->searchResultsPanel = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->searchIndexesLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->knmSearchBtn = (gcnew System::Windows::Forms::Button());
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->bruteForceSearchBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->delBox = (gcnew System::Windows::Forms::TextBox());
			this->btnDeleteSubstr = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnFirstLetterSearch = (gcnew System::Windows::Forms::Button());
			this->correctText = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->controlsPanel->SuspendLayout();
			this->errPanel->SuspendLayout();
			this->errorPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->welcomePanel->SuspendLayout();
			this->workPanel->SuspendLayout();
			this->searchResultsPanel->SuspendLayout();
			this->SuspendLayout();
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
			this->btnCloseForm->Click += gcnew System::EventHandler(this, &lab4::btnCloseForm_Click);
			// 
			// controlsPanel
			// 
			this->controlsPanel->BackColor = System::Drawing::Color::White;
			this->controlsPanel->Controls->Add(this->loadFromFile);
			this->controlsPanel->Controls->Add(this->label5);
			this->controlsPanel->Controls->Add(this->textBox1);
			this->controlsPanel->Controls->Add(this->btnGetText);
			this->controlsPanel->Controls->Add(this->btnCloseForm);
			this->controlsPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->controlsPanel->Location = System::Drawing::Point(0, 0);
			this->controlsPanel->Name = L"controlsPanel";
			this->controlsPanel->Size = System::Drawing::Size(808, 71);
			this->controlsPanel->TabIndex = 36;
			// 
			// loadFromFile
			// 
			this->loadFromFile->BackColor = System::Drawing::Color::Orange;
			this->loadFromFile->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->loadFromFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loadFromFile->ForeColor = System::Drawing::Color::White;
			this->loadFromFile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->loadFromFile->Location = System::Drawing::Point(625, 18);
			this->loadFromFile->Margin = System::Windows::Forms::Padding(2);
			this->loadFromFile->Name = L"loadFromFile";
			this->loadFromFile->Size = System::Drawing::Size(148, 32);
			this->loadFromFile->TabIndex = 45;
			this->loadFromFile->Text = L"Загрузить из файла";
			this->loadFromFile->UseVisualStyleBackColor = false;
			this->loadFromFile->Click += gcnew System::EventHandler(this, &lab4::loadFromFile_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(588, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 19);
			this->label5->TabIndex = 44;
			this->label5->Text = L"или";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(46, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(458, 22);
			this->textBox1->TabIndex = 27;
			this->textBox1->Text = L"d sd lkj kSDKk...  enegh ..jkljek,, eneghq pssdfp.";
			// 
			// btnGetText
			// 
			this->btnGetText->BackColor = System::Drawing::Color::Orange;
			this->btnGetText->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnGetText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGetText->ForeColor = System::Drawing::Color::White;
			this->btnGetText->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGetText->Location = System::Drawing::Point(517, 18);
			this->btnGetText->Margin = System::Windows::Forms::Padding(2);
			this->btnGetText->Name = L"btnGetText";
			this->btnGetText->Size = System::Drawing::Size(66, 32);
			this->btnGetText->TabIndex = 26;
			this->btnGetText->Text = L"ОК";
			this->btnGetText->UseVisualStyleBackColor = false;
			this->btnGetText->Click += gcnew System::EventHandler(this, &lab4::btnGetText_Click);
			// 
			// errPanel
			// 
			this->errPanel->BackColor = System::Drawing::Color::White;
			this->errPanel->Controls->Add(this->errorPanel);
			this->errPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->errPanel->Location = System::Drawing::Point(0, 495);
			this->errPanel->Name = L"errPanel";
			this->errPanel->Size = System::Drawing::Size(808, 46);
			this->errPanel->TabIndex = 37;
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
			// welcomePanel
			// 
			this->welcomePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"welcomePanel.BackgroundImage")));
			this->welcomePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->welcomePanel->Controls->Add(this->workPanel);
			this->welcomePanel->Controls->Add(this->label1);
			this->welcomePanel->Controls->Add(this->richTextBox1);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(0, 71);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->Size = System::Drawing::Size(808, 424);
			this->welcomePanel->TabIndex = 38;
			// 
			// workPanel
			// 
			this->workPanel->Controls->Add(this->deleteSubstrLabel);
			this->workPanel->Controls->Add(this->searchResultsPanel);
			this->workPanel->Controls->Add(this->label7);
			this->workPanel->Controls->Add(this->knmSearchBtn);
			this->workPanel->Controls->Add(this->searchBox);
			this->workPanel->Controls->Add(this->bruteForceSearchBtn);
			this->workPanel->Controls->Add(this->label6);
			this->workPanel->Controls->Add(this->delBox);
			this->workPanel->Controls->Add(this->btnDeleteSubstr);
			this->workPanel->Controls->Add(this->label4);
			this->workPanel->Controls->Add(this->label3);
			this->workPanel->Controls->Add(this->label2);
			this->workPanel->Controls->Add(this->btnFirstLetterSearch);
			this->workPanel->Controls->Add(this->correctText);
			this->workPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workPanel->Location = System::Drawing::Point(0, 0);
			this->workPanel->Name = L"workPanel";
			this->workPanel->Size = System::Drawing::Size(808, 424);
			this->workPanel->TabIndex = 2;
			this->workPanel->Visible = false;
			// 
			// deleteSubstrLabel
			// 
			this->deleteSubstrLabel->AutoSize = true;
			this->deleteSubstrLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteSubstrLabel->Location = System::Drawing::Point(283, 218);
			this->deleteSubstrLabel->Name = L"deleteSubstrLabel";
			this->deleteSubstrLabel->Size = System::Drawing::Size(0, 19);
			this->deleteSubstrLabel->TabIndex = 47;
			this->deleteSubstrLabel->Visible = false;
			// 
			// searchResultsPanel
			// 
			this->searchResultsPanel->Controls->Add(this->label8);
			this->searchResultsPanel->Controls->Add(this->searchIndexesLabel);
			this->searchResultsPanel->Location = System::Drawing::Point(166, 348);
			this->searchResultsPanel->Name = L"searchResultsPanel";
			this->searchResultsPanel->Size = System::Drawing::Size(526, 30);
			this->searchResultsPanel->TabIndex = 46;
			this->searchResultsPanel->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(0, 6);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(227, 19);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Последовательность найдена: ";
			// 
			// searchIndexesLabel
			// 
			this->searchIndexesLabel->AutoSize = true;
			this->searchIndexesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchIndexesLabel->Location = System::Drawing::Point(227, 6);
			this->searchIndexesLabel->Name = L"searchIndexesLabel";
			this->searchIndexesLabel->Size = System::Drawing::Size(0, 19);
			this->searchIndexesLabel->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(82, 317);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 19);
			this->label7->TabIndex = 43;
			this->label7->Text = L"или";
			// 
			// knmSearchBtn
			// 
			this->knmSearchBtn->AutoSize = true;
			this->knmSearchBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->knmSearchBtn->FlatAppearance->BorderSize = 0;
			this->knmSearchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->knmSearchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->knmSearchBtn->ForeColor = System::Drawing::Color::White;
			this->knmSearchBtn->Location = System::Drawing::Point(46, 343);
			this->knmSearchBtn->Name = L"knmSearchBtn";
			this->knmSearchBtn->Size = System::Drawing::Size(107, 35);
			this->knmSearchBtn->TabIndex = 42;
			this->knmSearchBtn->Text = L"Найти КНМ";
			this->knmSearchBtn->UseVisualStyleBackColor = false;
			this->knmSearchBtn->Click += gcnew System::EventHandler(this, &lab4::knmSearchBtn_Click);
			// 
			// searchBox
			// 
			this->searchBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchBox->Location = System::Drawing::Point(166, 317);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(95, 22);
			this->searchBox->TabIndex = 38;
			// 
			// bruteForceSearchBtn
			// 
			this->bruteForceSearchBtn->AutoSize = true;
			this->bruteForceSearchBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->bruteForceSearchBtn->FlatAppearance->BorderSize = 0;
			this->bruteForceSearchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bruteForceSearchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bruteForceSearchBtn->ForeColor = System::Drawing::Color::White;
			this->bruteForceSearchBtn->Location = System::Drawing::Point(46, 275);
			this->bruteForceSearchBtn->Name = L"bruteForceSearchBtn";
			this->bruteForceSearchBtn->Size = System::Drawing::Size(107, 35);
			this->bruteForceSearchBtn->TabIndex = 40;
			this->bruteForceSearchBtn->Text = L"Найти перебором";
			this->bruteForceSearchBtn->UseVisualStyleBackColor = false;
			this->bruteForceSearchBtn->Click += gcnew System::EventHandler(this, &lab4::bruteForceSearchBtn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(162, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(283, 19);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Найти введённую последовательность";
			// 
			// delBox
			// 
			this->delBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delBox->Location = System::Drawing::Point(166, 218);
			this->delBox->Name = L"delBox";
			this->delBox->Size = System::Drawing::Size(95, 22);
			this->delBox->TabIndex = 28;
			// 
			// btnDeleteSubstr
			// 
			this->btnDeleteSubstr->AutoSize = true;
			this->btnDeleteSubstr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnDeleteSubstr->FlatAppearance->BorderSize = 0;
			this->btnDeleteSubstr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteSubstr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDeleteSubstr->ForeColor = System::Drawing::Color::White;
			this->btnDeleteSubstr->Location = System::Drawing::Point(46, 171);
			this->btnDeleteSubstr->Name = L"btnDeleteSubstr";
			this->btnDeleteSubstr->Size = System::Drawing::Size(107, 35);
			this->btnDeleteSubstr->TabIndex = 36;
			this->btnDeleteSubstr->Text = L"Удалить";
			this->btnDeleteSubstr->UseVisualStyleBackColor = false;
			this->btnDeleteSubstr->Click += gcnew System::EventHandler(this, &lab4::btnDeleteSubstr_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(162, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(403, 38);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Вывести на экран ту же последовательность,\r\nудалив из всех слов заданный набор бу"
				L"кв и (или) цифр";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(162, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(465, 38);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Вывести на экран только те слова последовательности,\r\nв которых первая буква слов"
				L"а встречается в этом слове еще раз";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(46, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 19);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Изменённый текст:";
			// 
			// btnFirstLetterSearch
			// 
			this->btnFirstLetterSearch->AutoSize = true;
			this->btnFirstLetterSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnFirstLetterSearch->FlatAppearance->BorderSize = 0;
			this->btnFirstLetterSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFirstLetterSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnFirstLetterSearch->ForeColor = System::Drawing::Color::White;
			this->btnFirstLetterSearch->Location = System::Drawing::Point(46, 84);
			this->btnFirstLetterSearch->Name = L"btnFirstLetterSearch";
			this->btnFirstLetterSearch->Size = System::Drawing::Size(107, 35);
			this->btnFirstLetterSearch->TabIndex = 31;
			this->btnFirstLetterSearch->Text = L"Вывести";
			this->btnFirstLetterSearch->UseVisualStyleBackColor = false;
			this->btnFirstLetterSearch->Click += gcnew System::EventHandler(this, &lab4::btnFirstLetterSearch_Click);
			// 
			// correctText
			// 
			this->correctText->AutoSize = true;
			this->correctText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->correctText->Location = System::Drawing::Point(196, 33);
			this->correctText->Name = L"correctText";
			this->correctText->Size = System::Drawing::Size(0, 19);
			this->correctText->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Лабораторная работа №4";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(46, 116);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(347, 108);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Для начала работы введите (или используйте готовый) текст в текстовое поле наверх"
				L"у\nили выберите текстовый файл и нажмите OK.\nПри загрузке текста он сразу будет о"
				L"ттипографирован.";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// lab4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(808, 541);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->errPanel);
			this->Controls->Add(this->controlsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"lab4";
			this->Text = L"lab4";
			this->controlsPanel->ResumeLayout(false);
			this->controlsPanel->PerformLayout();
			this->errPanel->ResumeLayout(false);
			this->errorPanel->ResumeLayout(false);
			this->errorPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->workPanel->ResumeLayout(false);
			this->workPanel->PerformLayout();
			this->searchResultsPanel->ResumeLayout(false);
			this->searchResultsPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//показ ошибки
		void showErr(String^ text);
		//спрятать ошибки
		void hideErr();
		//оттипографировать строку
		void inputTextCorretion();
		//удалить один или несколько символов из строки
		void delStr(int i, int len);
		//удалить символ из строки
		void showSearchResults(int counter);
		//поиск перебором 
		int bruteForceSearch(char * subStr);
		//поиск КНМ
		int knmSearch(char * subStr);
		//удалить все найденные подстроки
		void delSubStr(char *subStr, int counter);
		//найти все слова, в которых первая буква повторяется
		void firstLetterSearch();

		//закрыть форму
private: System::Void btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e);
	   //получить текст для работы
private: System::Void btnGetText_Click(System::Object^ sender, System::EventArgs^ e);
	   //обработка нажатия кнопки "поиск перебором"
private: System::Void bruteForceSearchBtn_Click(System::Object^ sender, System::EventArgs^ e);
	   //обработка нажатия кнопки "поиск КНМ"
private: System::Void knmSearchBtn_Click(System::Object^ sender, System::EventArgs^ e);
	   //обработка нажатия кнопки "удалить"
private: System::Void btnDeleteSubstr_Click(System::Object^ sender, System::EventArgs^ e);
	   //обработка нажатия кнопки "вывести"
private: System::Void btnFirstLetterSearch_Click(System::Object^ sender, System::EventArgs^ e);
	   //обработка нажатия кнопки "Загрузить из файла"
private: System::Void loadFromFile_Click(System::Object^ sender, System::EventArgs^ e);
};
}
