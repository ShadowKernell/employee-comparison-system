#ifndef MAIN_H
#define MAIN_H

#include <iostream>

double Add(double x, double y)
{
    return x + y;
}

double Subtract(double x, double y)
{
    return x - y;
}

double Multiply(double x, double y)
{
    return x * y;
}

double Divide(double x, double y)
{
    return x / y;
}

double Maximum_of_2_Numbers(double x, double y)
{
    return (x > y ? x : y);
}

double Maximum_of_3_Numbers(double x, double y, double z)
{
    if (x >= y && x >= z)
        return x;
    else if (y >= x && y >= z)
        return y;
    else
        return z;
}

void Swap_Numbers(double &x, double &y)
{
    double temp = x;
    x = y;
    y = temp;
}

void Exit()
{
    std::cout << "*******Good luck********";
}

#endif
