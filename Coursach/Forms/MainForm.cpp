#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Coursach::MainForm form;
	Application::Run(% form);
}

System::Void Coursach::MainForm::btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}


System::Void Coursach::MainForm::btnLab2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Lab2^ form = gcnew Lab2();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();

	welcomeHide();
}

System::Void Coursach::MainForm::btnLab3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Lab3^ form = gcnew Lab3();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();
	welcomeHide();
}

void Coursach::MainForm::welcomeHide()
{
	if (welcomePanel->Visible == true) {
		welcomePanel->Visible = false;
	}
}

System::Void Coursach::MainForm::btnLab4_Click(System::Object^ sender, System::EventArgs^ e)
{
	lab4^ form = gcnew lab4();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();
	welcomeHide();
}
