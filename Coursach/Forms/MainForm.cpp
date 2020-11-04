#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

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

System::Void Coursach::MainForm::button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Coursach::MainForm::btnLab2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Lab2^ form = gcnew Lab2();
	form->MdiParent = this;
	form->Dock = System::Windows::Forms::DockStyle::Fill;
	form->Show();
	welcomePanel->Visible = false;
}
