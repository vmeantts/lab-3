#include "Figure.h"

Figure::Figure(string figureName)
{
    name = new string(figureName);
}

Figure::~Figure()
{
    delete name;
}