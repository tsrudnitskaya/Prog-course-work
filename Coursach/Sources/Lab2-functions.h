#ifndef Lab2_H
#define Lab2_H

/**
     * пузырьковая сортировка заданного массива
     * @param {arrayWidth} - количество элементов
     * @param  {*Arr} - указатель на массив, в который будут записываться значения
*/
void bubbleSort(int arrayWidth, int* Arr);
/**
     * шейкер-сортировка заданного массива
     * @param {arrayWidth} - количество элементов
     * @param  {*Arr} - указатель на массив, в который будут записываться значения
*/
void shakerSort(int arrayWidth, int* Arr);
/**
     * комбинированная сортировка (сортировка "расчёской") заданного массива
     * @param {arrayWidth} - количество элементов
     * @param  {*Arr} - указатель на массив, в который будут записываться значения
*/
void combSort(int arrayWidth, int* Arr);
/**
     * сортировка вставками заданного массива
     * @param {arrayWidth} - количество элементов
     * @param  {*Arr} - указатель на массив, в который будут записываться значения
*/
void insertSort(int arrayWidth, int* Arr);
/**
     * быстрая сортировка заданного массива
     * @param {arrayWidth} - количество элементов
     * @param  {*Arr} - указатель на массив, в который будут записываться значения
*/
void quickSort(int arrayWidth, int* Arr);

/**
     * замер времени для разных функций сортировки (со схожими сигнатурами)
     * к сожалению, я пока не смогла найти способ сделать универсальный коллбэк,
     * поэтому кое-где в проекте код таймера будет дублироваться
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и указатель на сортируемый массив
     * @param {*funcP} - указатель на одну из функций сортировки
     * @returns возвращает время в мс
*/
int benchFunc(int arrayWidth, int* Arr, void(*funcP)(int arrayWidth, int* Arr));

/**
     * замер времени для разных функций сортировки (со схожими сигнатурами)
     * дублирование функции benchFunc(...) для коллбэка, возвращающего целое значение
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и указатель на сортируемый массив
     * @param {*funcP} - указатель на одну из функций сортировки
     * @returns возвращает время в мс
*/
int benchFunc2(int arrayWidth, int* Arr, bool isSorted, int(*funcP)(int arrayWidth, int* Arr, bool isSorted));

int benchFunc3(int* Arr, int neededNum, int startPos, int endPos, int(*funcP)(int* Arr, int neededNum, int startPos, int endPos));

int benchFunc4(int arrWidth, int* Arr, int neededNum, int(*funcP)(int arrWidth, int* Arr, int neededNum));

/**
     * поиск максимального элемента массива 
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и ссылка на массив
     * @returns возвращает время в мс
*/
int searchMax(int arrayWidth, int* Arr, bool isSorted);
/**
     * поиск минимального элемента массива
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и указатель на массив, в котором проводится поиск
     * @returns возвращает минимальный элемент
*/
int searchMin(int arrayWidth, int* Arr, bool isSorted);
/**
     * поиск среднего элемента массива
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и указатель на массив, в котором проводится поиск
     * @param {&middleNum} - ссылка на переменную, в которой хранится количество элементов, равных среднему
     * @returns возвращает минимальный элемент
*/
int searchMiddle(int arrayWidth, int* Arr, bool isSorted);
/**
     * подсчёт количества элементов, меньших а, вводимого пользователем
     * @param  {*Arr} - указатель на массив, в котором проводится поиск
     * @param {a} - заданное пользователем число
     * @returns возвращает искомое количество
*/
int searchLowerA(int* Arr, int a);
/**
     * подсчёт количества элементов, больших b, вводимого пользователем
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и указатель на массив, в котором проводится поиск
     * @param {b} - заданное пользователем число
     * @returns возвращает искомое количество
*/
int searchMoreB(int arrayWidth, int* Arr, int b);
/**
     * поиск в массиве позиции числа, введённого пользователем
     * @param {*Arr} -указатель на массив, в котором проводится поиск
     * @param {neededNum} - заданное пользователем число
     * @param {startPos}, @param {endPos} - начальная и конечная позиции
     * @returns возвращает искомое число или -1, если элемент не найден
*/
int binarySearch(int* Arr, int neededNum, int startPos, int endPos);
/**
     * поиск в массиве позиции числа, введённого пользователем
     * @param {arrayWidth}, @param  {*Arr} - количество элементов и указатель на массив, в котором проводится поиск
     * @param {neededNum} - заданное пользователем число
     * @param {position} - стартовая позиция, по умолчанию поиск начинается с нулевого элемента
     * @returns возвращает  число или -1, если элемент не найден
*/
int bruteforce(int arrWidth, int* Arr, int neededNum);


#endif