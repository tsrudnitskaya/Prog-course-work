#include "Lab2.h"
#include "../Sources/Service.h"
//количество строк и столбцов для более удобного вывода массива
int cols = 10, rows = 10; 
//количество элементов
//в случае, если надо будет переделать работу так
//чтобы размерность массива задавалась пользователем,
//нужно будет поменять только эти три переменные
const int arrayWidth = 100,
//диапазон значений массива
min = -99,
max = 99;
//флаг, показывающий что массив отсортирован
bool isSorted = false;
//массив, заданной ширины
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


int Coursach::Lab2::intTypeCheck(String^ text)
{
	Int16 num;
	if (Int16::TryParse(System::Convert::ToString(text), num)) {
		if (num >= min && num <= max)
			return num;
		else {
			showError("Число " + num + " не входит в заданный диапазон");
			return min - 100;
		}
	}
	else {
		showError("Проверьте правильность ввода");
		return min - 100;
	}
}

int Coursach::Lab2::indexTypeCheck(String^ text, String^ errorText)
{
	Int16 num;
	if (Int16::TryParse(System::Convert::ToString(text), num)) {
		if (num >= 0 && num < arrayWidth)
			return num;
		else {
			showError("Введите правильный индекс от 0 до 99 в " + errorText);
			return -1;
		}
	}
	else {
		showError("Введите оба индекса");
		return -1;
	}
}

void Coursach::Lab2::showTime(int time, String^ unit)
{
	infoLabel1->Text = time.ToString() + unit;
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
	if (isSorted == false) {
		btnBinarySearch->Enabled = false;
		btnSearchLess->Enabled = false;
		btnSearchMore->Enabled = false;
		btnBruteforceSearch->Enabled = false;
	}		
}

void Coursach::Lab2::btnsEnable()
{
	if (isSorted == true) {
		btnBinarySearch->Enabled = true;
		btnSearchLess->Enabled = true;
		btnSearchMore->Enabled = true;
		btnBruteforceSearch->Enabled = true;
	}
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
	if (arrayControlsPanel->Visible == false) {
		arrayControlsPanel->Visible = true;
	}
		
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
		time = benchFunc(arrayWidth, Arr, quickSort);
		break;
	default:
		String^ errText = "Вы не выбрали тип сортировки!";
		showError(errText);
		return;
	}
	isSorted = true;
	btnsEnable();
	showArrayInForm();
	showTime(time, "мкс");
}

System::Void Coursach::Lab2::btnSearchMin_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int time, index;
	time = benchFunc2(arrayWidth, Arr, isSorted, searchMin);
	index = searchMin(arrayWidth, Arr, isSorted);
	showTime(time, "нс");
	showEl(index);
}

System::Void Coursach::Lab2::btnSearchMax_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int time = benchFunc2(arrayWidth, Arr, isSorted, searchMax);
	int index = searchMax(arrayWidth, Arr, isSorted);
	showTime(time, "нс");
	showEl(index);
}

int Coursach::Lab2::searchMiddleLeft(int* Arr, int arrayWidth, int marker, int middleEl, int middleNum)
{
	while (Arr[marker] >= middleEl && marker >= 0) {
		if (Arr[marker] == middleEl) {
			showEl(marker);
			middleNum++;
		}
		marker--;
	}
	return middleNum;
}
int Coursach::Lab2::searchMiddleRight(int* Arr, int arrayWidth, int marker, int middleEl, int middleNum)
{
	while (Arr[marker] <= middleEl && marker < arrayWidth) {
		if (Arr[marker] == middleEl) {
			showEl(marker);
			middleNum++;
		}
		marker++;
	}
	return middleNum;
}
System::Void Coursach::Lab2::btnSearchMiddle_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int middleNum = 0;
	int middleEl = searchMiddle(arrayWidth, Arr, isSorted);
	if (isSorted) {
		int marker = arrayWidth / 2;
		if (Arr[marker] > middleEl)
			middleNum = searchMiddleLeft(Arr, arrayWidth, marker, middleEl, middleNum);
		else if (Arr[marker] < middleEl)
			middleNum = searchMiddleRight(Arr, arrayWidth, marker, middleEl, middleNum);
		else {
			middleNum = searchMiddleLeft(Arr, arrayWidth, marker, middleEl, middleNum);
			middleNum += searchMiddleRight(Arr, arrayWidth, marker, middleEl, middleNum);
		}			
	}
	else {
		for (int i = 0; i < arrayWidth; i++) {
			if (Arr[i] == middleEl) {
				showEl(i);
				middleNum++;
			}

		}
	}
	showNum(middleNum);
	showMiddle(middleEl);
	if (middleNum == 0)
		infoLabel3->Visible = true;
}


System::Void Coursach::Lab2::btnSearchLess_Click(System::Object^ sender, System::EventArgs^ e)
{
	formTableClean();
	int a = intTypeCheck(textBoxNum->Text);
	if (a < min)
		return;
	else {
		int lessNum = searchLowerA(Arr, a);
		for (int i = 0; i < lessNum; i++)
			showEl(i);
		showNum(lessNum);
	}
}

System::Void Coursach::Lab2::btnSearchMore_Click(System::Object^ sender, System::EventArgs^ e)
{
	formTableClean();
	int b = intTypeCheck(textBoxNum->Text);
	if (b < min)
		return;
	else {
		int moreNum = searchMoreB(arrayWidth, Arr, b);
		for (int i = arrayWidth - 1; i > (arrayWidth - moreNum - 1); i--)
			showEl(i);
		showNum(moreNum);
	}
}
System::Void Coursach::Lab2::btnBinarySearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int neededNum = intTypeCheck(textBoxNum->Text);
	if(neededNum < min)
		return;
	else {
		int time = benchFunc3(Arr, neededNum, 0, arrayWidth - 1, binarySearch);
		showTime(time, "нс");
		int pos = binarySearch(Arr, neededNum, 0, arrayWidth - 1);
		if (pos != -1)
			showEl(pos);
		else
			infoLabel3->Visible = true;
	}
}

System::Void Coursach::Lab2::btnBruteforceSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	hideInfo();
	int neededNum = intTypeCheck(textBoxNum->Text);
	if (neededNum < min)
		return;
	else {
		int time = benchFunc4(arrayWidth, Arr, neededNum, bruteforce);
		showTime(time, "нс");
		int pos = bruteforce(arrayWidth, Arr, neededNum);
		if (pos != -1)
			showEl(pos);
		else
			infoLabel3->Visible = true;
	}
}


System::Void Coursach::Lab2::btnSwap_Click(System::Object^ sender, System::EventArgs^ e)
{
	int a = indexTypeCheck(textBoxIndexA->Text, "поле 1");
	int b = indexTypeCheck(textBoxIndexB->Text, "поле 2");
	if (a < 0 || b < 0)
		return;
	else {
		std::swap(Arr[a], Arr[b]);
		showArrayInForm();
		showEl(a);
		showEl(b);
	}
}