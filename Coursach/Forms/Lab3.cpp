#include "Lab3.h"

int** pArr;
int arrayWidth;
int fillMethod;
int matrixMin, matrixMax, matrixCols, matrixRows;
int errors = 0;

void Coursach::Lab3::showError(String^ text)
{
    errorLabel1->Text += text + "\n";
    errorPanel->Visible = true;
    errors += 1;
}
void Coursach::Lab3::hideError()
{
    errorPanel->Visible = false;
    errorLabel1->Text = "";
}

int Coursach::Lab3::getMatrixDegree()
{
    if (getMatrixDegreeCombo->SelectedIndex == -1) {
        showError("�������� ������� �������");
        return -1;
    }
    return arrayWidth = Convert::ToInt16(getMatrixDegreeCombo->SelectedItem);
}

void Coursach::Lab3::initialise()
{
    pArr = new int* [arrayWidth];
    for (int i = 0; i < arrayWidth; i++)
        pArr[i] = new int[arrayWidth];
    matrixMin = 0;
    matrixMax = arrayWidth * arrayWidth;
    matrixCols = arrayWidth;
    matrixRows = arrayWidth;
}

void Coursach::Lab3::matrixSetup()
{
    matrixView->RowCount = matrixRows;
    matrixView->ColumnCount = matrixCols;
    //formTableClean();
}
int Coursach::Lab3::getFillMethod() {
    if (getStyleCombo->SelectedIndex == -1) {
        showError("�������� ����� ����������!");
        return -1;
    }
    return getStyleCombo->SelectedIndex;
}
void Coursach::Lab3::selectScheme()
{
        switch (fillMethod) {
        case 0:
            fillArrSpiral();
            break;
        case 1:
            fillArrSnake();
            break;
        }
}
void Coursach::Lab3::showNumber(int i, int j)
{
    matrixView->Rows[i]->Cells[j]->Value = pArr[i][j];
}
void Coursach::Lab3::showArray()
{
	for (int i = 0; i < arrayWidth; i++)
		for (int j = 0; j < arrayWidth; j++)
			matrixView->Rows[i]->Cells[j]->Value = pArr[i][j];

}
void Coursach::Lab3::fillArrSpiral()
{
    int counter = 0;
    int i = 0;
    int j = 0;
    //���������, ���� ������� �� ������ ����� ���������� ����� �������
    while (counter < arrayWidth * arrayWidth) {
        //����������� �������� ������� ������
        //*(pArr[i] + j) = getRandomNumber(matrixMin, matrixMax);
        *(pArr[i] + j) = counter;
        showNumber(i, j);
        //���������, ���� ���� ���������
        //���� ����������� ������ � ���� �������, � ������� ���� ������ �������
        //��������� ������, ���� ������� ������� ��� �� ������ ������� ���� ������� (��� ������������ �������)
        if (i <= j + 1 && i + j < arrayWidth - 1)
            ++j;
        //��������� ����, ���� �� ��������� � ������� ���� �������, �� ��� �� �������� ������� ������� ����
        else if (i < j && i + j >= arrayWidth - 1)
            ++i;
        //��������� �����, ���� �������� ������� ����
        else if (i >= j && i + j > arrayWidth - 1)
            --j;
        //� ��������� ������ ��������� �����
        else
            --i;
        //������������ ����������� ��������
        counter++;
        //�� �����������, ������ "������" ������� ����������, ��������� ������ �������� � ������ �� �������
    }
}
void Coursach::Lab3::fillArrSnake()
{
    int counter = 0;
    int i = 0;
    int j = 0;
    //���������, ���� ������� �� ������ ����� ���������� ����� �������
    while (counter < arrayWidth * arrayWidth) {
        //����������� �������� ������� ������, ��������� ���������� ����������
        //*(pArr[i] + j) = getRandomNumber(matrixMin, matrixMax);
        *(pArr[i] + j) = counter;
        showNumber(i, j);
        //���������, ���� ������� ������� ��� ������, � ������� ������� ��� �� ������ ����, 
        //�� ������������� ����
        if (j % 2 == 0 && i < arrayWidth - 1)
            i++;
        //���� ������� ��������, � ������� ������� ��� �� ������ �����,
        //�� ���������� �����
        else if (j % 2 != 0 && i > 0)
            i--;
        //��� ������ �������
        else
            j++;
        counter++;
    }
}
System::Void Coursach::Lab3::btnCloseForm_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Coursach::Lab3::btnGetArray_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (workPanel->Visible == false) {
		workPanel->Visible = true;
	}
    errors = 0;
    hideError();
    arrayWidth = getMatrixDegree();
    fillMethod = getFillMethod();
    if (errors == 0) {
        initialise();
        matrixSetup();
        selectScheme();
    }
}

