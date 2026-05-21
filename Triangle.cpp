#include "Triangle.h"

Triangle::Triangle(double b, double h) : Figure("Треугольник")
{
    base = new double(b);
    height = new double(h);
}

Triangle::~Triangle()
{
    delete base;
    delete height;
}

double Triangle::CalcArea()
{
    return (*base) * (*height) / 2;
}

void Triangle::Show()
{
    cout << "Фигура: " << *name << endl;
    cout << "Основание: " << *base << endl;
    cout << "Высота: " << *height << endl;
}