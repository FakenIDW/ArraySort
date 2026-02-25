// Данный исходный файл array.cpp используется для реализации класса array.h
#include "Array.h"

using namespace std;

Array::Array(int n)
{
    size = n;
    data = new int[size];
}

Array::~Array()
{
    delete[] data;
}

void Array::input()
{
    cout << "Введите элементы массива:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
    }
}

// Вывод массива с названием
void Array::print()
{
    cout << "\nТекущий массив:\n";

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;
}


// Вывод массива без названия
void Array::printWithoutName()
{
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;
}