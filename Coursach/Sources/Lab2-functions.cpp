#include "Service.h"
#include "Lab2-functions.h"


void bubbleSort(int arrayWidth, int* Arr) {

    for (int i = 0; i < arrayWidth; i++) {
        // ������������� ����, ������������, ��� ������ ��� ������������
        bool isSort = true;
        for (int j = 0; j < arrayWidth - (i + 1); j++) {
            if (Arr[j] > Arr[j + 1]) {
                // ���� �� ������ ���������� ����������������� �������,
                // ����������� ����� �������� false � ������ �������� �������
                isSort = false;
                std::swap(Arr[j], Arr[j + 1]);
            }
        }
        // ���� �� ���� ������ ������� �� ���� �� �������� ����������������� ��������,
        // �� ��������� ����
        if (isSort) break;
    }

}

void shakerSort(int arrayWidth, int* Arr)
{
    for (int i = 0; i < arrayWidth - i; i++) {
        bool isSort = true;
        // ������ � �� ������ � �����
        // "������������" ����������� �������� � �����
        for (int j = 0; j < arrayWidth - (i + 1); j++) {
            if (Arr[j] > Arr[j + 1]) {
                isSort = false;
                std::swap(Arr[j], Arr[j + 1]);
            }
        }
        // ������ � �� ����� � ������
        // "�������������" ����������� �������� � ������
        for (int j = arrayWidth - (i + 1); j >= i + 1; j--) {
            if (Arr[j] < Arr[j - 1]) {
                isSort = false;
                std::swap(Arr[j], Arr[j - 1]);
            }
        }
        if (isSort) break;
    }

}

void combSort(int arrayWidth, int* Arr){
    // �����������, �� ������� ����� ����������� ��� "��������"
    float k = 1.28;
    // ������ ������������ ���������
    // �� ��������� ����� ����� ������ �������
    // ����� ����� ����������� � k ���
    int S = arrayWidth;
    //���� �������� �� ���������� �� � ���������
    while (k < S) {
        //���������� �������� �� ������ � ����� ���������
        //� �������� "��������", ���� �� ������ ������ ������  � ����� �������
        for (int i = 0; i <= arrayWidth - S; i++) {
            if (Arr[i] > Arr[i + S - 1]) {
                std::swap(Arr[i], Arr[i + S - 1]);
            }
        }
        //��������� ��������
        S /= k;
    }
    //����� ����, ��� �������� ���� ������� ���������
    //������� "�����������" ���������
    bubbleSort(arrayWidth, Arr);
}

void insertSort(int arrayWidth, int* Arr){

    for (int i = 1; i < arrayWidth; i++){
        // ��������� �������� �� ��� �����
        // � ��������������� ����� �������
        for (int j = i; j > 0 && Arr[j - 1] > Arr[j]; j--)
            std::swap(Arr[j - 1], Arr[j]);
    }

}

void quickSort(int arrayWidth, int* Arr) {
    //������������� ����� (i) � ������ (j) �������
    int left = 0;
    int right = arrayWidth - 1;

    //������� ������� ������� � ������ �������
    int mid = Arr[arrayWidth / 2];

    //���������� ������� �������, ���� ��� �� �����������
    while (left <= right) {
        //� ����� ����� ������� ���������� ��������, ������� ������ ��������
        while (Arr[left] < mid) {
            left++;
        }
        //� ������ ����� ���������� ��������, ������� ������ ��������
        while (Arr[right] > mid) {
            right--;
        }
        //������ �������� �������
        if (left <= right) {
            std::swap(Arr[left], Arr[right]);
            left++;
            right--;
        }
    }
    //���������� �������� ������� ����������, ���� �������� ����������������� ��������
    if (right > 0) {
        //��� ����� �������� �� ����� ������� ��������
        quickSort(right + 1, Arr);
    }
    if (left < arrayWidth) {
        //��� ������ �������� �� ����� ������� ��������
        //����� �� ������� ��������� ����������, 
        //���������� � i-���� �������� ������� �� ������
        quickSort(arrayWidth - left, &Arr[left]);
    }
}

int benchFunc(int arrayWidth, int* Arr, void(*funcP)(int arrayWidth, int* Arr)) {

    using Time = time_point<steady_clock>;
    using Diff = microseconds;
    // ���������� �������� ���������� ������� �� ������ ���������� �������
    // ���������� ���������� ���� steady_clock
    Time start = steady_clock::now();
    // �������� ������� �������
    funcP(arrayWidth, Arr);
    // ���������� �������� ���������� ������� ����� ���������� �������
    Time end = steady_clock::now();
    // ���������� ��� ������� ��������� � ��������� ��� ��������
    Diff diff = duration_cast<Diff>(end - start);
    // ��������� ���������� ������ � ���������
    // � ���������� ����
    return diff.count();
}

