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
	/// ������ ��� Lab2
	/// </summary>
	public ref class Lab2 : public System::Windows::Forms::Form
	{
	public:
		Lab2(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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

	private: System::Windows::Forms::TextBox^ textBoxIndexA;





	private: System::Windows::Forms::Button^ btnSwap;
	private: System::Windows::Forms::TextBox^ textBoxIndexB;

	private: System::Windows::Forms::Label^ infoLabelHeader;

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
	private: System::Windows::Forms::TextBox^ textBoxNum;
	private: System::Windows::Forms::Button^ errorLabel1;
	private: System::Windows::Forms::Panel^ controlsPanel;
	private: System::Windows::Forms::Panel^ errPanel;
	private: System::Windows::Forms::Panel^ welcomePanel;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;







	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab2::typeid));
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
			this->btnGetArray = (gcnew System::Windows::Forms::Button());
			this->errorLabel1 = (gcnew System::Windows::Forms::Button());
			this->controlsPanel = (gcnew System::Windows::Forms::Panel());
			this->errPanel = (gcnew System::Windows::Forms::Panel());
			this->welcomePanel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->arrayControlsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formTable))->BeginInit();
			this->controlsPanel->SuspendLayout();
			this->errPanel->SuspendLayout();
			this->welcomePanel->SuspendLayout();
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
			this->infoLabel3->Location = System::Drawing::Point(244, 316);
			this->infoLabel3->Name = L"infoLabel3";
			this->infoLabel3->Size = System::Drawing::Size(201, 19);
			this->infoLabel3->TabIndex = 32;
			this->infoLabel3->Text = L"�������� ������� �� ������!";
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
			this->arrayControlsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->arrayControlsPanel->Location = System::Drawing::Point(0, 0);
			this->arrayControlsPanel->Name = L"arrayControlsPanel";
			this->arrayControlsPanel->Size = System::Drawing::Size(861, 405);
			this->arrayControlsPanel->TabIndex = 31;
			this->arrayControlsPanel->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label7->Location = System::Drawing::Point(579, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 19);
			this->label7->TabIndex = 23;
			this->label7->Text = L"�����:";
			// 
			// infoLabelHeader4
			// 
			this->infoLabelHeader4->AutoSize = true;
			this->infoLabelHeader4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->infoLabelHeader4->Location = System::Drawing::Point(244, 275);
			this->infoLabelHeader4->Name = L"infoLabelHeader4";
			this->infoLabelHeader4->Size = System::Drawing::Size(143, 19);
			this->infoLabelHeader4->TabIndex = 27;
			this->infoLabelHeader4->Text = L"������� ��������:";
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
			this->btnSearchMore->Location = System::Drawing::Point(583, 141);
			this->btnSearchMore->Name = L"btnSearchMore";
			this->btnSearchMore->Size = System::Drawing::Size(167, 35);
			this->btnSearchMore->TabIndex = 20;
			this->btnSearchMore->Text = L"������� ��������";
			this->btnSearchMore->UseVisualStyleBackColor = false;
			this->btnSearchMore->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMore_Click);
			// 
			// infoLabel4
			// 
			this->infoLabel4->AutoSize = true;
			this->infoLabel4->Location = System::Drawing::Point(535, 278);
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
			this->textBoxNum->Location = System::Drawing::Point(583, 40);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(167, 20);
			this->textBoxNum->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label5->Location = System::Drawing::Point(579, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(199, 19);
			this->label5->TabIndex = 19;
			this->label5->Text = L"������� ����� ����� (-99; 99)";
			// 
			// btnSearchLess
			// 
			this->btnSearchLess->AutoSize = true;
			this->btnSearchLess->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchLess->Enabled = false;
			this->btnSearchLess->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchLess->ForeColor = System::Drawing::Color::White;
			this->btnSearchLess->Location = System::Drawing::Point(583, 100);
			this->btnSearchLess->Name = L"btnSearchLess";
			this->btnSearchLess->Size = System::Drawing::Size(167, 35);
			this->btnSearchLess->TabIndex = 19;
			this->btnSearchLess->Text = L"������� ��������";
			this->btnSearchLess->UseVisualStyleBackColor = false;
			this->btnSearchLess->Click += gcnew System::EventHandler(this, &Lab2::btnSearchLess_Click);
			// 
			// infoLabelHeader2
			// 
			this->infoLabelHeader2->AutoSize = true;
			this->infoLabelHeader2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->infoLabelHeader2->Location = System::Drawing::Point(244, 292);
			this->infoLabelHeader2->Name = L"infoLabelHeader2";
			this->infoLabelHeader2->Size = System::Drawing::Size(172, 19);
			this->infoLabelHeader2->TabIndex = 25;
			this->infoLabelHeader2->Text = L"���������� ���������:";
			this->infoLabelHeader2->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label8->Location = System::Drawing::Point(42, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 24;
			this->label8->Text = L"�����:";
			// 
			// infoLabel2
			// 
			this->infoLabel2->AutoSize = true;
			this->infoLabel2->Location = System::Drawing::Point(535, 295);
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
			this->label3->Location = System::Drawing::Point(42, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 19);
			this->label3->TabIndex = 26;
			this->label3->Text = L"������� ������� ���������";
			// 
			// btnSearchMiddle
			// 
			this->btnSearchMiddle->AutoSize = true;
			this->btnSearchMiddle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchMiddle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchMiddle->ForeColor = System::Drawing::Color::White;
			this->btnSearchMiddle->Location = System::Drawing::Point(46, 221);
			this->btnSearchMiddle->Name = L"btnSearchMiddle";
			this->btnSearchMiddle->Size = System::Drawing::Size(167, 35);
			this->btnSearchMiddle->TabIndex = 17;
			this->btnSearchMiddle->Text = L"�������";
			this->btnSearchMiddle->UseVisualStyleBackColor = false;
			this->btnSearchMiddle->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMiddle_Click);
			// 
			// textBoxIndexA
			// 
			this->textBoxIndexA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIndexA->Location = System::Drawing::Point(46, 300);
			this->textBoxIndexA->Name = L"textBoxIndexA";
			this->textBoxIndexA->Size = System::Drawing::Size(81, 20);
			this->textBoxIndexA->TabIndex = 23;
			// 
			// btnSearchMax
			// 
			this->btnSearchMax->AutoSize = true;
			this->btnSearchMax->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSearchMax->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchMax->ForeColor = System::Drawing::Color::White;
			this->btnSearchMax->Location = System::Drawing::Point(46, 180);
			this->btnSearchMax->Name = L"btnSearchMax";
			this->btnSearchMax->Size = System::Drawing::Size(167, 35);
			this->btnSearchMax->TabIndex = 16;
			this->btnSearchMax->Text = L"��������";
			this->btnSearchMax->UseVisualStyleBackColor = false;
			this->btnSearchMax->Click += gcnew System::EventHandler(this, &Lab2::btnSearchMax_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label6->Location = System::Drawing::Point(42, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 19);
			this->label6->TabIndex = 20;
			this->label6->Text = L"�������� ����������";
			// 
			// btnSwap
			// 
			this->btnSwap->AutoSize = true;
			this->btnSwap->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSwap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSwap->ForeColor = System::Drawing::Color::White;
			this->btnSwap->Location = System::Drawing::Point(46, 326);
			this->btnSwap->Name = L"btnSwap";
			this->btnSwap->Size = System::Drawing::Size(166, 35);
			this->btnSwap->TabIndex = 25;
			this->btnSwap->Text = L"�������� �������";
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
			this->btnBinarySearch->Location = System::Drawing::Point(583, 181);
			this->btnBinarySearch->Name = L"btnBinarySearch";
			this->btnBinarySearch->Size = System::Drawing::Size(167, 35);
			this->btnBinarySearch->TabIndex = 22;
			this->btnBinarySearch->Text = L"�������� �����";
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
			this->btnSearchMin->Location = System::Drawing::Point(45, 138);
			this->btnSearchMin->Name = L"btnSearchMin";
			this->btnSearchMin->Size = System::Drawing::Size(167, 35);
			this->btnSearchMin->TabIndex = 15;
			this->btnSearchMin->Text = L"�������";
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
			this->sortsBox->Location = System::Drawing::Point(45, 39);
			this->sortsBox->Name = L"sortsBox";
			this->sortsBox->Size = System::Drawing::Size(167, 21);
			this->sortsBox->TabIndex = 13;
			// 
			// textBoxIndexB
			// 
			this->textBoxIndexB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIndexB->Location = System::Drawing::Point(131, 300);
			this->textBoxIndexB->Name = L"textBoxIndexB";
			this->textBoxIndexB->Size = System::Drawing::Size(81, 20);
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
			this->btnSort->Location = System::Drawing::Point(45, 67);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(123, 35);
			this->btnSort->TabIndex = 14;
			this->btnSort->Text = L"�����������";
			this->btnSort->UseVisualStyleBackColor = false;
			this->btnSort->Click += gcnew System::EventHandler(this, &Lab2::btnSort_Click);
			// 
			// infoLabelHeader
			// 
			this->infoLabelHeader->AutoSize = true;
			this->infoLabelHeader->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->infoLabelHeader->Location = System::Drawing::Point(244, 17);
			this->infoLabelHeader->Name = L"infoLabelHeader";
			this->infoLabelHeader->Size = System::Drawing::Size(114, 19);
			this->infoLabelHeader->TabIndex = 29;
			this->infoLabelHeader->Text = L"����� ������:";
			this->infoLabelHeader->Visible = false;
			// 
			// infoLabel1
			// 
			this->infoLabel1->AutoSize = true;
			this->infoLabel1->Location = System::Drawing::Point(361, 21);
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
			this->btnBruteforceSearch->Enabled = false;
			this->btnBruteforceSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBruteforceSearch->ForeColor = System::Drawing::Color::White;
			this->btnBruteforceSearch->Location = System::Drawing::Point(583, 222);
			this->btnBruteforceSearch->Name = L"btnBruteforceSearch";
			this->btnBruteforceSearch->Size = System::Drawing::Size(167, 35);
			this->btnBruteforceSearch->TabIndex = 21;
			this->btnBruteforceSearch->Text = L"����� ���������";
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
			this->formTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->formTable->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->formTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->formTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->formTable->ColumnHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->formTable->DefaultCellStyle = dataGridViewCellStyle3;
			this->formTable->Enabled = false;
			this->formTable->Location = System::Drawing::Point(226, 39);
			this->formTable->Margin = System::Windows::Forms::Padding(2);
			this->formTable->Name = L"formTable";
			this->formTable->ReadOnly = true;
			this->formTable->RowHeadersVisible = false;
			this->formTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->formTable->ShowEditingIcon = false;
			this->formTable->Size = System::Drawing::Size(352, 222);
			this->formTable->TabIndex = 24;
			// 
			// btnGetArray
			// 
			this->btnGetArray->BackColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGetArray->ForeColor = System::Drawing::Color::White;
			this->btnGetArray->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGetArray->Location = System::Drawing::Point(46, 41);
			this->btnGetArray->Margin = System::Windows::Forms::Padding(2);
			this->btnGetArray->Name = L"btnGetArray";
			this->btnGetArray->Size = System::Drawing::Size(180, 32);
			this->btnGetArray->TabIndex = 25;
			this->btnGetArray->Text = L"������������� ������";
			this->btnGetArray->UseVisualStyleBackColor = false;
			this->btnGetArray->Click += gcnew System::EventHandler(this, &Lab2::btnGetArray_Click);
			// 
			// errorLabel1
			// 
			this->errorLabel1->BackColor = System::Drawing::Color::Transparent;
			this->errorLabel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"errorLabel1.BackgroundImage")));
			this->errorLabel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->errorLabel1->FlatAppearance->BorderSize = 0;
			this->errorLabel1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->errorLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->errorLabel1->Location = System::Drawing::Point(46, 1);
			this->errorLabel1->Name = L"errorLabel1";
			this->errorLabel1->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->errorLabel1->Size = System::Drawing::Size(403, 23);
			this->errorLabel1->TabIndex = 32;
			this->errorLabel1->Text = L"button1";
			this->errorLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->errorLabel1->UseVisualStyleBackColor = false;
			this->errorLabel1->Visible = false;
			// 
			// controlsPanel
			// 
			this->controlsPanel->Controls->Add(this->btnCloseForm);
			this->controlsPanel->Controls->Add(this->btnGetArray);
			this->controlsPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->controlsPanel->Location = System::Drawing::Point(0, 0);
			this->controlsPanel->Name = L"controlsPanel";
			this->controlsPanel->Size = System::Drawing::Size(861, 78);
			this->controlsPanel->TabIndex = 33;
			// 
			// errPanel
			// 
			this->errPanel->Controls->Add(this->errorLabel1);
			this->errPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->errPanel->Location = System::Drawing::Point(0, 483);
			this->errPanel->Name = L"errPanel";
			this->errPanel->Size = System::Drawing::Size(861, 75);
			this->errPanel->TabIndex = 34;
			// 
			// welcomePanel
			// 
			this->welcomePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"welcomePanel.BackgroundImage")));
			this->welcomePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->welcomePanel->Controls->Add(this->arrayControlsPanel);
			this->welcomePanel->Controls->Add(this->label1);
			this->welcomePanel->Controls->Add(this->richTextBox1);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(0, 78);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->Size = System::Drawing::Size(861, 405);
			this->welcomePanel->TabIndex = 35;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(46, 116);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(301, 96);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"��� ������ ������ ������� ������ \"������������� ������\", ��������������� ������ �"
				L"���";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������������ ������ �2";
			// 
			// Lab2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(861, 558);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->errPanel);
			this->Controls->Add(this->controlsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Lab2";
			this->Text = L"Lab2";
			this->arrayControlsPanel->ResumeLayout(false);
			this->arrayControlsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formTable))->EndInit();
			this->controlsPanel->ResumeLayout(false);
			this->errPanel->ResumeLayout(false);
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//��������� ��������� ������� �������
	private: void formTableSetup();

		   //������� ��������� � �������
	private: void formTableClean();

		   //����� ������� � �����
	private: void showArrayInForm();

		   //����� ������� ���������� �������
	private: int intTypeCheck(String^ text);

		   //����� ������� ���������� �������
	private: int indexTypeCheck(String^ text, String^ errorText);

		   //����� ������� ���������� �������
	private: void showTime(int time, String^ unit);

		   //����� ���������� ��������� ���������
	private: void showNum(int num);

		   //����� ������
	private: void showError(String^ text);

		   //����� �������� �������� � �������
	private: void showMiddle(int middle);

		   //������� ������� ���������� �������
	private: void hideTime();

		   //������� ���������� ��������� ���������
	private: void hideNum();

		   //������� �������� ��������
	private: void hideMiddle();

		   //������� ���� �������������� ���������
	private: void hideInfo();

		   //����� ���������� ��������
	private: void showEl(int index);

		   //�������� ������, ������� �� ������ ��������, ���� ������ �� ������������
	private: void btnsDisable();
		   
		   //� ������ �� �������
	private: void btnsEnable();	   
		   //��������������� ������� ��� ������ ��������
		   //� ����� �������� ���������������� �������
	private: int searchMiddleLeft(int *Arr, int arrayWidth, int marker, int middleEl, int middleNum);
		   //��������������� ������� ��� ������ ��������
		   //� ������ �������� ���������������� �������
	private: int searchMiddleRight(int *Arr, int arrayWidth, int marker, int middleEl, int middleNum);
//��������:
		//�������� �����
private: System::Void btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e);

		//��������� ����� �� ������ "��������� �������"
private: System::Void btnGetArray_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "�����������"
private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "����������� ��������"
private: System::Void btnSearchMin_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "������������ ��������"
private: System::Void btnSearchMax_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "������� ��������"
private: System::Void btnSearchMiddle_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "�������� �������"
private: System::Void btnSwap_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "������� ��������"
private: System::Void btnSearchLess_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "������� ��������"
private: System::Void btnSearchMore_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "�������� �����"
private: System::Void btnBinarySearch_Click(System::Object^ sender, System::EventArgs^ e);

	   //��������� ����� �� ������ "����� ���������"
private: System::Void btnBruteforceSearch_Click(System::Object^ sender, System::EventArgs^ e);

};
}
