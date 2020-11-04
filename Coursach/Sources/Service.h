#ifndef Service_H
#define Service_H

#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>
#include <string>
using namespace std::chrono;


int getRandomNumber(int max, int min);
/**
     * ��������� ���������� �����
     * @param {min}, {max} - �������� ��������
     * @retutn  int - ���������� ���������� �����
*/
void showArray(int arrayWidth, int* Arr);
/**
     * ����� ������� � �������
     * @param {arrayWidth} - ���������� ���������
     * @param  {*Arr} - ��������� �� ������, ������� ����� �������
*/

void generateArray(int arrayWidth, int min, int max, int* Arr);
/**
     * ��������� �������  - ���������� ���������
     * @param {arrayWidth} - ���������� ���������
     * @param {min}, {max} - �������� ��������
     * @param  {*Arr} - ��������� �� ������, � ������� ����� ������������ ��������
*/

#endif Service_H;