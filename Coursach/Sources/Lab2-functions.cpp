#include "Service.h"
#include "Lab2-functions.h"


void bubbleSort(int arrayWidth, int* Arr) {

    for (int i = 0; i < arrayWidth; i++) {
        // устанавливаем флаг, показывающий, что массив уже отсортирован
        bool isSort = true;
        for (int j = 0; j < arrayWidth - (i + 1); j++) {
            if (Arr[j] > Arr[j + 1]) {
                // если по дороге попадается неотсортированный элемент,
                // присваиваем флагу значение false и меняем элементы местами
                isSort = false;
                std::swap(Arr[j], Arr[j + 1]);
            }
        }
        // если за весь проход массива ни разу не попались неотсортированные элементы,
        // то прерываем цикл
        if (isSort) break;
    }

}

void shakerSort(int arrayWidth, int* Arr)
{
    for (int i = 0; i < arrayWidth - i; i++) {
        bool isSort = true;
        // проход в из начала в конец
        // "выталкивание" наибольшего элемента в конец
        for (int j = 0; j < arrayWidth - (i + 1); j++) {
            if (Arr[j] > Arr[j + 1]) {
                isSort = false;
                std::swap(Arr[j], Arr[j + 1]);
            }
        }
        // проход в из конца в начало
        // "выталкиваение" наименьшего элемента в начало
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
    // коэффициент, на который будет уменьшаться шаг "расчёски"
    float k = 1.28;
    // ширина проверяемого диапазона
    // на начальном этапе равна ширине массива
    // после будет уменьшаться в k раз
    int S = arrayWidth;
    //пока диапазон не схлопнется до к элементов
    while (k < S) {
        //сравниваем элементы из начала и конца диапазона
        //и сдвигаем "расчёску", пока не упрёмся правым концом  в конец массива
        for (int i = 0; i <= arrayWidth - S; i++) {
            if (Arr[i] > Arr[i + S - 1]) {
                std::swap(Arr[i], Arr[i + S - 1]);
            }
        }
        //уменьшаем диапазон
        S /= k;
    }
    //после того, как диапазон стал слишком маленьким
    //остаток "причёсываем" пузырьком
    bubbleSort(arrayWidth, Arr);
}

void insertSort(int arrayWidth, int* Arr){

    for (int i = 1; i < arrayWidth; i++){
        // установка элемента на своё место
        // в отсортированной части массива
        for (int j = i; j > 0 && Arr[j - 1] > Arr[j]; j--)
            std::swap(Arr[j - 1], Arr[j]);
    }

}

void quickSort(int arrayWidth, int* Arr) {
    //устанавливаем левый (i) и правый (j) маркеры
    int left = 0;
    int right = arrayWidth - 1;

    //находим опорный элемент в центре массива
    int mid = Arr[arrayWidth / 2];

    //продолжаем сводить маркеры, пока они не пересекутся
    while (left <= right) {
        //В левой части массива пропускаем элементы, которые меньше опорного
        while (Arr[left] < mid) {
            left++;
        }
        //В правой части пропускаем элементы, которые больше опорного
        while (Arr[right] > mid) {
            right--;
        }
        //Меняем элементы местами
        if (left <= right) {
            std::swap(Arr[left], Arr[right]);
            left++;
            right--;
        }
    }
    //рекурсивно вызываем функцию сортировки, если остались неотсортированные элементы
    if (right > 0) {
        //для левой половины от места встречи маркеров
        quickSort(right + 1, Arr);
    }
    if (left < arrayWidth) {
        //для правой половины от места встречи маркеров
        //чтобы не вводить отдельные переменные, 
        //обращаемся к i-тому элементу массива по ссылке
        quickSort(arrayWidth - left, &Arr[left]);
    }
}

int benchFunc(int arrayWidth, int* Arr, void(*funcP)(int arrayWidth, int* Arr)) {

    using Time = time_point<steady_clock>;
    using Diff = microseconds;
    // Запоминаем значение системного времени до начала выполнения функции
    // используем монотонные часы steady_clock
    Time start = steady_clock::now();
    // вызываем коллбэк функцию
    funcP(arrayWidth, Arr);
    // Запоминаем значение системного времени после выполнения функции
    Time end = steady_clock::now();
    // Определяем тип объекта интервала и вычисляем его значение
    Diff diff = duration_cast<Diff>(end - start);
    // вычисляем количество тактов в интервале
    // и возвращаем итог
    return diff.count();
}

int benchFunc2(int arrayWidth, int* Arr, int(*funcP)(int arrayWidth, int* Arr))
{
    using Time = time_point<steady_clock>;
    using Diff = nanoseconds;
    // Запоминаем значение системного времени до начала выполнения функции
    // используем монотонные часы steady_clock
    Time start = steady_clock::now();
    // вызываем коллбэк функцию
    funcP(arrayWidth, Arr);
    // Запоминаем значение системного времени после выполнения функции
    Time end = steady_clock::now();
    // Определяем тип объекта интервала и вычисляем его значение
    Diff diff = duration_cast<Diff>(end - start);
    // вычисляем количество тактов в интервале
    // и возвращаем итог
    return diff.count();
}
int benchFunc3(int* Arr, int neededNum, int startPos, int endPos, int(*funcP)(int* Arr, int neededNum, int startPos, int endPos))
{
    using Time = time_point<steady_clock>;
    using Diff = nanoseconds;
    // Запоминаем значение системного времени до начала выполнения функции
    // используем монотонные часы steady_clock
    Time start = steady_clock::now();
    // вызываем коллбэк функцию
    funcP(Arr, neededNum, startPos, endPos);
    // Запоминаем значение системного времени после выполнения функции
    Time end = steady_clock::now();
    // Определяем тип объекта интервала и вычисляем его значение
    Diff diff = duration_cast<Diff>(end - start);
    // вычисляем количество тактов в интервале
    // и возвращаем итог
    return diff.count();
}
int benchFunc4(int arrWidth, int* Arr, int neededNum, int(*funcP)(int arrWidth, int* Arr, int neededNum))
{
    using Time = time_point<steady_clock>;
    using Diff = nanoseconds;
    // Запоминаем значение системного времени до начала выполнения функции
    // используем монотонные часы steady_clock
    Time start = steady_clock::now();
    // вызываем коллбэк функцию
    funcP(arrWidth, Arr, neededNum);
    // Запоминаем значение системного времени после выполнения функции
    Time end = steady_clock::now();
    // Определяем тип объекта интервала и вычисляем его значение
    Diff diff = duration_cast<Diff>(end - start);
    // вычисляем количество тактов в интервале
    // и возвращаем итог
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
    //вызов функции поиска минимального элемента
    int minEl = Arr[searchMin(arrayWidth, Arr)];
    //вызов функции поиска максимального элемента
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
    //определяем ширину отрезка массива, в котором производим поиск
    int arrWidth = endPos - startPos + 1;
    //устанавливаем условие выхода из рекурсии
    if (arrWidth > 1) {
        //ставим указатель в центр отрезка
        int i = arrWidth / 2 + startPos;
        //если число меньше, чем нужное, то рекурсивно
        //вызываем функцию снова на отрезке справа от указателя
        if (Arr[i] < neededNum)
           return binarySearch(Arr, neededNum, i + 1, endPos);
        //если число больше, чем нужное, то рекурсивно
        //вызываем функцию снова на отрезке слева от указателя
        else if (Arr[i] > neededNum)
           return binarySearch(Arr, neededNum, startPos, i - 1);
        //или возвращаем позицию найденного числа
        else
            return i;
    }
    //последний рассматриваемый элемент может быть искомым
    //проверим это
    else if (Arr[startPos] == neededNum)
        return startPos;
    //Если искомое число и теперь не наншлось, то это значит,
    //что в массиве его нет, возвращаем -1
    else
        return -1;
}
int bruteforce(int arrWidth, int* Arr, int neededNum) {
    int i = 0;
    //перебираем массив до тех пор, пока элемент под указателем
    //не становится больше искомого
    while (Arr[i] <= neededNum) {
        if (Arr[i] == neededNum) {
            return i;
        }
        else i++;
    }
    //Если искомого числа в массиве нет, возвращаем -1
    return -1;
}
