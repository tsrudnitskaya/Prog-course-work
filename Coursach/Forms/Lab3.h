#include "../Sources/Service.h"
#include "../Sources/Lab3-functions.h"
#pragma once

namespace Coursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Lab3
	/// </summary>
	public ref class Lab3 : public System::Windows::Forms::Form
	{
	public:
		Lab3(void)
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
		~Lab3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Panel^ errPanel;
	private: System::Windows::Forms::Panel^ controlsPanel;
	private: System::Windows::Forms::Button^ btnCloseForm;
	private: System::Windows::Forms::Button^ btnGetArray;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ welcomePanel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ getMatrixDegreeCombo;
	private: System::Windows::Forms::ComboBox^ getStyleCombo;
	private: System::Windows::Forms::Panel^ workPanel;
	private: System::Windows::Forms::DataGridView^ matrixView;
	private: System::Windows::Forms::Label^ errorLabel1;
	private: System::Windows::Forms::Panel^ errorPanel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::ComboBox^ quotersOptionsCombo;

	private: System::Windows::Forms::Button^ btnQuotersChange;
	private: System::Windows::Forms::Button^ btnSort;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ secondMatrixPanel;
	private: System::Windows::Forms::Button^ btnDiv;

	private: System::Windows::Forms::Button^ btnMtpl;

	private: System::Windows::Forms::Button^ btnSub;

	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxNum;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ matrixView2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;



















































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab3::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->errPanel = (gcnew System::Windows::Forms::Panel());
			this->errorPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->controlsPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->getMatrixDegreeCombo = (gcnew System::Windows::Forms::ComboBox());
			this->getStyleCombo = (gcnew System::Windows::Forms::ComboBox());
			this->btnCloseForm = (gcnew System::Windows::Forms::Button());
			this->btnGetArray = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->welcomePanel = (gcnew System::Windows::Forms::Panel());
			this->workPanel = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMtpl = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnQuotersChange = (gcnew System::Windows::Forms::Button());
			this->quotersOptionsCombo = (gcnew System::Windows::Forms::ComboBox());
			this->matrixView = (gcnew System::Windows::Forms::DataGridView());
			this->secondMatrixPanel = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->matrixView2 = (gcnew System::Windows::Forms::DataGridView());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->errPanel->SuspendLayout();
			this->errorPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->controlsPanel->SuspendLayout();
			this->welcomePanel->SuspendLayout();
			this->workPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixView))->BeginInit();
			this->secondMatrixPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixView2))->BeginInit();
			this->SuspendLayout();
			// 
			// errPanel
			// 
			this->errPanel->BackColor = System::Drawing::Color::White;
			this->errPanel->Controls->Add(this->errorPanel);
			this->errPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->errPanel->Location = System::Drawing::Point(0, 528);
			this->errPanel->Name = L"errPanel";
			this->errPanel->Size = System::Drawing::Size(824, 52);
			this->errPanel->TabIndex = 36;
			// 
			// errorPanel
			// 
			this->errorPanel->Controls->Add(this->pictureBox1);
			this->errorPanel->Controls->Add(this->errorLabel1);
			this->errorPanel->Location = System::Drawing::Point(46, 0);
			this->errorPanel->Name = L"errorPanel";
			this->errorPanel->Size = System::Drawing::Size(254, 52);
			this->errorPanel->TabIndex = 35;
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
			this->errorLabel1->Location = System::Drawing::Point(27, 5);
			this->errorLabel1->Name = L"errorLabel1";
			this->errorLabel1->Size = System::Drawing::Size(0, 13);
			this->errorLabel1->TabIndex = 33;
			// 
			// controlsPanel
			// 
			this->controlsPanel->BackColor = System::Drawing::Color::White;
			this->controlsPanel->Controls->Add(this->label3);
			this->controlsPanel->Controls->Add(this->label2);
			this->controlsPanel->Controls->Add(this->getMatrixDegreeCombo);
			this->controlsPanel->Controls->Add(this->getStyleCombo);
			this->controlsPanel->Controls->Add(this->btnCloseForm);
			this->controlsPanel->Controls->Add(this->btnGetArray);
			this->controlsPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->controlsPanel->Location = System::Drawing::Point(0, 0);
			this->controlsPanel->Name = L"controlsPanel";
			this->controlsPanel->Size = System::Drawing::Size(824, 78);
			this->controlsPanel->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label3->Location = System::Drawing::Point(257, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 20);
			this->label3->TabIndex = 31;
			this->label3->Text = L"�������� ����� ����������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label2->Location = System::Drawing::Point(43, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 20);
			this->label2->TabIndex = 30;
			this->label2->Text = L"�������� �������:";
			// 
			// getMatrixDegreeCombo
			// 
			this->getMatrixDegreeCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->getMatrixDegreeCombo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->getMatrixDegreeCombo->FormattingEnabled = true;
			this->getMatrixDegreeCombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"6", L"8", L"10" });
			this->getMatrixDegreeCombo->Location = System::Drawing::Point(189, 28);
			this->getMatrixDegreeCombo->Name = L"getMatrixDegreeCombo";
			this->getMatrixDegreeCombo->Size = System::Drawing::Size(43, 29);
			this->getMatrixDegreeCombo->TabIndex = 29;
			// 
			// getStyleCombo
			// 
			this->getStyleCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->getStyleCombo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->getStyleCombo->FormattingEnabled = true;
			this->getStyleCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"�������", L"������" });
			this->getStyleCombo->Location = System::Drawing::Point(474, 28);
			this->getStyleCombo->Name = L"getStyleCombo";
			this->getStyleCombo->Size = System::Drawing::Size(90, 29);
			this->getStyleCombo->TabIndex = 28;
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
			this->btnCloseForm->Click += gcnew System::EventHandler(this, &Lab3::btnCloseForm_Click_1);
			// 
			// btnGetArray
			// 
			this->btnGetArray->BackColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGetArray->ForeColor = System::Drawing::Color::White;
			this->btnGetArray->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGetArray->Location = System::Drawing::Point(598, 27);
			this->btnGetArray->Margin = System::Windows::Forms::Padding(2);
			this->btnGetArray->Name = L"btnGetArray";
			this->btnGetArray->Size = System::Drawing::Size(180, 32);
			this->btnGetArray->TabIndex = 25;
			this->btnGetArray->Text = L"������������� �������";
			this->btnGetArray->UseVisualStyleBackColor = false;
			this->btnGetArray->Click += gcnew System::EventHandler(this, &Lab3::btnGetArray_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������������ ������ �3";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(46, 116);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(347, 65);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"��� ������ ������ �������� ������� ������� � ����� ���������� � ������� �� ������"
				L" \"������������� �������\"";
			// 
			// welcomePanel
			// 
			this->welcomePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"welcomePanel.BackgroundImage")));
			this->welcomePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->welcomePanel->Controls->Add(this->workPanel);
			this->welcomePanel->Controls->Add(this->label1);
			this->welcomePanel->Controls->Add(this->richTextBox1);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(0, 78);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->Size = System::Drawing::Size(824, 450);
			this->welcomePanel->TabIndex = 37;
			// 
			// workPanel
			// 
			this->workPanel->BackColor = System::Drawing::Color::White;
			this->workPanel->Controls->Add(this->richTextBox3);
			this->workPanel->Controls->Add(this->label8);
			this->workPanel->Controls->Add(this->button1);
			this->workPanel->Controls->Add(this->richTextBox2);
			this->workPanel->Controls->Add(this->btnDiv);
			this->workPanel->Controls->Add(this->btnMtpl);
			this->workPanel->Controls->Add(this->btnSub);
			this->workPanel->Controls->Add(this->btnAdd);
			this->workPanel->Controls->Add(this->label7);
			this->workPanel->Controls->Add(this->textBoxNum);
			this->workPanel->Controls->Add(this->label5);
			this->workPanel->Controls->Add(this->btnSort);
			this->workPanel->Controls->Add(this->label4);
			this->workPanel->Controls->Add(this->btnQuotersChange);
			this->workPanel->Controls->Add(this->quotersOptionsCombo);
			this->workPanel->Controls->Add(this->matrixView);
			this->workPanel->Controls->Add(this->secondMatrixPanel);
			this->workPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workPanel->Location = System::Drawing::Point(0, 0);
			this->workPanel->Name = L"workPanel";
			this->workPanel->Size = System::Drawing::Size(824, 450);
			this->workPanel->TabIndex = 2;
			this->workPanel->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(607, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"label8";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(704, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 35);
			this->button1->TabIndex = 43;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Lab3::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(46, 19);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(356, 57);
			this->richTextBox2->TabIndex = 42;
			this->richTextBox2->Text = L"��� ����� ��������� ��� ��������, ����� ��������� �������, ��� ������� ����������"
				L"��� ��������, ������ ��������� ��������� �������";
			// 
			// btnDiv
			// 
			this->btnDiv->AutoSize = true;
			this->btnDiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnDiv->FlatAppearance->BorderSize = 0;
			this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDiv->ForeColor = System::Drawing::Color::White;
			this->btnDiv->Location = System::Drawing::Point(247, 369);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(36, 35);
			this->btnDiv->TabIndex = 41;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Lab3::btnDiv_Click);
			// 
			// btnMtpl
			// 
			this->btnMtpl->AutoSize = true;
			this->btnMtpl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnMtpl->FlatAppearance->BorderSize = 0;
			this->btnMtpl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMtpl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMtpl->ForeColor = System::Drawing::Color::White;
			this->btnMtpl->Location = System::Drawing::Point(205, 369);
			this->btnMtpl->Name = L"btnMtpl";
			this->btnMtpl->Padding = System::Windows::Forms::Padding(0, 6, 0, 0);
			this->btnMtpl->Size = System::Drawing::Size(36, 35);
			this->btnMtpl->TabIndex = 40;
			this->btnMtpl->Text = L"*";
			this->btnMtpl->UseVisualStyleBackColor = false;
			this->btnMtpl->Click += gcnew System::EventHandler(this, &Lab3::btnMtpl_Click);
			// 
			// btnSub
			// 
			this->btnSub->AutoSize = true;
			this->btnSub->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSub->FlatAppearance->BorderSize = 0;
			this->btnSub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSub->ForeColor = System::Drawing::Color::White;
			this->btnSub->Location = System::Drawing::Point(163, 369);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btnSub->Size = System::Drawing::Size(36, 35);
			this->btnSub->TabIndex = 39;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &Lab3::btnSub_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->AutoSize = true;
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(121, 369);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Padding = System::Windows::Forms::Padding(3, 1, 0, 0);
			this->btnAdd->Size = System::Drawing::Size(36, 35);
			this->btnAdd->TabIndex = 38;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Lab3::btnAdd_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label7->Location = System::Drawing::Point(41, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(260, 19);
			this->label7->TabIndex = 37;
			this->label7->Text = L"������� ����� � �������� �������� (*):";
			// 
			// textBoxNum
			// 
			this->textBoxNum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNum->Location = System::Drawing::Point(45, 378);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(58, 20);
			this->textBoxNum->TabIndex = 36;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label5->Location = System::Drawing::Point(45, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 20);
			this->label5->TabIndex = 33;
			this->label5->Text = L"�������� �������";
			// 
			// btnSort
			// 
			this->btnSort->AutoSize = true;
			this->btnSort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnSort->FlatAppearance->BorderSize = 0;
			this->btnSort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSort->ForeColor = System::Drawing::Color::White;
			this->btnSort->Location = System::Drawing::Point(328, 375);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(176, 35);
			this->btnSort->TabIndex = 32;
			this->btnSort->Text = L"�����������";
			this->btnSort->UseVisualStyleBackColor = false;
			this->btnSort->Click += gcnew System::EventHandler(this, &Lab3::btnSort_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label4->Location = System::Drawing::Point(420, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(279, 20);
			this->label4->TabIndex = 31;
			this->label4->Text = L"�������� ������� �������� �������:";
			// 
			// btnQuotersChange
			// 
			this->btnQuotersChange->AutoSize = true;
			this->btnQuotersChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnQuotersChange->FlatAppearance->BorderSize = 0;
			this->btnQuotersChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuotersChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnQuotersChange->ForeColor = System::Drawing::Color::White;
			this->btnQuotersChange->Location = System::Drawing::Point(685, 42);
			this->btnQuotersChange->Name = L"btnQuotersChange";
			this->btnQuotersChange->Size = System::Drawing::Size(95, 35);
			this->btnQuotersChange->TabIndex = 30;
			this->btnQuotersChange->Text = L"��������";
			this->btnQuotersChange->UseVisualStyleBackColor = false;
			// 
			// quotersOptionsCombo
			// 
			this->quotersOptionsCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->quotersOptionsCombo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->quotersOptionsCombo->FormattingEnabled = true;
			this->quotersOptionsCombo->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"��-�����", L"��-���������", L"������� � ������",
					L"����� � ������"
			});
			this->quotersOptionsCombo->Location = System::Drawing::Point(422, 44);
			this->quotersOptionsCombo->Name = L"quotersOptionsCombo";
			this->quotersOptionsCombo->Size = System::Drawing::Size(243, 29);
			this->quotersOptionsCombo->TabIndex = 29;
			// 
			// matrixView
			// 
			this->matrixView->AllowUserToAddRows = false;
			this->matrixView->AllowUserToDeleteRows = false;
			this->matrixView->AllowUserToResizeColumns = false;
			this->matrixView->AllowUserToResizeRows = false;
			this->matrixView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->matrixView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->matrixView->BackgroundColor = System::Drawing::Color::White;
			this->matrixView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->matrixView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->matrixView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixView->ColumnHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->matrixView->DefaultCellStyle = dataGridViewCellStyle6;
			this->matrixView->Enabled = false;
			this->matrixView->Location = System::Drawing::Point(47, 107);
			this->matrixView->Margin = System::Windows::Forms::Padding(2);
			this->matrixView->Name = L"matrixView";
			this->matrixView->ReadOnly = true;
			this->matrixView->RowHeadersVisible = false;
			this->matrixView->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->matrixView->ShowEditingIcon = false;
			this->matrixView->Size = System::Drawing::Size(276, 235);
			this->matrixView->TabIndex = 25;
			// 
			// secondMatrixPanel
			// 
			this->secondMatrixPanel->Controls->Add(this->matrixView2);
			this->secondMatrixPanel->Controls->Add(this->label6);
			this->secondMatrixPanel->Location = System::Drawing::Point(328, 87);
			this->secondMatrixPanel->Name = L"secondMatrixPanel";
			this->secondMatrixPanel->Size = System::Drawing::Size(452, 255);
			this->secondMatrixPanel->TabIndex = 35;
			this->secondMatrixPanel->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 20);
			this->label6->TabIndex = 34;
			this->label6->Text = L"��������� �������";
			// 
			// matrixView2
			// 
			this->matrixView2->AllowUserToAddRows = false;
			this->matrixView2->AllowUserToDeleteRows = false;
			this->matrixView2->AllowUserToResizeColumns = false;
			this->matrixView2->AllowUserToResizeRows = false;
			this->matrixView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->matrixView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->matrixView2->BackgroundColor = System::Drawing::Color::White;
			this->matrixView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->matrixView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->matrixView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixView2->ColumnHeadersVisible = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->matrixView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->matrixView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->matrixView2->Enabled = false;
			this->matrixView2->Location = System::Drawing::Point(0, 20);
			this->matrixView2->Margin = System::Windows::Forms::Padding(2);
			this->matrixView2->Name = L"matrixView2";
			this->matrixView2->ReadOnly = true;
			this->matrixView2->RowHeadersVisible = false;
			this->matrixView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->matrixView2->ShowEditingIcon = false;
			this->matrixView2->Size = System::Drawing::Size(452, 235);
			this->matrixView2->TabIndex = 35;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox3->Location = System::Drawing::Point(46, 407);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(258, 40);
			this->richTextBox3->TabIndex = 45;
			this->richTextBox3->Text = L"*���������� �������� ��� ������������� ����������� �� �������� �����, � ������� �"
				L"������ ����� �� ������ � �����, ����";
			// 
			// Lab3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 580);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->errPanel);
			this->Controls->Add(this->controlsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Lab3";
			this->Text = L"Lab3";
			this->errPanel->ResumeLayout(false);
			this->errorPanel->ResumeLayout(false);
			this->errorPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->controlsPanel->ResumeLayout(false);
			this->controlsPanel->PerformLayout();
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->workPanel->ResumeLayout(false);
			this->workPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixView))->EndInit();
			this->secondMatrixPanel->ResumeLayout(false);
			this->secondMatrixPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

