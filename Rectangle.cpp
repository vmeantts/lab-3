#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : Figure("Прямоугольник")
{
    width = new double(w);
    height = new double(h);
}

Rectangle::~Rectangle()
{
    delete width;
    delete height;
}

double Rectangle::CalcArea()
{
    return (*width) * (*height);
}

void Rectangle::Show()
{
    cout << "Фигура: " << *name << endl;
    cout << "Ширина: " << *width << endl;
    cout << "Высота: " << *height << endl;
}