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
     * генерация случайного числа
     * @param {min}, {max} - диапазон значений
     * @retutn  int - возвращает полученное число
*/
void showArray(int arrayWidth, int* Arr);
/**
     * вывод массива в консоль
     * @param {arrayWidth} - количество элементов
     * @param  {*Arr} - указатель на массив, который нужно вывести
*/

void generateArray(int arrayWidth, int min, int max, int* Arr);
/**
     * генерация массива  - количество элементов
     * @param {arrayWidth} - количество элементов
     * @param {min}, {max} - диапазон значений
     * @param  {*Arr} - указатель на массив, в который будут записываться значения
*/

#endif Service_H;