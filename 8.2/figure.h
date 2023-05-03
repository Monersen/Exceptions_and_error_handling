#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>

class Figure
{
public:
    Figure(int _sides_count);
    int getSidesCount();
    string getName();
    virtual void printInfo();

protected:
    int sides_count;
    string name;
    Figure(int _sides_count, string _name);

};

#endif