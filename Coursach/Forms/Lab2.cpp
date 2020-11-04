#include "Lab2.h"
#include "../Sources/Service.h"
int cols = 10, rows = 10;
const int arrayWidth = 100,
min = -99,
max = 99;
bool isSorted = false;
int Arr[arrayWidth];



void Coursach::Lab2::formTableSetup()
{
	formTable->RowCount = rows;
	formTable->ColumnCount = cols;
	formTableClean();
}

void Coursach::Lab2::formTableClean()
{
	for (int i = 0; i < cols; i++)
		for (int j = 0; j < rows; j++)
			formTable->Rows[i]->Cells[j]->Selected = false;
}

void Coursach::Lab2::showArrayInForm()
{
	int counter = 0;
	while (counter < arrayWidth) {
		for (int i = 0; i < cols; i++)
			for (int j = 0; j < rows; j++)
			{
				formTable->Rows[i]->Cells[j]->Value = Arr[counter];
				counter++;
			}
	}
}

void Coursach::Lab2::showTime(int time)
{
	infoLabel1->Text = time.ToString() + "мкс";
	if (infoLabel1->Visible == false) infoLabel1->Visible = true;
	if (infoLabelHeader->Visible == false) infoLabelHeader->Visible = true;
}

void Coursach::Lab2::showNum(int num)
{
	infoLabel2->Text = num.ToString();
	if (infoLabel2->Visible == false) infoLabel2->Visible = true;
	if (infoLabelHeader2->Visible == false) infoLabelHeader2->Visible = true;
}

void Coursach::Lab2::showError(String^ text)
{
	errorLabel1->Text = text;
	errorLabel1->Visible = true;
}

void Coursach::Lab2::showMiddle(int middle)
{
	infoLabel4->Text = middle.ToString();
	if (infoLabel4->Visible == false) infoLabel4->Visible = true;
	if (infoLabelHeader4->Visible == false) infoLabelHeader4->Visible = true;
}



void Coursach::Lab2::hideTime()
{
	if (infoLabel1->Visible == true) infoLabel1->Visible = false;
	if (infoLabelHeader->Visible == true) infoLabelHeader->Visible = false;
}

void Coursach::Lab2::hideNum()
{
	if (infoLabel2->Visible == true) infoLabel2->Visible = false;
	if (infoLabelHeader2->Visible == true) infoLabelHeader2->Visible = false;
}

void Coursach::Lab2::hideMiddle()
{
	if (infoLabel4->Visible == true) infoLabel4->Visible = false;
	if (infoLabelHeader4->Visible == true) infoLabelHeader4->Visible = false;
}


void Coursach::Lab2::btnsDisable()
{
	if (btnBinarySearch->Enabled == true)
		btnBinarySearch->Enabled = false;
	if (btnSearchLess->Enabled == true)
		btnSearchLess->Enabled = false;
	if (btnSearchMore->Enabled == true)
		btnSearchMore->Enabled = false;
}

void Coursach::Lab2::btnsEnable()
{
	if (btnBinarySearch->Enabled == false)
		btnBinarySearch->Enabled = true;
	if (btnSearchLess->Enabled == false)
		btnSearchLess->Enabled = true;
	if (btnSearchMore->Enabled == false)
		btnSearchMore->Enabled = true;
}



void Coursach::Lab2::hideInfo()
{
	formTableClean();
	hideTime();
	hideNum();
	hideMiddle();
	infoLabel3->Visible = false;
}

void Coursach::Lab2::showEl(int index)
{
	int i = index / 10;
	int j = index % 10;
	formTable->Rows[i]->Cells[j]->Selected = true;
}



System::Void Coursach::Lab2::btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Coursach::Lab2::btnGetArray_Click(System::Object^ sender, System::EventArgs^ e)
{
	formTableSetup();
	btnsDisable();
	if (arrayControlsPanel->Visible == false)
		arrayControlsPanel->Visible = true;
	generateArray(arrayWidth, min, max, Arr);
	isSorted = false;
	hideInfo();
	showArrayInForm();
}

System::Void Coursach::Lab2::btnSort_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int time;
	if (errorLabel1->Visible == true) errorLabel1->Visible = false;
	switch (sortsBox->SelectedIndex) {
	case 0:
		time = benchFunc(arrayWidth, Arr, bubbleSort);
		break;
	case 1:
		time = benchFunc(arrayWidth, Arr, shakerSort);
		break;
	case 2:
		time = benchFunc(arrayWidth, Arr, combSort);
		break;
	case 3:
		time = benchFunc(arrayWidth, Arr, insertSort);
		break;
	case 4:
		//time = benchFunc(arrayWidth, Arr, quickSort);
		break;
	default:
		String^ errText = "Вы не выбрали тип сортировки!";
		showError(errText);
		return;
	}
	isSorted = true;
	btnsEnable();
	showArrayInForm();
	showTime(time);
}

System::Void Coursach::Lab2::btnSearchMin_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int time = benchFunc2(arrayWidth, Arr, searchMin);
	int index = searchMin(arrayWidth, Arr);
	showTime(time);
	showEl(index);
}

System::Void Coursach::Lab2::btnSearchMax_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int time = benchFunc2(arrayWidth, Arr, searchMax);
	int index = searchMax(arrayWidth, Arr);
	showTime(time);
	showEl(index);
}

System::Void Coursach::Lab2::btnSearchMiddle_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int middleNum = 0;
	int middleEl = searchMiddle(arrayWidth, Arr);
	for (int i = 0; i < arrayWidth; i++) {
		if (Arr[i] == middleEl) {
			showEl(i);
			middleNum++;
		}
			
	}
	showNum(middleNum);
	showMiddle(middleEl);
	if (middleNum == 0)
		infoLabel3->Visible = true;
}

System::Void Coursach::Lab2::btnSwap_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Coursach::Lab2::btnSearchLess_Click(System::Object^ sender, System::EventArgs^ e)
{
	formTableClean();
	int a = Convert::ToInt16(textBoxNum->Text);
	int lessNum = searchLowerA(Arr, a);
	for (int i = 0; i < lessNum; i++)
		showEl(i);
	showNum(lessNum);
}

System::Void Coursach::Lab2::btnSearchMore_Click(System::Object^ sender, System::EventArgs^ e)
{
	formTableClean();
	int b = Convert::ToInt16(textBoxNum->Text);
	int moreNum = searchMoreB(arrayWidth, Arr, b);
	for (int i = arrayWidth - 1; i > (arrayWidth - moreNum - 1); i--)
		showEl(i);
	showNum(moreNum);
}

System::Void Coursach::Lab2::btnBinarySearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int neededNum = Convert::ToInt16(textBoxNum->Text);
	int i = binarySearch(Arr, neededNum, 0, arrayWidth - 1);
	showEl(i);
}

System::Void Coursach::Lab2::btnBruteforceSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}