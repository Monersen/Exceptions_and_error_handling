#include <iostream>
#include "exceptions.h"
#include "figure.h"
#include "triangle.h"
#include "right.h"
#include "isosceles.h"
#include "equilateral.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    try {
        Figure fig(1);
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        Triangle tri(10, 20, 30, 40, 60, 80);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        RightTriangle riTri1(10, 20, 30, 30, 60, 90);
        cout << "Создан" << endl;
        RightTriangle riTri2(10, 20, 30, 30, 60, 90);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        IsosTriangle  isosTri(1, 20, 10, 50, 80, 50);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        EquilTriangle equTri(20, 20, 20, 60, 60, 61);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        Quadrilateral qua(10, 20, 30, 40, 50, 60, 70, 80);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        Rectangle rec(10, 20, 10, 20, 80, 100, 90, 90);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    try {
        Square squ(10, 20, 10, 20, 80, 100, 90, 90);
        cout << "Создан" << endl;
    }
    catch (const exception& e) {
        cerr << e.what() << '\n';
    }

    try {
        Parallelogram par(10, 20, 10, 20, 90, 90, 90, 90);
        cout << "Создан" << endl;
    }
    catch (const exception& e) {
        cerr << e.what() << '\n';
    }

    try {
        Rhombus rom(10, 20, 10, 20, 90, 90, 90, 90);
        cout << "Создан" << endl;
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}