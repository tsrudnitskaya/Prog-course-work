#include "lab4.h"
using namespace System::Runtime::InteropServices;

int err = 0;
char* str;
std::vector<int> resultsArr;


System::Void Coursach::lab4::btnCloseForm_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

void Coursach::lab4::delStr(int i, int len)
{
    //в цикле сдвигаем строку на столько символов влево, сколько нужно удалить
    for (i; i <= strlen(str); i++) {
        str[i] = str[i + len];
    }
}



void Coursach::lab4::showErr(String^ text)
{
    errorLabel1->Text = text;
    errorPanel->Visible = true;
    err++;
}

void Coursach::lab4::hideErr()
{
    errorPanel->Visible = false;
    err = 0;
    deleteSubstrLabel->Visible = false;
}



void Coursach::lab4::inputTextCorretion()
{
    //в цикле находим все знаки препинания, кроме точки, с ней отдельно
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' ||
            str[i] == ',' ||
            str[i] == ':' ||
            str[i] == ';' ||
            str[i] == '?' ||
            str[i] == '!')
        {
            //если следующий символ такой же, то удаляем его
            if (str[i + 1] == str[i]) delStr((i + 1), 1);
        }
        //если символ точка и следующий символ тоже точка
        else if (str[i] == '.' && str[i + 1] == str[i]) {
            //проверим третий символ последовательности, и если это тоже точка, просто сдвигаем маркер вперёд и идём на следующую итерацию цикла
            if (str[i + 2] == str[i]) {
                i++;
                i++;
                continue;
            }
            //если это две точки, то удаляем лишнюю
            else
                delStr((i + 1), 1);
        }
        //приводим char к int, чтобы посмотреть код символа
        //если это прописная латинская буква, то меняем её на соответствующую строчную
        else {
            int ch = static_cast<int>(str[i]);
            if (ch <= 90 && ch >= 65)
                str[i] = ch + 32;
        }
    }
}

System::Void Coursach::lab4::btnGetText_Click(System::Object^ sender, System::EventArgs^ e)
{
    str = (char*)(void*)Marshal::StringToHGlobalAnsi(textBox1->Text);
    if (strlen(str) == 0) {
        showErr("Введите подстроку для поиска");
    }
    else {
        hideErr();
        if (workPanel->Visible == false) {
            workPanel->Visible = true;
        }
        inputTextCorretion();
        correctText->Text = gcnew System::String(str);
    }
        
}


void Coursach::lab4::showSearchResults(int counter)
{
    if (counter > 0) {
        if (counter == 1) searchIndexesLabel->Text = "на позиции ";
        else searchIndexesLabel->Text = "на позициях ";
        for (int i = 0; i < counter; i++) {
            searchIndexesLabel->Text += Convert::ToString(resultsArr[i]) + " ";
        }
    }
    else {
        searchIndexesLabel->Text = "нигде";
    }
    searchResultsPanel->Visible = true;
}


int Coursach::lab4::bruteForceSearch(char* subStr)
{
    int strLen = strlen(str);
    int subStrLen = strlen(subStr);
    int flag = 0;
    int counter = 0; 
    //задаем длину вектору, количество совпадений будет точно не больше, чем длина строки
    resultsArr.resize(strLen);
    for (int i = 0; i <= strLen - subStrLen; i++) {
        //если очередной символ совпадает с первым символом подстроки
        if (str[i] == subStr[0]) {
            //ставим флаг и запускаем проверку дальше
            flag = 1;
            //если есть несовпадение с подстрокой, то прерываем сравнение и идём дальше
            for (int j = 0; j < subStrLen; j++, i++) {
                if (str[i] != subStr[j]) {
                    flag = 0;
                    break;
                }
            }
            //или записываем позицию найденной подстроки в результирующий массив и увеличиваем счётчик
            if (flag == 1) {
                resultsArr[counter] = (i - subStrLen);
                counter++;
            }          

        }
    }
    return counter;
}



System::Void Coursach::lab4::bruteForceSearchBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
    char* subStr = (char*)(void*)Marshal::StringToHGlobalAnsi(searchBox->Text);
    if (strlen(subStr) == 0) {
        showErr("Введите подстроку для поиска");
    }
    else {
        hideErr();
        int counter = bruteForceSearch(subStr);
        showSearchResults(counter);
        
    }

}
int Coursach::lab4::knmSearch(char * subStr)
{
    int strLen = strlen(str);
    int subStrLen = strlen(subStr);
    int flag = 0;
    int counter = 0;
    int resultIndex = 0;
    std::vector<int> tempArr;
    //задаем длину временному вектору, количество совпадений будет точно не больше, чем длина строки
    tempArr.resize(strLen);
    //находим все вхождения первой буквы искомой подстроки
    //и записываем во временный массив
    for (int i = 0; i <= strLen - subStrLen; i++) {
        if (str[i] == subStr[0]) {
            tempArr[counter] = i;
            counter++;
        }
    }
    //если было найдено хотя бы одно вхождение
    if (counter > 0) {
        //зададим длину вектору, в который записываются окончательные результаты
        //их будет не больше, чем найденных вхождений первого символа
        resultsArr.resize(counter);
        //если подстрока входит не полностью, то обнуляем переменную-флаг
        for (int i = 0; i < counter; i++) {
            flag = 1;
            int k = tempArr[i];
            for (int j = 0; j < subStrLen; j++, k++) {
                if (str[k] != subStr[j]) {
                    flag = 0;
                    break;
                }
            }
            //если флаг не обнулён, записываем вхождение в результирующий массив
            if (flag == 1) {
                resultsArr[resultIndex] = tempArr[i];
                resultIndex++;
            }
        }
    }
    return resultIndex;
}



