#include "Lab3.h"

float** pArr;
int arrayWidth;
int fillMethod;
int matrixMin, matrixMax, matrixCols, matrixRows;
int errors = 0;

void Coursach::Lab3::initialise()
{
    pArr = new float* [arrayWidth];
    for (int i = 0; i < arrayWidth; i++)
        pArr[i] = new float[arrayWidth];
    matrixMin = 0;
    matrixMax = arrayWidth * arrayWidth;
    matrixCols = arrayWidth;
    matrixRows = arrayWidth;
}

void Coursach::Lab3::matrixSetup()
{
    matrixView->RowCount = matrixRows;
    matrixView->ColumnCount = matrixCols;
    matrixView2->RowCount = matrixRows;
    matrixView2->ColumnCount = matrixCols;
}
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
void Coursach::Lab3::prepareMatrix()
{
    errors = 0;
    hideError();
    showArray(0);

}
int Coursach::Lab3::getMatrixDegree()
{
    if (getMatrixDegreeCombo->SelectedIndex == -1) {
        showError("�������� ������� �������");
        return -1;
    }
    return arrayWidth = Convert::ToInt16(getMatrixDegreeCombo->SelectedItem);
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
void Coursach::Lab3::showArray(int matrixNum)
{
    for (int i = 0; i < arrayWidth; i++)
        for (int j = 0; j < arrayWidth; j++)
            showNumber(i, j, matrixNum);
}
void Coursach::Lab3::showNumber(int i, int j, int matrixNum)
{
    if (matrixNum == 0) {
        matrixView->Rows[i]->Cells[j]->Value = pArr[i][j];
    }
    else {
        matrixView2->Rows[i]->Cells[j]->Value = pArr[i][j];
    }
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
        showNumber(i, j, 0);
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
        showNumber(i, j, 0);
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

/**
     * ���������� ��������� ��������� �������
*/
void Coursach::Lab3::insertSort()
{   

}
float Coursach::Lab3::checkUserNum(String^ text)
{
    float num;
    if (System::Single::TryParse(System::Convert::ToString(text), num)) {
        return num;
    }
    else {
        showError("������� �����!");
        errors++;
        return -1;
    }
}
void Coursach::Lab3::addition(float num){

    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) += num;
    }
}

void Coursach::Lab3::subtraction(float num)
{
    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) -= num;
    }
}

void Coursach::Lab3::multiple(float num)
{
    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) *= num;
    }
}

void Coursach::Lab3::division(float num)
{   
    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) = round(*(pArr[i] + j)/num * 1000)/1000;
    }
}

System::Void Coursach::Lab3::btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    float num = checkUserNum(textBoxNum->Text);
    if (!errors) {
        num = round(num * 1000) / 1000;
        addition(num);
        showArray(1);
        secondMatrixPanel->Visible = true;
    }
    else return;
}
System::Void Coursach::Lab3::btnSub_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    float num = checkUserNum(textBoxNum->Text);
    if (!errors) {
        subtraction(num);
        showArray(1);
        secondMatrixPanel->Visible = true;
    }
    else return;
}
System::Void Coursach::Lab3::btnMtpl_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    float num = checkUserNum(textBoxNum->Text);
    if (!errors) {
        multiple(num);
        showArray(1);
        secondMatrixPanel->Visible = true;
    }
    else return;
}
System::Void Coursach::Lab3::btnDiv_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    float num = checkUserNum(textBoxNum->Text);
    if (!errors) {
        if (num != 0) {            
            division(num);
            showArray(1);
            secondMatrixPanel->Visible = true;
        }
        else showError("�� 0 ������ �����, �� �� �����");       
    }
    else return;
}
System::Void Coursach::Lab3::btnCloseForm_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Coursach::Lab3::btnGetArray_Click(System::Object^ sender, System::EventArgs^ e)
{
    errors = 0;
    hideError();
    arrayWidth = getMatrixDegree();
    fillMethod = getFillMethod();
    if (errors == 0) {
        if (workPanel->Visible == false) {
            workPanel->Visible = true;
        }
        initialise();
        matrixSetup();
        selectScheme();
    }
}
System::Void Coursach::Lab3::btnSort_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    insertSort();
    showArray(1);
}
System::Void Coursach::Lab3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
   // for (int i = 0; i < arrayWidth; i++)
        /*float* p = (float*)pArr;
        String^ sdfs = p[i].ToString();*/

        //matrixView2->Rows[i]->Cells[j]->Value = pArr[i][j];

        //for (int j = 0; j < arrayWidth; j++) {

        //}
    
    //String^ sdfs = **pArr[0].ToString();
    //label8->Text = sdfs;
}