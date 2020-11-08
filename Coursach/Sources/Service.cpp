#include "Service.h"


int getRandomNumber(int min, int max) {
    return (rand() % (max - min + 1) + min);
}


void showArray(int arrayWidth, int *Arr) {
    for (int i = 0; i < arrayWidth; i++)
    {
        std::cout << Arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            std::cout << "\n";
    }
}


void generateArray(int arrayWidth, int min, int max, int* Arr) {
    // устанавливаем опорное значение с помощью значения системного времени
    srand(time(0));
    int el;
    for (int i = 0; i < arrayWidth; ++i)
        Arr[i] = getRandomNumber(-99, 99);
}

