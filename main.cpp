#include <iostream>
#include <cstdlib>
#include "Array.h"

using namespace std; // Используем пространство имён std

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;

    cout << "Введите размер массива (целое положительное число): ";
    cin >> n;
    if (n <= 0) { cout << "Ошибка! Неверно выбран размер массива.\n"; return 0; }

    Array arr(n);

    arr.input();
    arr.print();

    cout << "\nВыберите тип сортировки массива:" << endl
        << "1. Пузырьковая сортировка" << endl
        << "2. Test2" << endl
        << "3. Test3" << endl
        << "4. Test4" << endl
        << "5. Test5" << endl;

    int number;
    cin >> number;

    switch (number)
    {
    case 1: // Использование метода пузырьковой сортировки для упорядочения массива

            // Сложность алгоритма:
            // Time Complexity (временная сложность) O(n^2) (Элементы расположены случайно)
            // Space Complexity (пространственная сложность) O(1)
    {

        // Отображаем исходный массив
        arr.print();

        // Получаем доступ к данным массива через геттеры
        int* nums = arr.getData();  // Получаем указатель на массив
        int size = arr.getSize();    // Получаем размер массива

        // Реализация метода пузырьковой сортировки массива
        for (int i = 0; i < size - 1; i++)           // Внешний цикл сортировки
        {
            for (int j = 0; j < size - i - 1; j++)   // Внутренний цикл сортировки
            {
                // Сравниваем соседние элементы
                if (nums[j] > nums[j + 1])
                {
                    // Меняем элементы местами
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        cout << "Отсортированный массив методом пузырьковой сортировки: ";
        arr.printWithoutName();  // Массив изменился, так как мы работали напрямую с data
        break;
    }


    default: cout << "Выбран несуществующий пункт меню" << endl;
        break;
    }
}