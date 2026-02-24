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
    cout << "Введите элементы:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
    }
}

void Array::print()
{
    cout << "Массив:\n";

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;
}