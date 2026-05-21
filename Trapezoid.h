#pragma once
#include "Figure.h"

class Trapezoid : public Figure
{
private:
    double* base1;
    double* base2;
    double* height;

public:
    Trapezoid(double b1, double b2, double h);

    ~Trapezoid();

    double CalcArea() override;

    void Show() override;
};
