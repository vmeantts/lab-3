#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
    double* width;
    double* height;

public:
    Rectangle(double w, double h);

    ~Rectangle();

    double CalcArea() override;

    void Show() override;
};
