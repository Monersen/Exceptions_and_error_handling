#include "figure.h"
#include "exceptions.h"

using namespace std;

Figure::Figure(int _sides_count = 0)
    : Figure(_sides_count, "Фигура")
{
    if (_sides_count != 0)
        throw FigureException(FigureExitCodes::SIDES_COUNT_NOT_ZERO);
}

Figure::Figure(int _sides_count, string _name)
    : sides_count(_sides_count)
    , name(_name)
{
    printInfo();
}

int Figure::getSidesCount() {
    return sides_count;
}

string Figure::getName() {
    return name;
}

void Figure::printInfo() {
    cout << name << " ";
}