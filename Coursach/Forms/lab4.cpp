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
    //� ����� �������� ������ �� ������� �������� �����, ������� ����� �������
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
    //� ����� ������� ��� ����� ����������, ����� �����, � ��� ��������
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' ||
            str[i] == ',' ||
            str[i] == ':' ||
            str[i] == ';' ||
            str[i] == '?' ||
            str[i] == '!')
        {
            //���� ��������� ������ ����� ��, �� ������� ���
            if (str[i + 1] == str[i]) delStr((i + 1), 1);
        }
        //���� ������ ����� � ��������� ������ ���� �����
        else if (str[i] == '.' && str[i + 1] == str[i]) {
            //�������� ������ ������ ������������������, � ���� ��� ���� �����, ������ �������� ������ ����� � ��� �� ��������� �������� �����
            if (str[i + 2] == str[i]) {
                i++;
                i++;
                continue;
            }
            //���� ��� ��� �����, �� ������� ������
            else
                delStr((i + 1), 1);
        }
        //�������� char � int, ����� ���������� ��� �������
        //���� ��� ��������� ��������� �����, �� ������ � �� ��������������� ��������
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
        showErr("������� ��������� ��� ������");
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
        if (counter == 1) searchIndexesLabel->Text = "�� ������� ";
        else searchIndexesLabel->Text = "�� �������� ";
        for (int i = 0; i < counter; i++) {
            searchIndexesLabel->Text += Convert::ToString(resultsArr[i]) + " ";
        }
    }
    else {
        searchIndexesLabel->Text = "�����";
    }
    searchResultsPanel->Visible = true;
}


int Coursach::lab4::bruteForceSearch(char* subStr)
{
    int strLen = strlen(str);
    int subStrLen = strlen(subStr);
    int flag = 0;
    int counter = 0; 
    //������ ����� �������, ���������� ���������� ����� ����� �� ������, ��� ����� ������
    resultsArr.resize(strLen);
    for (int i = 0; i <= strLen - subStrLen; i++) {
        //���� ��������� ������ ��������� � ������ �������� ���������
        if (str[i] == subStr[0]) {
            //������ ���� � ��������� �������� ������
            flag = 1;
            //���� ���� ������������ � ����������, �� ��������� ��������� � ��� ������
            for (int j = 0; j < subStrLen; j++, i++) {
                if (str[i] != subStr[j]) {
                    flag = 0;
                    break;
                }
            }
            //��� ���������� ������� ��������� ��������� � �������������� ������ � ����������� �������
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
        showErr("������� ��������� ��� ������");
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
    //������ ����� ���������� �������, ���������� ���������� ����� ����� �� ������, ��� ����� ������
    tempArr.resize(strLen);
    //������� ��� ��������� ������ ����� ������� ���������
    //� ���������� �� ��������� ������
    for (int i = 0; i <= strLen - subStrLen; i++) {
        if (str[i] == subStr[0]) {
            tempArr[counter] = i;
            counter++;
        }
    }
    //���� ���� ������� ���� �� ���� ���������
    if (counter > 0) {
        //������� ����� �������, � ������� ������������ ������������� ����������
        //�� ����� �� ������, ��� ��������� ��������� ������� �������
        resultsArr.resize(counter);
        //���� ��������� ������ �� ���������, �� �������� ����������-����
        for (int i = 0; i < counter; i++) {
            flag = 1;
            int k = tempArr[i];
            for (int j = 0; j < subStrLen; j++, k++) {
                if (str[k] != subStr[j]) {
                    flag = 0;
                    break;
                }
            }
            //���� ���� �� ������, ���������� ��������� � �������������� ������
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
        showErr("������� ��������� ��� ������");
    }
    else {
        hideErr();
        int counter = knmSearch(subStr);
        showSearchResults(counter);
    }
}
void Coursach::lab4::delSubStr(char *subStr, int counter)
{
    //������� ����� ��������� ������������������
    int len = strlen(subStr);
    //�������� ������� �������� ��������� ������� ���, ������� ������������������� ���� �������
    for (int i = 0; i < counter; i++) {
        delStr(resultsArr[i] - len*i, len);
    }
}



System::Void Coursach::lab4::btnDeleteSubstr_Click(System::Object^ sender, System::EventArgs^ e)
{
    char* subStr = (char*)(void*)Marshal::StringToHGlobalAnsi(delBox->Text);
    if (strlen(subStr) == 0) {
        showErr("������� ��������� ��� ��������");
    }
    else {
        hideErr();
        int counter = knmSearch(subStr);
        if (counter > 0) {
            delSubStr(subStr, counter);
            correctText->Text = gcnew System::String(str);
            deleteSubstrLabel->Text = "�������";
            deleteSubstrLabel->Visible = true;
        }
        else {
            deleteSubstrLabel->Text = "�������� ������������������ �� �������";
            deleteSubstrLabel->Visible = true;
        }
    }
}
void Coursach::lab4::firstLetterSearch()
{
    char firstLetter;
    int firstLetterPos = 0;
    //����� ����� �� ������ 1, ������ ��� � ������ ��������� ����� ���� ��� ������� ���� �����
    int wordLen = 1;
    int flag = 0;
    int ch;
    int strLen = strlen(str);
    for (int i = 0; i < strLen; i++) {
        //�������� char � int, ����� ����������
        ch = static_cast<int>(str[i]);
        //�����/����� ��� ���-�� ������. �������������, ��� ����� ����������
        //� ����� ��� �����
        if (ch <= 122 && ch >= 97 || ch <= 57 && ch >= 48) {
            //����� ������ �����, ��������� ��� ������ ����� � � ���������
            firstLetter = str[i];
            firstLetterPos = i;
            i++;
            //������ �� ������� ������� ��� �� ����� ����� ��������
            //��� �� � ����� ����� �� �����, ��� ������
            //���� ���� ����������, �� ���������� �������� � ����������-�����
            while ((str[i] != ' ') && (i < strLen)) {
                if (str[i] == firstLetter) {
                    flag++;
                }
                i++;
                wordLen++;
            }
            //��������� �� �����, ���� ������������� ���� ���
            if (flag == 0) {
                //������� �� ����� �� ������
                delStr((firstLetterPos), ++wordLen);
                //������ ������� ������� � ��������� ����� �����
                i -= wordLen;
                strLen -= wordLen;
            }
            //�������� ����������-���� � ���������� � ������ �����
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
    //��� �������� ���� � �����
    String^ fileName = "";
    //����� ���� ������
    if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
        fileName = openFileDialog1->FileName;
    }
    //��������� ������ ��������
    try {
        StreamReader^ file = File::OpenText(fileName);
        str = (char*)(void*)Marshal::StringToHGlobalAnsi(file->ReadToEnd());
        //������ ������
        hideErr();
        //���������� ������ ���������, ���� �� ����� �� ��� �����
        if (workPanel->Visible == false) {
            workPanel->Visible = true;
        }
        //��������� ������� ��������
        inputTextCorretion();
        //������� � ����� � ������� �������
        correctText->Text = gcnew System::String(str);
    }
    catch(Exception^ e){
        showErr("������ �������� �����");
    }
}

