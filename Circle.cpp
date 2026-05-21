#include "Circle.h"
#include <cmath>

Circle::Circle(double r) : Figure("Круг")
{
    radius = new double(r);
}

Circle::~Circle()
{
    delete radius;
}

double Circle::CalcArea()
{
    return 3.14159 * (*radius) * (*radius);
}

void Circle::Show()
{
    cout << "Фигура: " << *name << endl;
    cout << "Радиус: " << *radius << endl;
}