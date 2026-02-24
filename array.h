#pragma once
// Данный файл заголовока array.h используется для создания класса Array

#include <iostream>

class Array
{
private:

    int* data;
    int size;

public:

    // конструктор
    Array(int n);

    // деструктор
    ~Array();

    // ввод
    void input();

    // вывод
    void print();
};