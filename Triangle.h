#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
    double* base;
    double* height;

public:
    Triangle(double b, double h);

    ~Triangle();

    double CalcArea() override;

    void Show() override;
};
