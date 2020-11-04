#pragma once
#include "Lab2.h"

namespace Coursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::Panel^ welcomePanel;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnCloseApp;
	private: System::Windows::Forms::Button^ btnLab1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnLab2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->btnLab2 = (gcnew System::Windows::Forms::Button());
			this->btnLab1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnCloseApp = (gcnew System::Windows::Forms::Button());
			this->welcomePanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MenuPanel->SuspendLayout();
			this->welcomePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->MenuPanel->Controls->Add(this->button2);
			this->MenuPanel->Controls->Add(this->button1);
			this->MenuPanel->Controls->Add(this->btnLab2);
			this->MenuPanel->Controls->Add(this->btnLab1);
			this->MenuPanel->Controls->Add(this->panel2);
			this->MenuPanel->Controls->Add(this->btnCloseApp);
			this->MenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->MenuPanel->Location = System::Drawing::Point(0, 0);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(200, 544);
			this->MenuPanel->TabIndex = 2;
			// 
			// btnLab2
			// 
			this->btnLab2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->btnLab2->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLab2->FlatAppearance->BorderSize = 0;
			this->btnLab2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnLab2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLab2->ForeColor = System::Drawing::Color::White;
			this->btnLab2->Location = System::Drawing::Point(0, 127);
			this->btnLab2->Name = L"btnLab2";
			this->btnLab2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLab2->Size = System::Drawing::Size(200, 45);
			this->btnLab2->TabIndex = 5;
			this->btnLab2->Text = L"Лабораторная работа 2";
			this->btnLab2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLab2->UseVisualStyleBackColor = false;
			this->btnLab2->Click += gcnew System::EventHandler(this, &MainForm::btnLab2_Click);
			// 
			// btnLab1
			// 
			this->btnLab1->BackColor = System::Drawing::Color::Transparent;
			this->btnLab1->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLab1->Enabled = false;
			this->btnLab1->FlatAppearance->BorderSize = 0;
			this->btnLab1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLab1->ForeColor = System::Drawing::Color::White;
			this->btnLab1->Location = System::Drawing::Point(0, 82);
			this->btnLab1->Name = L"btnLab1";
			this->btnLab1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLab1->Size = System::Drawing::Size(200, 45);
			this->btnLab1->TabIndex = 4;
			this->btnLab1->Text = L"Лабораторная работа 1";
			this->btnLab1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLab1->UseVisualStyleBackColor = false;
			this->btnLab1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 82);
			this->panel2->TabIndex = 3;
			// 
			// btnCloseApp
			// 
			this->btnCloseApp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnCloseApp->FlatAppearance->BorderSize = 0;
			this->btnCloseApp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnCloseApp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btnCloseApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseApp->ForeColor = System::Drawing::Color::White;
			this->btnCloseApp->Location = System::Drawing::Point(0, 504);
			this->btnCloseApp->Name = L"btnCloseApp";
			this->btnCloseApp->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnCloseApp->Size = System::Drawing::Size(200, 40);
			this->btnCloseApp->TabIndex = 2;
			this->btnCloseApp->Text = L"Выход";
			this->btnCloseApp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCloseApp->UseVisualStyleBackColor = true;
			this->btnCloseApp->Click += gcnew System::EventHandler(this, &MainForm::btnCloseForm_Click);
			// 
			// welcomePanel
			// 
			this->welcomePanel->Controls->Add(this->label1);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(200, 0);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->Size = System::Drawing::Size(877, 544);
			this->welcomePanel->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(167, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 172);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(200, 45);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Лабораторная работа 3";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(0, 217);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(200, 45);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Лабораторная работа 4";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1077, 544);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->MenuPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->IsMdiContainer = true;
			this->MinimumSize = System::Drawing::Size(1077, 544);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->MenuPanel->ResumeLayout(false);
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnLab2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
