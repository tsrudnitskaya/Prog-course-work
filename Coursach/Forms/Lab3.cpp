#include "Lab3.h"

float** pArr, ** pArrTemp;
int arrayWidth;
int fillMethod;
int matrixMin, matrixMax, matrixCols, matrixRows;
int errors = 0;

System::Void Coursach::Lab3::btnCloseForm_Click_1(System::Object^ sender, System::EventArgs^ e)
{
    delete[] pArr;
    delete[] pArrTemp;
    this->Close();
}
void Coursach::Lab3::initialise()
{
    pArr = new float* [arrayWidth];
    pArrTemp = new float* [arrayWidth / 2];
    for (int i = 0; i < arrayWidth; i++)
        pArr[i] = new float[arrayWidth];
    for (int i = 0; i < arrayWidth / 2; i++)
        pArrTemp[i] = new float [arrayWidth / 2];
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
        showError("Выберите порядок матрицы");
        return -1;
    }
    return arrayWidth = Convert::ToInt16(getMatrixDegreeCombo->SelectedItem);
}

int Coursach::Lab3::getFillMethod() {
    if (getStyleCombo->SelectedIndex == -1) {
        showError("Выберите стиль заполнения!");
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
    if (secondMatrixPanel->Visible == false) matrixView2->Visible = true;
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
    //проверяем, пока счётчик не станет равен количеству ячеек массива
    while (counter < arrayWidth * arrayWidth) {
        //присваиваем значение текущей ячейке
        //*(pArr[i] + j) = getRandomNumber(matrixMin, matrixMax);
        *(pArr[i] + j) = counter;
        showNumber(i, j, 0);
        //проверяем, куда надо двигаться
        //если представить массив в виде таблицы, у которой есть четыре стороны
        //двигаемся вправо, если текущий элемент ещё не достиг правого края массива (или заполненного столбца)
        if (i <= j + 1 && i + j < arrayWidth - 1)
            ++j;
        //двигаемся вниз, если мы находимся у правого края таблицы, но ещё не достигли правого нижнего угла
        else if (i < j && i + j >= arrayWidth - 1)
            ++i;
        //двигаемся влево, если достигли нижнего угла
        else if (i >= j && i + j > arrayWidth - 1)
            --j;
        //в противном случае двигаемся вверх
        else
            --i;
        //подсчитываем заполненные элементы
        counter++;
        //всё повторяется, только "стенки" таблицы сдвигаются, благодаря первой проверке в каждом из условий
    }
}
void Coursach::Lab3::fillArrSnake()
{
    int counter = 0;
    int i = 0;
    int j = 0;
    //проверяем, пока счётчик не станет равен количеству ячеек массива
    while (counter < arrayWidth * arrayWidth) {
        //присваиваем значение текущей ячейке, используя арифметику указателей
        //*(pArr[i] + j) = getRandomNumber(matrixMin, matrixMax);
        *(pArr[i] + j) = counter;
        showNumber(i, j, 0);
        //Sleep(100);
        //проверяем, если столбец нулевой или чётный, и текущий элемент ещё не достиг низа, 
        //то передвигаемся вниз
        if (j % 2 == 0 && i < arrayWidth - 1)
            i++;
        //если столбец нечётный, и текущий элемент ещё не достиг верха,
        //то сдвигаемся вверх
        else if (j % 2 != 0 && i > 0)
            i--;
        //или меняем столбец
        else
            j++;
        counter++;
    }
}
//Набор функций для схемы перестановки блоков 

void Coursach::Lab3::copyFirstQuarter() {
    for (int i = 0; i < arrayWidth / 2; i++)
        for (int j = 0; j < arrayWidth / 2; j++)
            *(pArrTemp[i] + j) = *(pArr[i] + j);
}

void Coursach::Lab3::pasteFirstQuarter() {
    for (int i = 0; i < arrayWidth / 2; i++)
        for (int j = 0; j < arrayWidth / 2; j++)
            std::swap(*(pArrTemp[i] + j), *(pArr[i] + j + arrayWidth / 2));
}

void Coursach::Lab3::setElsLeftToRight(int minI) {
    for (int i = minI; i < minI + arrayWidth / 2; i++)
        for (int j = 0; j < arrayWidth / 2; j++)
            std::swap(*(pArr[i] + j), *(pArr[i] + j + arrayWidth / 2));
}

void Coursach::Lab3::setElsUpToDown(int minJ) {
    for (int i = 0; i < arrayWidth / 2; i++)
        for (int j = minJ; j < minJ + arrayWidth / 2; j++)
            std::swap(*(pArr[i] + j), *(pArr[i + arrayWidth / 2] + j));
}

void Coursach::Lab3::setElsDiagonalLeftToRight() {
    for (int i = 0; i < arrayWidth / 2; i++)
        for (int j = 0; j < arrayWidth / 2; j++)
            std::swap(*(pArr[i] + j), *(pArr[i + arrayWidth / 2] + j + arrayWidth / 2));
}


void Coursach::Lab3::setElsDiagonalRightToLeft() {
    for (int i = 0; i < arrayWidth / 2; i++)
        for (int j = arrayWidth / 2; j < arrayWidth; j++)
            std::swap(*(pArr[i] + j), *(pArr[i + arrayWidth / 2] + j - arrayWidth / 2));
}


void Coursach::Lab3::roundShift()
{
    copyFirstQuarter();
    setElsUpToDown(0);
    setElsLeftToRight(arrayWidth / 2);
    setElsUpToDown(arrayWidth / 2);
    pasteFirstQuarter();
    showArray(1);
    secondMatrixPanel->Visible = true;
}

void Coursach::Lab3::diagonalShift()
{
    setElsDiagonalLeftToRight();
    setElsDiagonalRightToLeft();
    showArray(1);
    secondMatrixPanel->Visible = true;
}

void Coursach::Lab3::verticalShift()
{
    setElsUpToDown(0);
    setElsUpToDown(arrayWidth / 2);
    showArray(1);
    secondMatrixPanel->Visible = true;
}

void Coursach::Lab3::horizontalShift()
{
    setElsLeftToRight(0);
    setElsLeftToRight(arrayWidth / 2);
    showArray(1);
    secondMatrixPanel->Visible = true;
}

System::Void Coursach::Lab3::btnQuotersChange_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    switch (quotersOptionsCombo->SelectedIndex) {
    case 0:
        roundShift();
        break;
    case 1:
        diagonalShift();
        break;
    case 2:
        verticalShift();
        break;
    case 3:
        horizontalShift();
        break;
        return;
    }
}

