#pragma once

namespace Coursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Lab3
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Lab3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCloseForm;
	private: System::Windows::Forms::Panel^ controlslPanel;
	private: System::Windows::Forms::Panel^ welcomePanel;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ workContolsPanel;
	private: System::Windows::Forms::Panel^ workPanel;

	private: System::Windows::Forms::TextBox^ matrixDegree;
	private: System::Windows::Forms::Button^ btnGetArray;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab3::typeid));
			this->btnCloseForm = (gcnew System::Windows::Forms::Button());
			this->controlslPanel = (gcnew System::Windows::Forms::Panel());
			this->welcomePanel = (gcnew System::Windows::Forms::Panel());
			this->workPanel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->workContolsPanel = (gcnew System::Windows::Forms::Panel());
			this->btnGetArray = (gcnew System::Windows::Forms::Button());
			this->matrixDegree = (gcnew System::Windows::Forms::TextBox());
			this->controlslPanel->SuspendLayout();
			this->welcomePanel->SuspendLayout();
			this->workContolsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCloseForm
			// 
			this->btnCloseForm->FlatAppearance->BorderSize = 0;
			this->btnCloseForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseForm->Location = System::Drawing::Point(3, 3);
			this->btnCloseForm->Name = L"btnCloseForm";
			this->btnCloseForm->Size = System::Drawing::Size(32, 23);
			this->btnCloseForm->TabIndex = 1;
			this->btnCloseForm->Text = L"x";
			this->btnCloseForm->UseVisualStyleBackColor = true;
			this->btnCloseForm->Click += gcnew System::EventHandler(this, &Lab3::btnCloseForm_Click);
			// 
			// controlslPanel
			// 
			this->controlslPanel->BackColor = System::Drawing::Color::White;
			this->controlslPanel->Controls->Add(this->btnCloseForm);
			this->controlslPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->controlslPanel->Location = System::Drawing::Point(0, 0);
			this->controlslPanel->Name = L"controlslPanel";
			this->controlslPanel->Size = System::Drawing::Size(845, 34);
			this->controlslPanel->TabIndex = 2;
			// 
			// welcomePanel
			// 
			this->welcomePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->welcomePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"welcomePanel.BackgroundImage")));
			this->welcomePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->welcomePanel->Controls->Add(this->workPanel);
			this->welcomePanel->Controls->Add(this->richTextBox1);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(0, 34);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->Size = System::Drawing::Size(845, 485);
			this->welcomePanel->TabIndex = 3;
			// 
			// workPanel
			// 
			this->workPanel->BackColor = System::Drawing::Color::White;
			this->workPanel->Location = System::Drawing::Point(0, 0);
			this->workPanel->Name = L"workPanel";
			this->workPanel->Size = System::Drawing::Size(845, 485);
			this->workPanel->TabIndex = 2;
			this->workPanel->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->CausesValidation = false;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->richTextBox1->Location = System::Drawing::Point(50, 157);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(323, 87);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"ƒл€ начала работы введите пор€док матрицы в текстовое поле внизу и нажмите на кно"
				L"пку \"—генерировать матрицу\"";
			// 
			// workContolsPanel
			// 
			this->workContolsPanel->BackColor = System::Drawing::Color::White;
			this->workContolsPanel->Controls->Add(this->btnGetArray);
			this->workContolsPanel->Controls->Add(this->matrixDegree);
			this->workContolsPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->workContolsPanel->Location = System::Drawing::Point(0, 470);
			this->workContolsPanel->Name = L"workContolsPanel";
			this->workContolsPanel->Size = System::Drawing::Size(845, 49);
			this->workContolsPanel->TabIndex = 4;
			// 
			// btnGetArray
			// 
			this->btnGetArray->BackColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnGetArray->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGetArray->ForeColor = System::Drawing::Color::White;
			this->btnGetArray->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGetArray->Location = System::Drawing::Point(615, 7);
			this->btnGetArray->Margin = System::Windows::Forms::Padding(2, 2, 50, 2);
			this->btnGetArray->Name = L"btnGetArray";
			this->btnGetArray->Size = System::Drawing::Size(180, 32);
			this->btnGetArray->TabIndex = 26;
			this->btnGetArray->Text = L"—генерировать матрицу";
			this->btnGetArray->UseVisualStyleBackColor = false;
			// 
			// matrixDegree
			// 
			this->matrixDegree->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixDegree->Location = System::Drawing::Point(50, 10);
			this->matrixDegree->Name = L"matrixDegree";
			this->matrixDegree->Size = System::Drawing::Size(88, 29);
			this->matrixDegree->TabIndex = 0;
			// 
			// Lab3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(845, 519);
			this->Controls->Add(this->workContolsPanel);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->controlslPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Lab3";
			this->Text = L"Lab3";
			this->controlslPanel->ResumeLayout(false);
			this->welcomePanel->ResumeLayout(false);
			this->workContolsPanel->ResumeLayout(false);
			this->workContolsPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
