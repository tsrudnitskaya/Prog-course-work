#ifndef Lab2_H
#define Lab2_H

/**
     * ����������� ���������� ��������� �������
     * @param {arrayWidth} - ���������� ���������
     * @param  {*Arr} - ��������� �� ������, � ������� ����� ������������ ��������
*/
void bubbleSort(int arrayWidth, int* Arr);
/**
     * ������-���������� ��������� �������
     * @param {arrayWidth} - ���������� ���������
     * @param  {*Arr} - ��������� �� ������, � ������� ����� ������������ ��������
*/
void shakerSort(int arrayWidth, int* Arr);
/**
     * ��������������� ���������� (���������� "���������") ��������� �������
     * @param {arrayWidth} - ���������� ���������
     * @param  {*Arr} - ��������� �� ������, � ������� ����� ������������ ��������
*/
void combSort(int arrayWidth, int* Arr);
/**
     * ���������� ��������� ��������� �������
     * @param {arrayWidth} - ���������� ���������
     * @param  {*Arr} - ��������� �� ������, � ������� ����� ������������ ��������
*/
void insertSort(int arrayWidth, int* Arr);
/**
     * ������� ���������� ��������� �������
     * @param {arrayWidth} - ���������� ���������
     * @param  {*Arr} - ��������� �� ������, � ������� ����� ������������ ��������
*/
void quickSort(int arrayWidth, int* Arr);

/**
     * ����� ������� ��� ������ ������� ���������� (�� ������� �����������)
     * � ���������, � ���� �� ������ ����� ������ ������� ������������� �������,
     * ������� ���-��� � ������� ��� ������� ����� �������������
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ��������� �� ����������� ������
     * @param {*funcP} - ��������� �� ���� �� ������� ����������
     * @returns ���������� ����� � ��
*/
int benchFunc(int arrayWidth, int* Arr, void(*funcP)(int arrayWidth, int* Arr));

/**
     * ����� ������� ��� ������ ������� ���������� (�� ������� �����������)
     * ������������ ������� benchFunc(...) ��� ��������, ������������� ����� ��������
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ��������� �� ����������� ������
     * @param {*funcP} - ��������� �� ���� �� ������� ����������
     * @returns ���������� ����� � ��
*/
int benchFunc2(int arrayWidth, int* Arr, bool isSorted, int(*funcP)(int arrayWidth, int* Arr, bool isSorted));

int benchFunc3(int* Arr, int neededNum, int startPos, int endPos, int(*funcP)(int* Arr, int neededNum, int startPos, int endPos));

int benchFunc4(int arrWidth, int* Arr, int neededNum, int(*funcP)(int arrWidth, int* Arr, int neededNum));

/**
     * ����� ������������� �������� ������� 
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ������ �� ������
     * @returns ���������� ����� � ��
*/
int searchMax(int arrayWidth, int* Arr, bool isSorted);
/**
     * ����� ������������ �������� �������
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ��������� �� ������, � ������� ���������� �����
     * @returns ���������� ����������� �������
*/
int searchMin(int arrayWidth, int* Arr, bool isSorted);
/**
     * ����� �������� �������� �������
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ��������� �� ������, � ������� ���������� �����
     * @param {&middleNum} - ������ �� ����������, � ������� �������� ���������� ���������, ������ ��������
     * @returns ���������� ����������� �������
*/
int searchMiddle(int arrayWidth, int* Arr, bool isSorted);
/**
     * ������� ���������� ���������, ������� �, ��������� �������������
     * @param  {*Arr} - ��������� �� ������, � ������� ���������� �����
     * @param {a} - �������� ������������� �����
     * @returns ���������� ������� ����������
*/
int searchLowerA(int* Arr, int a);
/**
     * ������� ���������� ���������, ������� b, ��������� �������������
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ��������� �� ������, � ������� ���������� �����
     * @param {b} - �������� ������������� �����
     * @returns ���������� ������� ����������
*/
int searchMoreB(int arrayWidth, int* Arr, int b);
/**
     * ����� � ������� ������� �����, ��������� �������������
     * @param {*Arr} -��������� �� ������, � ������� ���������� �����
     * @param {neededNum} - �������� ������������� �����
     * @param {startPos}, @param {endPos} - ��������� � �������� �������
     * @returns ���������� ������� ����� ��� -1, ���� ������� �� ������
*/
int binarySearch(int* Arr, int neededNum, int startPos, int endPos);
/**
     * ����� � ������� ������� �����, ��������� �������������
     * @param {arrayWidth}, @param  {*Arr} - ���������� ��������� � ��������� �� ������, � ������� ���������� �����
     * @param {neededNum} - �������� ������������� �����
     * @param {position} - ��������� �������, �� ��������� ����� ���������� � �������� ��������
     * @returns ����������  ����� ��� -1, ���� ������� �� ������
*/
int bruteforce(int arrWidth, int* Arr, int neededNum);


#endif