System::Void Coursach::lab4::knmSearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
    char* subStr = (char*)(void*)Marshal::StringToHGlobalAnsi(searchBox->Text);
    if (strlen(subStr) == 0) {
        showErr("Введите подстроку для поиска");
    }
    else {
        hideErr();
        int counter = knmSearch(subStr);
        showSearchResults(counter);
    }
}
void Coursach::lab4::delSubStr(char *subStr, int counter)
{
    //считаем длину удаляемой последовательности
    int len = strlen(subStr);
    //вызываем функцию удаления подстроки столько раз, сколько последовательностей было найдено
    for (int i = 0; i < counter; i++) {
        delStr(resultsArr[i] - len*i, len);
    }
}



System::Void Coursach::lab4::btnDeleteSubstr_Click(System::Object^ sender, System::EventArgs^ e)
{
    char* subStr = (char*)(void*)Marshal::StringToHGlobalAnsi(delBox->Text);
    if (strlen(subStr) == 0) {
        showErr("Введите подстроку для удаления");
    }
    else {
        hideErr();
        int counter = knmSearch(subStr);
        if (counter > 0) {
            delSubStr(subStr, counter);
            correctText->Text = gcnew System::String(str);
            deleteSubstrLabel->Text = "удалено";
            deleteSubstrLabel->Visible = true;
        }
        else {
            deleteSubstrLabel->Text = "введённая последовательность не найдена";
            deleteSubstrLabel->Visible = true;
        }
    }
}
void Coursach::lab4::firstLetterSearch()
{
    char firstLetter;
    int firstLetterPos = 0;
    //длина слова не меньше 1, потому что в каждом найденном слове есть как минимум одна буква
    int wordLen = 1;
    int flag = 0;
    int ch;
    int strLen = strlen(str);
    for (int i = 0; i < strLen; i++) {
        //приводим char к int, чтобы посмотреть
        ch = static_cast<int>(str[i]);
        //буквы/цифры или что-то другое. Подразумеваем, что слово начинается
        //с буквы или цифры
        if (ch <= 122 && ch >= 97 || ch <= 57 && ch >= 48) {
            //нашли начало слова, запомнили его первую букву и её положение
            firstLetter = str[i];
            firstLetterPos = i;
            i++;
            //теперь до первого пробела или до конца слова проверям
            //нет ли в слове такой же буквы, как первая
            //если есть совпадение, то прибавляем единичку к переменной-флагу
            while ((str[i] != ' ') && (i < strLen)) {
                if (str[i] == firstLetter) {
                    flag++;
                }
                i++;
                wordLen++;
            }
            //проверили всё слово, если повторяющихся букв нет
            if (flag == 0) {
                //удаляем всё слово из строки
                delStr((firstLetterPos), ++wordLen);
                //меняем позицию маркера и уменьшаем длину слова
                i -= wordLen;
                strLen -= wordLen;
            }
            //обнуляем переменную-флаг и переменную с длиной слова
            else {
                flag = 0;
            }
            wordLen = 1;

        }            
    }
}
System::Void Coursach::lab4::btnFirstLetterSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
    firstLetterSearch();
    correctText->Text = gcnew System::String(str);
}

System::Void Coursach::lab4::loadFromFile_Click(System::Object^ sender, System::EventArgs^ e)
{
    //тут хранится путь к файлу
    String^ fileName = "";
    //когда файл выбран
    if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
        fileName = openFileDialog1->FileName;
    }
    //обработка ошибки открытия
    try {
        StreamReader^ file = File::OpenText(fileName);
        str = (char*)(void*)Marshal::StringToHGlobalAnsi(file->ReadToEnd());
        //прячем ошибки
        hideErr();
        //показываем рабочй интерфейс, если до этого он был скрыт
        if (workPanel->Visible == false) {
            workPanel->Visible = true;
        }
        //запускаем функцию типограф
        inputTextCorretion();
        //выводим в лейбл с рабочим текстом
        correctText->Text = gcnew System::String(str);
    }
    catch(Exception^ e){
        showErr("Ошибка открытия файла");
    }
}