float Coursach::Lab3::checkUserNum(String^ text)
{
    float num;
    if (System::Single::TryParse(System::Convert::ToString(text), num)) {
        return num;
    }
    else {
        showError("Введите число!");
        errors++;
        return -1;
    }
}
void Coursach::Lab3::addition(float num){

    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) = *(pArr[i] + j) + num;
    }
}

void Coursach::Lab3::subtraction(float num)
{
    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) = *(pArr[i] + j) - num;
    }
}

void Coursach::Lab3::multiple(float num)
{
    for (int i = 0; i < arrayWidth; i++) {
        for (int j = 0; j < arrayWidth; j++)
            *(pArr[i] + j) = round(*(pArr[i] + j) * num * 1000) / 1000;
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
        else showError("На 0 делить можно, но не здесь");       
    }
    else return;
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


void Coursach::Lab3::insertSort()
{
    int i, j, k, jlast, ilast;
    int size = arrayWidth * arrayWidth;
    int flag;

    do {
        flag = 0;
        for (k = 1; k < size; k++) {
            //Вычисляем индексы текущего элемента
            i = k / arrayWidth;
            j = k - i * arrayWidth;
            //Вычисляем индексы предыдущего элемента
            ilast = (k - 1) / arrayWidth;
            jlast = (k - 1) - ilast * arrayWidth;
            if (*(pArr[i] + j) < *(pArr[ilast] + jlast)) {
                std::swap(*(pArr[i] + j), *(pArr[ilast] + jlast));
                flag = 1;
            }
        }
    } while (flag);
}
System::Void Coursach::Lab3::btnSort_Click(System::Object^ sender, System::EventArgs^ e)
{
    prepareMatrix();
    insertSort();
    showArray(1);
}
