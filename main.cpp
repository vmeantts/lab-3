#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"

using namespace std;

// Полиморфная функция вычисления объема
double CalcVolume(Figure* figure, double height)
{
    return figure->CalcArea() * height;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure* figure = nullptr;

    int choice;

    cout << "Выберите фигуру:" << endl;
    cout << "1 - Круг" << endl;
    cout << "2 - Прямоугольник" << endl;
    cout << "3 - Треугольник" << endl;
    cout << "4 - Трапеция" << endl;

    cin >> choice;

    while (choice < 1 || choice > 4)
    {
        cout << "Ошибка! Введите число от 1 до 4: ";
        cin >> choice;
    }

    if (choice == 1)
    {
        double radius;

        cout << "Введите радиус круга: ";
        cin >> radius;

        while (radius <= 0)
        {
            cout << "Радиус должен быть больше 0: ";
            cin >> radius;
        }

        figure = new Circle(radius);
    }
    else if (choice == 2)
    {
        double width, height;

        cout << "Введите ширину прямоугольника: ";
        cin >> width;

        cout << "Введите высоту прямоугольника: ";
        cin >> height;

        while (width <= 0 || height <= 0)
        {
            cout << "Размеры должны быть больше 0!" << endl;

            cout << "Введите ширину: ";
            cin >> width;

            cout << "Введите высоту: ";
            cin >> height;
        }

        figure = new Rectangle(width, height);
    }
    else if (choice == 3)
    {
        double base, height;

        cout << "Введите основание треугольника: ";
        cin >> base;

        cout << "Введите высоту треугольника: ";
        cin >> height;

        while (base <= 0 || height <= 0)
        {
            cout << "Значения должны быть больше 0!" << endl;

            cout << "Введите основание: ";
            cin >> base;

            cout << "Введите высоту: ";
            cin >> height;
        }

        figure = new Triangle(base, height);
    }
    else if (choice == 4)
    {
        double b1, b2, h;

        cout << "Введите первое основание: ";
        cin >> b1;

        cout << "Введите второе основание: ";
        cin >> b2;

        cout << "Введите высоту: ";
        cin >> h;

        while (b1 <= 0 || b2 <= 0 || h <= 0)
        {
            cout << "Все значения должны быть больше 0!" << endl;

            cout << "Введите первое основание: ";
            cin >> b1;

            cout << "Введите второе основание: ";
            cin >> b2;

            cout << "Введите высоту: ";
            cin >> h;
        }

        figure = new Trapezoid(b1, b2, h);
    }

    cout << endl;
    cout << "Контрольный вывод данных:" << endl;

    figure->Show();

    cout << endl;

    double area = figure->CalcArea();

    cout << "Площадь фигуры: " << area << endl;

    double cylinderHeight;

    cout << endl;
    cout << "Введите высоту цилиндра: ";
    cin >> cylinderHeight;

    while (cylinderHeight <= 0)
    {
        cout << "Высота должна быть больше 0: ";
        cin >> cylinderHeight;
    }

    double volume = CalcVolume(figure, cylinderHeight);

    cout << "Объем обобщенного цилиндра: " << volume << endl;

    delete figure;

    return 0;
}



