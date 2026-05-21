#pragma once
#include <iostream>

using namespace std;

class Figure
{
protected:
    // Динамическое поле для названия фигуры
    string* name;

public:
    Figure(string figureName);

    virtual ~Figure();

    // Чисто виртуальная функция
    virtual double CalcArea() = 0;

    // Вывод информации
    virtual void Show() = 0;
};
