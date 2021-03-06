#ifndef Service_H
#define Service_H

#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>
#include <string>
#include <thread>
#include "windows.h"
#include <vector>
#include "stdio.h"

#include <msclr\marshal_cppstd.h>
using namespace std::chrono;


int getRandomNumber(int min, int max);
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