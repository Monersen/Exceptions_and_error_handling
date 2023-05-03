#include "exceptions.h"

using namespace std;

FigureException::FigureException(int err_code)
    : exCode(err_code)
{}

const char* FigureException::what() const noexcept {

    switch (exCode)
    {
    case FigureExitCodes::SIDES_COUNT_NOT_ZERO:
        return "������!";
        break;
    case FigureExitCodes::ANGLES_SUM_NOT_EQ_360:
        return "������ �������� ������. �������: ����� ����� �� ����� 360";
        break;
    case FigureExitCodes::ANGLES_SUM_NOT_EQ_180:
        return "������ �������� ������. �������: ����� ����� �� ����� 180";
        break;
    case FigureExitCodes::ALL_ANGLES_NOT_EQ_90:
        return "������ �������� ������! �������: ��� ���� ������ ���� 90";
        break;
    case FigureExitCodes::ALL_SIDES_NOT_EQ:
        return "������ �������� ������! �������: ��� ������� ������ ���� �����";
        break;
    case FigureExitCodes::ANGLE_C_NOT_90:
        return "������ �������� ������! �������: 'C'-���� �� ����� 90";
        break;
    case FigureExitCodes::ANGLES_A_C_NOT_EQUAL:
        return "������ �������� ������! �������: A ���� �� ����� C ����";
        break;
    case FigureExitCodes::ALL_ANGLES_NOT_EQ_60:
        return "������ �������� ������! �������: ��� ���� ������ ���� 60";
        break;
    case FigureExitCodes::SIDES_A_C_NOT_EQUAL:
        return "������ �������� ������! �������: ������� A �� ����� ������� C";
        break;
    case FigureExitCodes::SIDES_B_D_NOT_EQUAL:
        return "������ �������� ������! �������: ������� B �� ����� ������� D";
        break;

    default:
        break;
    }

    return "����������� ������";
}