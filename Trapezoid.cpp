#include "Trapezoid.h"

Trapezoid::Trapezoid(double b1, double b2, double h)
    : Figure("Трапеция")
{
    base1 = new double(b1);
    base2 = new double(b2);
    height = new double(h);
}

Trapezoid::~Trapezoid()
{
    delete base1;
    delete base2;
    delete height;
}

double Trapezoid::CalcArea()
{
    return ((*base1 + *base2) * (*height)) / 2;
}

void Trapezoid::Show()
{
    cout << "Фигура: " << *name << endl;
    cout << "Первое основание: " << *base1 << endl;
    cout << "Второе основание: " << *base2 << endl;
    cout << "Высота: " << *height << endl;
}