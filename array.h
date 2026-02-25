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

    // Ввод массива
    void input();

    // Вывод массива c названием
    void print();

    // Вывод массива без названия
    void printWithoutName();

    // Добавляем геттеры
    // Функция получения указателя на массив
    int* getData() { return data; }

    // Функция получения размера массива
    int getSize() { return size; }
};