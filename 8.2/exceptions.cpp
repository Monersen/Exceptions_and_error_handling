#include "exceptions.h"

using namespace std;

FigureException::FigureException(int err_code)
    : exCode(err_code)
{}

const char* FigureException::what() const noexcept {

    switch (exCode)
    {
    case FigureExitCodes::SIDES_COUNT_NOT_ZERO:
        return "Ошибка!";
        break;
    case FigureExitCodes::ANGLES_SUM_NOT_EQ_360:
        return "Ошибка создания фигуры. Причина: сумма углов не равна 360";
        break;
    case FigureExitCodes::ANGLES_SUM_NOT_EQ_180:
        return "Ошибка создания фигуры. Причина: сумма углов не равна 180";
        break;
    case FigureExitCodes::ALL_ANGLES_NOT_EQ_90:
        return "Ошибка создания фигуры! Причина: все углы должны быть 90";
        break;
    case FigureExitCodes::ALL_SIDES_NOT_EQ:
        return "Ошибка создания фигуры! Причина: все стороны должны быть равны";
        break;
    case FigureExitCodes::ANGLE_C_NOT_90:
        return "Ошибка создания фигуры! Причина: 'C'-угол не равен 90";
        break;
    case FigureExitCodes::ANGLES_A_C_NOT_EQUAL:
        return "Ошибка создания фигуры! Причина: A угол не равен C углу";
        break;
    case FigureExitCodes::ALL_ANGLES_NOT_EQ_60:
        return "Ошибка создания фигуры! Причина: все углы должны быть 60";
        break;
    case FigureExitCodes::SIDES_A_C_NOT_EQUAL:
        return "Ошибка создания фигуры! Причина: сторона A не равна стороне C";
        break;
    case FigureExitCodes::SIDES_B_D_NOT_EQUAL:
        return "Ошибка создания фигуры! Причина: сторона B не равна стороне D";
        break;

    default:
        break;
    }

    return "Неизвестная ошибка";
}