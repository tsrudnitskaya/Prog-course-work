#include "Lab1.h"
using namespace System;

bool er = false;
int setup;
float floatnum;
double doublenum;

union showF {
	int i;
	float f = floatnum;
};
void Coursach::Lab1::showEr(String^ text)
{
	errorLabel1->Text = text;
	errorPanel->Visible = true;
	er = true;
}
void Coursach::Lab1::printSizes()
{
	int a; short int b; float c; double d; long double e; char f; bool g; long int i;
	labIntSize->Text = Convert::ToString(sizeof(a));
	labShortSize->Text = Convert::ToString(sizeof(b));
	lablongSize->Text = Convert::ToString(sizeof(i));
	labFloatSize->Text = Convert::ToString(sizeof(c));
	labDoubleSize->Text = Convert::ToString(sizeof(d));
	labLongDSize->Text = Convert::ToString(sizeof(e));
	labCharSize->Text = Convert::ToString(sizeof(f));
	labBoolSize->Text = Convert::ToString(sizeof(g));
}

void Coursach::Lab1::hideEr()
{
	errorPanel->Visible = false;
	er = false;
}


System::Void Coursach::Lab1::Lab1_Load(System::Object^ sender, System::EventArgs^ e)
{
	printSizes();
}

void Coursach::Lab1::showInt(int num)
{
	showIntLbl->Text = "";
	const unsigned int order = 32;
	int arr[order];
	for (int i = 0; i < order; i++)
	{
		arr[i] = num & 1;
		num >>= 1;
	}
	for (int i = order - 1 ; i >= 0; i--) {
		showIntLbl->Text += Convert::ToString(arr[i]);
		if (i % 8 == 0) 
			showIntLbl->Text += " ";
		if(i == order - 1)
			showIntLbl->Text += " ";
	}
}

System::Void Coursach::Lab1::btnShowInt_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num;
	String^ text = intBox->Text;
	if (int::TryParse(text, num)) {
		hideEr();
		showInt(num);
	}
	else {
		showEr("¬ведите целое число");
	}
}

void Coursach::Lab1::showFloat()
{
	//showFloatLbl->Text = "";
	//
	//const unsigned int order = 32;
	//int arr[order];
	//for (int i = 0; i < order; i++)
	//{
	//	arr[i] = nfloat.i & 1;
	//	nfloat.i >>= 1;
	//}
	//for (int i = 0; i < order; i++) {
	//	showFloatLbl->Text += Convert::ToString(arr[i]);
	//	if (i % 8 == 0)
	//		showFloatLbl->Text += " ";
	//	if (i == order - 1)
	//		showFloatLbl->Text += " ";
	//}
}

System::Void Coursach::Lab1::btnShowFloat_Click(System::Object^ sender, System::EventArgs^ e)
{
	showF nfloat;
	float num;
	String^ text = intBox->Text;
	if (float::TryParse(text, num)) {
		hideEr();
		nfloat.f = num;
		showFloatLbl->Text = "";
		const unsigned int order = 32;
		int arr[order];
		for (int i = 0; i < order; i++)
		{
			arr[i] = nfloat.i & 1;
			nfloat.i >>= 1;
		}
		for (int i = order - 1; i >= 0; i--) {
			showFloatLbl->Text += Convert::ToString(arr[i]);
			if (i == order-1)
				showFloatLbl->Text += " ";
			if (i == order - 10)
				showFloatLbl->Text += " ";
		}
	}
	else {
		showEr("¬ведите число c плавающей точкой");
	}
}
