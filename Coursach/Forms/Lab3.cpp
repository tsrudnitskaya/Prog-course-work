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
        showError("¬ыберите пор€док матрицы");
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
        showError("¬ыберите стиль заполнени€!");
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
    //провер€ем, пока счЄтчик не станет равен количеству €чеек массива
    while (counter < arrayWidth * arrayWidth) {
        //присваиваем значение текущей €чейке
        //*(pArr[i] + j) = getRandomNumber(matrixMin, matrixMax);
        *(pArr[i] + j) = counter;
        showNumber(i, j);
        //провер€ем, куда надо двигатьс€
        //если представить массив в виде таблицы, у которой есть четыре стороны
        //двигаемс€ вправо, если текущий элемент ещЄ не достиг правого кра€ массива (или заполненного столбца)
        if (i <= j + 1 && i + j < arrayWidth - 1)
            ++j;
        //двигаемс€ вниз, если мы находимс€ у правого кра€ таблицы, но ещЄ не достигли правого нижнего угла
        else if (i < j && i + j >= arrayWidth - 1)
            ++i;
        //двигаемс€ влево, если достигли нижнего угла
        else if (i >= j && i + j > arrayWidth - 1)
            --j;
        //в противном случае двигаемс€ вверх
        else
            --i;
        //подсчитываем заполненные элементы
        counter++;
        //всЄ повтор€етс€, только "стенки" таблицы сдвигаютс€, благодар€ первой проверке в каждом из условий
    }
}
void Coursach::Lab3::fillArrSnake()
{
    int counter = 0;
    int i = 0;
    int j = 0;
    //провер€ем, пока счЄтчик не станет равен количеству €чеек массива
    while (counter < arrayWidth * arrayWidth) {
        //присваиваем значение текущей €чейке, использу€ арифметику указателей
        //*(pArr[i] + j) = getRandomNumber(matrixMin, matrixMax);
        *(pArr[i] + j) = counter;
        showNumber(i, j);
        //провер€ем, если столбец нулевой или чЄтный, и текущий элемент ещЄ не достиг низа, 
        //то передвигаемс€ вниз
        if (j % 2 == 0 && i < arrayWidth - 1)
            i++;
        //если столбец нечЄтный, и текущий элемент ещЄ не достиг верха,
        //то сдвигаемс€ вверх
        else if (j % 2 != 0 && i > 0)
            i--;
        //или мен€ем столбец
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

