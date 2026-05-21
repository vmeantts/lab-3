#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
    double* radius;

public:
    Circle(double r);

    ~Circle();

    double CalcArea() override;

    void Show() override;
};
