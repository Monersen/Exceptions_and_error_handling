#include "isosceles.h"

using namespace std;

IsosTriangle::IsosTriangle(int a, int b, int c, int A, int B, int C)
    : Triangle(a, b, c, A, B, C, "Равнобедренный треугольник")
{
    if (a != c)
        throw FigureException(FigureExitCodes::SIDES_A_C_NOT_EQUAL);

    if (A != C)
        throw FigureException(FigureExitCodes::ANGLES_A_C_NOT_EQUAL);
}