int benchFunc2(int arrayWidth, int* Arr, int(*funcP)(int arrayWidth, int* Arr))
{
    using Time = time_point<steady_clock>;
    using Diff = nanoseconds;
    // ���������� �������� ���������� ������� �� ������ ���������� �������
    // ���������� ���������� ���� steady_clock
    Time start = steady_clock::now();
    // �������� ������� �������
    funcP(arrayWidth, Arr);
    // ���������� �������� ���������� ������� ����� ���������� �������
    Time end = steady_clock::now();
    // ���������� ��� ������� ��������� � ��������� ��� ��������
    Diff diff = duration_cast<Diff>(end - start);
    // ��������� ���������� ������ � ���������
    // � ���������� ����
    return diff.count();
}
int benchFunc3(int* Arr, int neededNum, int startPos, int endPos, int(*funcP)(int* Arr, int neededNum, int startPos, int endPos))
{
    using Time = time_point<steady_clock>;
    using Diff = nanoseconds;
    // ���������� �������� ���������� ������� �� ������ ���������� �������
    // ���������� ���������� ���� steady_clock
    Time start = steady_clock::now();
    // �������� ������� �������
    funcP(Arr, neededNum, startPos, endPos);
    // ���������� �������� ���������� ������� ����� ���������� �������
    Time end = steady_clock::now();
    // ���������� ��� ������� ��������� � ��������� ��� ��������
    Diff diff = duration_cast<Diff>(end - start);
    // ��������� ���������� ������ � ���������
    // � ���������� ����
    return diff.count();
}
int benchFunc4(int arrWidth, int* Arr, int neededNum, int(*funcP)(int arrWidth, int* Arr, int neededNum))
{
    using Time = time_point<steady_clock>;
    using Diff = nanoseconds;
    // ���������� �������� ���������� ������� �� ������ ���������� �������
    // ���������� ���������� ���� steady_clock
    Time start = steady_clock::now();
    // �������� ������� �������
    funcP(arrWidth, Arr, neededNum);
    // ���������� �������� ���������� ������� ����� ���������� �������
    Time end = steady_clock::now();
    // ���������� ��� ������� ��������� � ��������� ��� ��������
    Diff diff = duration_cast<Diff>(end - start);
    // ��������� ���������� ������ � ���������
    // � ���������� ����
    return diff.count();
}

int searchMax(int arrayWidth, int* Arr) {
    int index = 0;
    int max = Arr[index];
    for (int i = 1; i < arrayWidth; i++)
        if (Arr[i] > max) {
            max = Arr[i];
            index = i;
        }
    return index;
}
int searchMin(int arrayWidth, int* Arr) {
    int index = 0;
    int min = Arr[index];
    for (int i = 1; i < arrayWidth; i++)
    {
        if (Arr[i] < min) {            
            min = Arr[i];
            index = i;
        }
    }
    return index;
}

int searchMiddle(int arrayWidth, int* Arr) {
    //����� ������� ������ ������������ ��������
    int minEl = Arr[searchMin(arrayWidth, Arr)];
    //����� ������� ������ ������������� ��������
    int maxEl = Arr[searchMax(arrayWidth, Arr)];
    int middleEl = round((minEl + maxEl) / 2);
    return middleEl;
}

int searchLowerA(int* Arr, int a)
{
    int lessNum = 0;
    while (Arr[lessNum] < a)
        lessNum++;
    return lessNum;
}
int searchMoreB(int arrayWidth, int* Arr, int b)
{
    int i = arrayWidth - 1,
        moreNum = 0;
    while (Arr[i] > b) {
        i--;
        moreNum++;
    }
    return moreNum;
}
int binarySearch(int* Arr, int neededNum, int startPos, int endPos) {
    //���������� ������ ������� �������, � ������� ���������� �����
    int arrWidth = endPos - startPos + 1;
    //������������� ������� ������ �� ��������
    if (arrWidth > 1) {
        //������ ��������� � ����� �������
        int i = arrWidth / 2 + startPos;
        //���� ����� ������, ��� ������, �� ����������
        //�������� ������� ����� �� ������� ������ �� ���������
        if (Arr[i] < neededNum)
           return binarySearch(Arr, neededNum, i + 1, endPos);
        //���� ����� ������, ��� ������, �� ����������
        //�������� ������� ����� �� ������� ����� �� ���������
        else if (Arr[i] > neededNum)
           return binarySearch(Arr, neededNum, startPos, i - 1);
        //��� ���������� ������� ���������� �����
        else
            return i;
    }
    //��������� ��������������� ������� ����� ���� �������
    //�������� ���
    else if (Arr[startPos] == neededNum)
        return startPos;
    //���� ������� ����� � ������ �� ��������, �� ��� ������,
    //��� � ������� ��� ���, ���������� -1
    else
        return -1;
}
int bruteforce(int arrWidth, int* Arr, int neededNum) {
    int i = 0;
    //���������� ������ �� ��� ���, ���� ������� ��� ����������
    //�� ���������� ������ ��������
    while (Arr[i] <= neededNum) {
        if (Arr[i] == neededNum) {
            return i;
        }
        else i++;
    }
    //���� �������� ����� � ������� ���, ���������� -1
    return -1;
}
