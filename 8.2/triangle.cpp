#include "triangle.h"

using namespace std;

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : Triangle(a, b, c, A, B, C, "Треугольник") {}

Triangle::Triangle(int a, int b, int c, int A, int B, int C, string name)
    : Figure(3, name)
    , sides{ a, b, c }
    , angles{ A, B, C }
{
    this->printInfo();
    if ((A + B + C) != 180)
        throw FigureException(FigureExitCodes::ANGLES_SUM_NOT_EQ_180);
}

void Triangle::printInfo() {

    cout << "(стороны ";
    getSides();
    cout << ";";
    cout << " углы ";
    getAngles();
    cout << ") ";
}

void Triangle::getSides()
{
    cout << sides[0] << ", "
        << sides[1] << ", "
        << sides[2];
}

void Triangle::getAngles()
{
    cout << angles[0] << ", "
        << angles[1] << ", "
        << angles[2];
}