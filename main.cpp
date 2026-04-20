// Подключаем необходимые бибилиотеки
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

    int choice;


    cout << "\nКак вы хотите заполнить массив?" << endl
        << "1. Автоматический ввод (случайные числа от -32767 до 32767)\n"
        << "2. Ручной ввод с клавиатуры\n";
    cin >> choice;
    switch (choice)
    {

    case 1:
    {
        // Заполняем случайными числами
        int* nums = arr.getData();
        int size = arr.getSize();
       
        for (int i = 0; i < size; i++) {
            int random_num = (rand() << 15) | rand();
            nums[i] = random_num % 65536 - 32768;
        }
        break;
    }

    case 2:
        arr.input();  // Ручной ввод
        break;

    default:
        cout << "Выбран несуществующий пункт меню. Будет использован ручной ввод по умолчанию\n";
        arr.input();
        break;
    }

    // arr.print();  // Выводим массив

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

        // Запускаем отсчёт времени
        clock_t start = clock();

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

        // Засекаем время окончания
        clock_t end = clock();

        // Вычисляем время в секундах
        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

        cout << "\nОтсортированный массив методом пузырьковой сортировки: ";
        arr.printWithoutName();  // Массив изменился, так как мы работали напрямую с data

        printf("Время сортировки (секунд): %.6f секунд\n", time_spent);
        // Можно вывести в разных форматах
        printf("Время сортировки (миллисекунд): %.3f мс\n", time_spent * 1000);

        break;
    }
    default: cout << "Выбран несуществующий пункт меню. Осуществляется выход из программы." << endl;
        return 0;
        break;
    }

    // Поиск элемента массива
    int c;
    cout << "\nХотите ли вы проверить, есть ли какой-либо конкретный элемент в массиве?"
        << "\n1. Да, проверить."
        << "\n2. Нет, мне не нужно это.\n";

    cin >> c;
        switch (c)
        {
        case 1:
        {
            // Поиск необходимого элемента в массиве
            cout << "\nВведите элемент массива, который вы хотите найти:\n";
            int searchElement;
            cin >> searchElement;

            // Получаем данные массива
            int* nums = arr.getData();
            int size = arr.getSize();
            bool found = false;

            // Линейный поиск элемента
            for (int i = 0; i < size; i++)
            {
                if (nums[i] == searchElement)
                {
                    found = true;
                    break;  // Просто запоминаем, что нашли, и выходим из цикла
                }
            }

            if (found)
            {
                cout << "Успех! Элемент " << searchElement << " присутствует в данном массиве.\n";
            }
            else
            {
                cout << "Провал! Элемент " << searchElement << " не обнаружен в данном массиве.\n";
            }

            break;
        }

        case 2:
            cout << "Осуществляется выход из программы.";
            return 0;
            break;
        default:
            cout << "Выбран несуществующий пункт меню. Осуществляется выход из программы.";
            break;
        }
}