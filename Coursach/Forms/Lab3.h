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
	/// Сводка для Lab3
	/// </summary>
	public ref class Lab3 : public System::Windows::Forms::Form
	{
	public:
		Lab3(void)
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab3::typeid));
			this->errPanel = (gcnew System::Windows::Forms::Panel());
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
			this->matrixView = (gcnew System::Windows::Forms::DataGridView());
			this->errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->errorPanel = (gcnew System::Windows::Forms::Panel());
			this->errPanel->SuspendLayout();
			this->controlsPanel->SuspendLayout();
			this->welcomePanel->SuspendLayout();
			this->workPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->errorPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// errPanel
			// 
			this->errPanel->BackColor = System::Drawing::Color::White;
			this->errPanel->Controls->Add(this->errorPanel);
			this->errPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->errPanel->Location = System::Drawing::Point(0, 528);
			this->errPanel->Name = L"errPanel";
			this->errPanel->Size = System::Drawing::Size(810, 52);
			this->errPanel->TabIndex = 36;
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
			this->controlsPanel->Size = System::Drawing::Size(810, 78);
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
			this->label3->Text = L"Выберите стиль заполнения:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label2->Location = System::Drawing::Point(43, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 20);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Выберите порядок:";
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
			this->getStyleCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Спираль", L"Змейка" });
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
			this->btnGetArray->Text = L"Сгенерировать матрицу";
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
			this->label1->Text = L"Лабораторная работа №3";
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
			this->richTextBox1->Text = L"Для начала работы выберите порядок матрицы и стиль заполнения и нажмите на кнопку"
				L" \"Сгенерировать матрицу\"";
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
			this->welcomePanel->Size = System::Drawing::Size(810, 450);
			this->welcomePanel->TabIndex = 37;
			// 
			// workPanel
			// 
			this->workPanel->BackColor = System::Drawing::Color::White;
			this->workPanel->Controls->Add(this->matrixView);
			this->workPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workPanel->Location = System::Drawing::Point(0, 0);
			this->workPanel->Name = L"workPanel";
			this->workPanel->Size = System::Drawing::Size(810, 450);
			this->workPanel->TabIndex = 2;
			this->workPanel->Visible = false;
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
			this->matrixView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->matrixView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->matrixView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->matrixView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixView->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(3);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->matrixView->DefaultCellStyle = dataGridViewCellStyle2;
			this->matrixView->Enabled = false;
			this->matrixView->Location = System::Drawing::Point(47, 22);
			this->matrixView->Margin = System::Windows::Forms::Padding(2);
			this->matrixView->Name = L"matrixView";
			this->matrixView->ReadOnly = true;
			this->matrixView->RowHeadersVisible = false;
			this->matrixView->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->matrixView->ShowEditingIcon = false;
			this->matrixView->Size = System::Drawing::Size(358, 320);
			this->matrixView->TabIndex = 25;
			// 
			// errorLabel1
			// 
			this->errorLabel1->AutoSize = true;
			this->errorLabel1->Location = System::Drawing::Point(27, 5);
			this->errorLabel1->Name = L"errorLabel1";
			this->errorLabel1->Size = System::Drawing::Size(0, 13);
			this->errorLabel1->TabIndex = 33;
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
			// errorPanel
			// 
			this->errorPanel->Controls->Add(this->pictureBox1);
			this->errorPanel->Controls->Add(this->errorLabel1);
			this->errorPanel->Location = System::Drawing::Point(26, 0);
			this->errorPanel->Name = L"errorPanel";
			this->errorPanel->Size = System::Drawing::Size(254, 52);
			this->errorPanel->TabIndex = 35;
			this->errorPanel->Visible = false;
			// 
			// Lab3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 580);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->errPanel);
			this->Controls->Add(this->controlsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Lab3";
			this->Text = L"Lab3";
			this->errPanel->ResumeLayout(false);
			this->controlsPanel->ResumeLayout(false);
			this->controlsPanel->PerformLayout();
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->workPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->errorPanel->ResumeLayout(false);
			this->errorPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: int getMatrixDegree();
private: void initialise();
private: void matrixSetup();
private: int getFillMethod();
private: void selectScheme();
//вывод ошибки
private: void showError(String^ text);
private: void hideError();
private: void showArray();
private: void fillArrSpiral();
private: void fillArrSnake();
private: void showNumber(int i, int j);
	   //void Coursach::Lab3::showNumber(int i, int j);

		//закрытие формы
private: System::Void btnCloseForm_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnGetArray_Click(System::Object^ sender, System::EventArgs^ e);
};
}
