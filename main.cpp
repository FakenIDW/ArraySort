#include <iostream>
#include "Array.h"

using namespace std; // »спользуем пространство имЄн std

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;

    cout << "¬ведите размер массива (целое число): ";
    cin >> n;

    Array arr(n);

    arr.input();
    arr.print();

    return 0;
}