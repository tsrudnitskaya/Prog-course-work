#include "../Sources/Service.h"
#include "../Sources/Lab2-functions.h"
#pragma once

namespace Coursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab2
	/// </summary>
	public ref class Lab2 : public System::Windows::Forms::Form
	{
	public:
		Lab2(void)
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
		~Lab2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCloseForm;
	protected:

	private: System::Windows::Forms::Label^ infoLabel3;
	private: System::Windows::Forms::Panel^ arrayControlsPanel;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnSearchMore;
	private: System::Windows::Forms::Button^ btnBinarySearch;
	private: System::Windows::Forms::Button^ btnSearchLess;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBruteforceSearch;
	private: System::Windows::Forms::TextBox^ textBoxNum;
	private: System::Windows::Forms::TextBox^ textBoxIndexA;





	private: System::Windows::Forms::Button^ btnSwap;
	private: System::Windows::Forms::TextBox^ textBoxIndexB;

	private: System::Windows::Forms::Label^ infoLabelHeader;
	private: System::Windows::Forms::Label^ errorLabel1;
	private: System::Windows::Forms::Label^ infoLabel1;

	private: System::Windows::Forms::Label^ infoLabelHeader4;
	private: System::Windows::Forms::Label^ infoLabel4;
	private: System::Windows::Forms::Label^ infoLabelHeader2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ infoLabel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnSearchMiddle;
	private: System::Windows::Forms::Button^ btnSearchMax;
	private: System::Windows::Forms::Button^ btnSearchMin;
	private: System::Windows::Forms::ComboBox^ sortsBox;
	private: System::Windows::Forms::Button^ btnSort;
	private: System::Windows::Forms::Button^ btnGetArray;
	private: System::Windows::Forms::DataGridView^ formTable;
	private: System::Windows::Forms::Label^ label3;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnCloseForm = (gcnew System::Windows::Forms::Button());
			this->infoLabel3 = (gcnew System::Windows::Forms::Label());
			this->arrayControlsPanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->infoLabelHeader4 = (gcnew System::Windows::Forms::Label());
			this->btnSearchMore = (gcnew System::Windows::Forms::Button());
			this->infoLabel4 = (gcnew System::Windows::Forms::Label());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSearchLess = (gcnew System::Windows::Forms::Button());
			this->infoLabelHeader2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->infoLabel2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSearchMiddle = (gcnew System::Windows::Forms::Button());
			this->textBoxIndexA = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchMax = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnSwap = (gcnew System::Windows::Forms::Button());
			this->btnBinarySearch = (gcnew System::Windows::Forms::Button());
			this->btnSearchMin = (gcnew System::Windows::Forms::Button());
			this->sortsBox = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxIndexB = (gcnew System::Windows::Forms::TextBox());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->infoLabelHeader = (gcnew System::Windows::Forms::Label());
			this->infoLabel1 = (gcnew System::Windows::Forms::Label());
			this->btnBruteforceSearch = (gcnew System::Windows::Forms::Button());
			this->formTable = (gcnew System::Windows::Forms::DataGridView());
			this->errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->btnGetArray = (gcnew System::Windows::Forms::Button());
			this->arrayControlsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formTable))->BeginInit();
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
			this->btnCloseForm->Click += gcnew System::EventHandler(this, &Lab2::btnCloseForm_Click);
			// 
			// infoLabel3
			// 
			this->infoLabel3->AutoSize = true;
			this->infoLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->infoLabel3->Location = System::Drawing::Point(202, 296);
			this->infoLabel3->Name = L"infoLabel3";
			this->infoLabel3->Size = System::Drawing::Size(201, 19);
			this->infoLabel3->TabIndex = 32;
			this->infoLabel3->Text = L"Заданный элемент не найден!";
			this->infoLabel3->Visible = false;
			// 
			// arrayControlsPanel
			// 
			this->arrayControlsPanel->Controls->Add(this->label7);
			this->arrayControlsPanel->Controls->Add(this->infoLabelHeader4);
			this->arrayControlsPanel->Controls->Add(this->btnSearchMore);
			this->arrayControlsPanel->Controls->Add(this->infoLabel4);
			this->arrayControlsPanel->Controls->Add(this->textBoxNum);
			this->arrayControlsPanel->Controls->Add(this->label5);
			this->arrayControlsPanel->Controls->Add(this->infoLabel3);
			this->arrayControlsPanel->Controls->Add(this->btnSearchLess);
			this->arrayControlsPanel->Controls->Add(this->infoLabelHeader2);
			this->arrayControlsPanel->Controls->Add(this->label8);
			this->arrayControlsPanel->Controls->Add(this->infoLabel2);
			this->arrayControlsPanel->Controls->Add(this->label3);
			this->arrayControlsPanel->Controls->Add(this->btnSearchMiddle);
			this->arrayControlsPanel->Controls->Add(this->textBoxIndexA);
			this->arrayControlsPanel->Controls->Add(this->btnSearchMax);
			this->arrayControlsPanel->Controls->Add(this->label6);
			this->arrayControlsPanel->Controls->Add(this->btnSwap);
			this->arrayControlsPanel->Controls->Add(this->btnBinarySearch);
			this->arrayControlsPanel->Controls->Add(this->btnSearchMin);
			this->arrayControlsPanel->Controls->Add(this->sortsBox);
			this->arrayControlsPanel->Controls->Add(this->textBoxIndexB);
			this->arrayControlsPanel->Controls->Add(this->btnSort);
			this->arrayControlsPanel->Controls->Add(this->infoLabelHeader);
			this->arrayControlsPanel->Controls->Add(this->infoLabel1);
			this->arrayControlsPanel->Controls->Add(this->btnBruteforceSearch);
			this->arrayControlsPanel->Controls->Add(this->formTable);
			this->arrayControlsPanel->Location = System::Drawing::Point(46, 84);
			this->arrayControlsPanel->Name = L"arrayControlsPanel";
			this->arrayControlsPanel->Size = System::Drawing::Size(803, 369);
			this->arrayControlsPanel->TabIndex = 31;
			this->arrayControlsPanel->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label7->Location = System::Drawing::Point(556, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 19);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Найти:";
			// 
			// infoLabelHeader4
			// 
			this->infoLabelHeader4->AutoSize = true;
			this->infoLabelHeader4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->infoLabelHeader4->Location = System::Drawing::Point(202, 255);
			this->infoLabelHeader4->Name = L"infoLabelHeader4";
			this->infoLabelHeader4->Size = System::Drawing::Size(143, 19);
			this->infoLabelHeader4->TabIndex = 27;
			this->infoLabelHeader4->Text = L"Среднее значение:";
			this->infoLabelHeader4->Visible = false;
			// 
			// btnSearchMore
			// 
			this->btnSearchMore->AutoSize = true;
			this->btnSearchMore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchMore->Enabled = false;
			this->btnSearchMore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchMore->ForeColor = System::Drawing::Color::White;
			this->btnSearchMore->Location = System::Drawing::Point(560, 137);
			this->btnSearchMore->Name = L"btnSearchMore";
			this->btnSearchMore->Size = System::Drawing::Size(167, 35);
			this->btnSearchMore->TabIndex = 20;
			this->btnSearchMore->Text = L"Большие элементы";
			this->btnSearchMore->UseVisualStyleBackColor = false;
			this->btnSearchMore->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMore_Click);
			// 
			// infoLabel4
			// 
			this->infoLabel4->AutoSize = true;
			this->infoLabel4->Location = System::Drawing::Point(493, 258);
			this->infoLabel4->Name = L"infoLabel4";
			this->infoLabel4->Size = System::Drawing::Size(35, 13);
			this->infoLabel4->TabIndex = 26;
			this->infoLabel4->Text = L"label1";
			this->infoLabel4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->infoLabel4->Visible = false;
			// 
			// textBoxNum
			// 
			this->textBoxNum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNum->Location = System::Drawing::Point(560, 36);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(118, 20);
			this->textBoxNum->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label5->Location = System::Drawing::Point(556, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(199, 19);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Введите целое число (-99; 99)";
			// 
			// btnSearchLess
			// 
			this->btnSearchLess->AutoSize = true;
			this->btnSearchLess->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchLess->Enabled = false;
			this->btnSearchLess->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchLess->ForeColor = System::Drawing::Color::White;
			this->btnSearchLess->Location = System::Drawing::Point(560, 96);
			this->btnSearchLess->Name = L"btnSearchLess";
			this->btnSearchLess->Size = System::Drawing::Size(167, 35);
			this->btnSearchLess->TabIndex = 19;
			this->btnSearchLess->Text = L"Меньшие элементы";
			this->btnSearchLess->UseVisualStyleBackColor = false;
			this->btnSearchLess->Click += gcnew System::EventHandler(this, &Lab2::btnSearchLess_Click);
			// 
			// infoLabelHeader2
			// 
			this->infoLabelHeader2->AutoSize = true;
			this->infoLabelHeader2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->infoLabelHeader2->Location = System::Drawing::Point(202, 272);
			this->infoLabelHeader2->Name = L"infoLabelHeader2";
			this->infoLabelHeader2->Size = System::Drawing::Size(172, 19);
			this->infoLabelHeader2->TabIndex = 25;
			this->infoLabelHeader2->Text = L"Количество элементов:";
			this->infoLabelHeader2->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label8->Location = System::Drawing::Point(0, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Найти:";
			// 
			// infoLabel2
			// 
			this->infoLabel2->AutoSize = true;
			this->infoLabel2->Location = System::Drawing::Point(493, 275);
			this->infoLabel2->Name = L"infoLabel2";
			this->infoLabel2->Size = System::Drawing::Size(35, 13);
			this->infoLabel2->TabIndex = 24;
			this->infoLabel2->Text = L"label1";
			this->infoLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->infoLabel2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label3->Location = System::Drawing::Point(0, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 19);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Введите индексы элементов";
			// 
			// btnSearchMiddle
			// 
			this->btnSearchMiddle->AutoSize = true;
			this->btnSearchMiddle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchMiddle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchMiddle->ForeColor = System::Drawing::Color::White;
			this->btnSearchMiddle->Location = System::Drawing::Point(4, 218);
			this->btnSearchMiddle->Name = L"btnSearchMiddle";
			this->btnSearchMiddle->Size = System::Drawing::Size(167, 35);
			this->btnSearchMiddle->TabIndex = 17;
			this->btnSearchMiddle->Text = L"Среднее";
			this->btnSearchMiddle->UseVisualStyleBackColor = false;
			this->btnSearchMiddle->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMiddle_Click);
			// 
			// textBoxIndexA
			// 
			this->textBoxIndexA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIndexA->Location = System::Drawing::Point(4, 297);
			this->textBoxIndexA->Name = L"textBoxIndexA";
			this->textBoxIndexA->Size = System::Drawing::Size(75, 20);
			this->textBoxIndexA->TabIndex = 23;
			// 
			// btnSearchMax
			// 
			this->btnSearchMax->AutoSize = true;
			this->btnSearchMax->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchMax->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchMax->ForeColor = System::Drawing::Color::White;
			this->btnSearchMax->Location = System::Drawing::Point(4, 177);
			this->btnSearchMax->Name = L"btnSearchMax";
			this->btnSearchMax->Size = System::Drawing::Size(167, 35);
			this->btnSearchMax->TabIndex = 16;
			this->btnSearchMax->Text = L"Максимум";
			this->btnSearchMax->UseVisualStyleBackColor = false;
			this->btnSearchMax->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMax_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label6->Location = System::Drawing::Point(0, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 19);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Выберите сортировку";
			// 
			// btnSwap
			// 
			this->btnSwap->AutoSize = true;
			this->btnSwap->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSwap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSwap->ForeColor = System::Drawing::Color::White;
			this->btnSwap->Location = System::Drawing::Point(4, 323);
			this->btnSwap->Name = L"btnSwap";
			this->btnSwap->Size = System::Drawing::Size(160, 35);
			this->btnSwap->TabIndex = 25;
			this->btnSwap->Text = L"Поменять местами";
			this->btnSwap->UseVisualStyleBackColor = false;
			this->btnSwap->Click += gcnew System::EventHandler(this, &Lab2::btnSwap_Click);
			// 
			// btnBinarySearch
			// 
			this->btnBinarySearch->AutoSize = true;
			this->btnBinarySearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnBinarySearch->Enabled = false;
			this->btnBinarySearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBinarySearch->ForeColor = System::Drawing::Color::White;
			this->btnBinarySearch->Location = System::Drawing::Point(560, 177);
			this->btnBinarySearch->Name = L"btnBinarySearch";
			this->btnBinarySearch->Size = System::Drawing::Size(167, 35);
			this->btnBinarySearch->TabIndex = 22;
			this->btnBinarySearch->Text = L"Бинарный поиск";
			this->btnBinarySearch->UseVisualStyleBackColor = false;
			this->btnBinarySearch->Click += gcnew System::EventHandler(this, &Lab2::btnBinarySearch_Click);
			// 
			// btnSearchMin
			// 
			this->btnSearchMin->AutoSize = true;
			this->btnSearchMin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchMin->ForeColor = System::Drawing::Color::White;
			this->btnSearchMin->Location = System::Drawing::Point(3, 135);
			this->btnSearchMin->Name = L"btnSearchMin";
			this->btnSearchMin->Size = System::Drawing::Size(167, 35);
			this->btnSearchMin->TabIndex = 15;
			this->btnSearchMin->Text = L"Минимум";
			this->btnSearchMin->UseVisualStyleBackColor = false;
			this->btnSearchMin->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMin_Click);
			// 
			// sortsBox
			// 
			this->sortsBox->IntegralHeight = false;
			this->sortsBox->ItemHeight = 13;
			this->sortsBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Bubble sort", L"Shaker sort", L"Comb sort", L"Insert sort",
					L"Quick sort"
			});
			this->sortsBox->Location = System::Drawing::Point(3, 36);
			this->sortsBox->Name = L"sortsBox";
			this->sortsBox->Size = System::Drawing::Size(167, 21);
			this->sortsBox->TabIndex = 13;
			// 
			// textBoxIndexB
			// 
			this->textBoxIndexB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIndexB->Location = System::Drawing::Point(89, 297);
			this->textBoxIndexB->Name = L"textBoxIndexB";
			this->textBoxIndexB->Size = System::Drawing::Size(75, 20);
			this->textBoxIndexB->TabIndex = 24;
			// 
			// btnSort
			// 
			this->btnSort->AutoSize = true;
			this->btnSort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSort->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSort->ForeColor = System::Drawing::Color::White;
			this->btnSort->Location = System::Drawing::Point(3, 64);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(123, 35);
			this->btnSort->TabIndex = 14;
			this->btnSort->Text = L"Сортировать";
			this->btnSort->UseVisualStyleBackColor = false;
			this->btnSort->Click += gcnew System::EventHandler(this, &Lab2::btnSort_Click);
			// 
			// infoLabelHeader
			// 
			this->infoLabelHeader->AutoSize = true;
			this->infoLabelHeader->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->infoLabelHeader->Location = System::Drawing::Point(202, 14);
			this->infoLabelHeader->Name = L"infoLabelHeader";
			this->infoLabelHeader->Size = System::Drawing::Size(114, 19);
			this->infoLabelHeader->TabIndex = 29;
			this->infoLabelHeader->Text = L"Время работы:";
			this->infoLabelHeader->Visible = false;
			// 
			// infoLabel1
			// 
			this->infoLabel1->AutoSize = true;
			this->infoLabel1->Location = System::Drawing::Point(319, 18);
			this->infoLabel1->Name = L"infoLabel1";
			this->infoLabel1->Size = System::Drawing::Size(35, 13);
			this->infoLabel1->TabIndex = 27;
			this->infoLabel1->Text = L"label1";
			this->infoLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->infoLabel1->Visible = false;
			// 
			// btnBruteforceSearch
			// 
			this->btnBruteforceSearch->AutoSize = true;
			this->btnBruteforceSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnBruteforceSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBruteforceSearch->ForeColor = System::Drawing::Color::White;
			this->btnBruteforceSearch->Location = System::Drawing::Point(560, 218);
			this->btnBruteforceSearch->Name = L"btnBruteforceSearch";
			this->btnBruteforceSearch->Size = System::Drawing::Size(167, 35);
			this->btnBruteforceSearch->TabIndex = 21;
			this->btnBruteforceSearch->Text = L"Поиск перебором";
			this->btnBruteforceSearch->UseVisualStyleBackColor = false;
			this->btnBruteforceSearch->Click += gcnew System::EventHandler(this, &Lab2::btnBruteforceSearch_Click);
			// 
			// formTable
			// 
			this->formTable->AllowUserToAddRows = false;
			this->formTable->AllowUserToDeleteRows = false;
			this->formTable->AllowUserToResizeColumns = false;
			this->formTable->AllowUserToResizeRows = false;
			this->formTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->formTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->formTable->BackgroundColor = System::Drawing::Color::White;
			this->formTable->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->formTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->formTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->formTable->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->formTable->DefaultCellStyle = dataGridViewCellStyle1;
			this->formTable->Enabled = false;
			this->formTable->Location = System::Drawing::Point(205, 35);
			this->formTable->Margin = System::Windows::Forms::Padding(2);
			this->formTable->Name = L"formTable";
			this->formTable->ReadOnly = true;
			this->formTable->RowHeadersVisible = false;
			this->formTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->formTable->ShowEditingIcon = false;
			this->formTable->Size = System::Drawing::Size(327, 218);
			this->formTable->TabIndex = 24;
			// 
			// errorLabel1
			// 
			this->errorLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->errorLabel1->AutoSize = true;
			this->errorLabel1->Location = System::Drawing::Point(43, 472);
			this->errorLabel1->Name = L"errorLabel1";
			this->errorLabel1->Size = System::Drawing::Size(50, 13);
			this->errorLabel1->TabIndex = 28;
			this->errorLabel1->Text = L"Ошибка!";
			this->errorLabel1->Visible = false;
			// 
			// btnGetArray
			// 
			this->btnGetArray->BackColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGetArray->ForeColor = System::Drawing::Color::White;
			this->btnGetArray->Location = System::Drawing::Point(49, 47);
			this->btnGetArray->Margin = System::Windows::Forms::Padding(2);
			this->btnGetArray->Name = L"btnGetArray";
			this->btnGetArray->Size = System::Drawing::Size(180, 32);
			this->btnGetArray->TabIndex = 25;
			this->btnGetArray->Text = L"Сгенерировать массив";
			this->btnGetArray->UseVisualStyleBackColor = false;
			this->btnGetArray->Click += gcnew System::EventHandler(this, &Lab2::btnGetArray_Click);
			// 
			// Lab2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(861, 494);
			this->Controls->Add(this->arrayControlsPanel);
			this->Controls->Add(this->errorLabel1);
			this->Controls->Add(this->btnGetArray);
			this->Controls->Add(this->btnCloseForm);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Lab2";
			this->Text = L"Lab2";
			this->arrayControlsPanel->ResumeLayout(false);
			this->arrayControlsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Первичная настройка свойств таблицы
	private: void formTableSetup();

		   //Очистка выделения в таблице
	private: void formTableClean();

		   //вывод массива в форму
	private: void showArrayInForm();

		   //вывод времени выполнения функции
	private: void showTime(int time);

		   //вывод количества найденных элементов
	private: void showNum(int num);

		   //вывод ошибки
	private: void showError(String^ text);

		   //вывод среднего значения в массиве
	private: void showMiddle(int middle);

		   //скрытие времени выполнения функции
	private: void hideTime();

		   //скрытие количества найденных элементов
	private: void hideNum();

		   //скрытие среднего значения
	private: void hideMiddle();

		   //скрытие всех информационных элементов
	private: void hideInfo();

		   //показ найденного элемента
	private: void showEl(int index);

		   //дизаблим кнопки, которые не должны работать, пока массив не отсортирован
	private: void btnsDisable();
		   
		   //а теперь их энаблим
	private: void btnsEnable();
//КОНТРОЛЫ:
		//Закрытие формы
private: System::Void btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e);

		//Обработка клика по кнопке "Генерация массива"
private: System::Void btnGetArray_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Сортировать"
private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Минимальное значение"
private: System::Void btnSearchMin_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Максимальное значение"
private: System::Void btnSearchMax_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Среднее значение"
private: System::Void btnSearchMiddle_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Поменять местами"
private: System::Void btnSwap_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Меньшие элементы"
private: System::Void btnSearchLess_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Большие элементы"
private: System::Void btnSearchMore_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Бинарный поиск"
private: System::Void btnBinarySearch_Click(System::Object^ sender, System::EventArgs^ e);

	   //Обработка клика по кнопке "Поиск перебором"
private: System::Void btnBruteforceSearch_Click(System::Object^ sender, System::EventArgs^ e);


};
}