//��������� �������, ������ ��� ������� �������
/**
* �������������, ��������� �������� ����������� ��������
*/
private: void initialise();
/**
* ����������� ���������� ����� � ������� � �������
*/
private: void matrixSetup();


//������� �������� ��������������� ������
/**
* ��������, ������ �� ����� ���������� �������
* ���� ��, �� ������� ���������� ��� ������
*/
private: int getFillMethod();
/**
* ��������, ������ �� ������� �������
* ���� ��, �� ������� ���������� �������
*/
private: int getMatrixDegree();
/**
* �������� ��������� ������ �����
* ��������� ����� ���� �����
*/
private: float checkUserNum(String^ text);

/**
*����� ������
*/ 
private: void showError(String^ text);


//�������� ��� ��������
/**
* ���������� ������� � ������ ��������:
* ����� �������� ��������� ������� �����
* ����������� ������� ������, ���� ��� ���� ��������
*/
private: void prepareMatrix();
/**
* ������ �� ������ (������) � �����
*/ 
private: void hideError();
/**
* ����� �������
* {@params} {matrixNum}: �����, ����� �� ������ ����������
* 0 - ����� �������
*/ 
private: void showArray(int matrixNum);
/**
* ����� �������� �������
* {@params} {i, j}: ���������� ��������
* {matrixNum}: �����, ����� �� ������ ����������
* 0 - ����� �������
*/
private: void showNumber(int i, int j, int matrixNum);
/**
* ���������� �������, �������� ��������� �����
*/
private: void selectScheme();
/**
* ���������� ������� ��������
*/
private: void fillArrSpiral();
/**
* ���������� ������� �������
*/
private: void fillArrSnake();
/**
     * ���������� ��������� ��������� �������
     * @param  {*p} - ��������� �� ������, � ������� ����� ������������ ��������
*/
void insertSort();
/**
     * �������� ��������� ������� � ������, �������� �������������
     * @param  {num} - �����, �������� �������������
*/

//�������������� �������� ��� ��������
void addition(float num);
/**
	 * ��������� �� ��������� ������� �����, �������� �������������
	 * @param  {num} - �����, �������� �������������
*/
void subtraction(float num);
/**
	 * ��������� ��������� ������� �� �����, �������� �������������
	 * @param  {num} - �����, �������� �������������
*/
void multiple(float num);
/**
	 * ������� ��������� ������� �� �����, �������� �������������
	 * @param  {num} - �����, �������� �������������
*/
void division(float num);

//������� �����

//�������� �����
private: System::Void btnCloseForm_Click_1(System::Object^ sender, System::EventArgs^ e);
//��������� �������
private: System::Void btnGetArray_Click(System::Object^ sender, System::EventArgs^ e);

//���������� �������
private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnSub_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnMtpl_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e);




private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
