#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
void MyFunction()
{
    std::cout << "======Welcome======" << "\n";
    std::cout << "Choose :" << "\n";
    std::cout << "1.print employee comparision" << '\n';
    std::cout << "2.Avg Salari" << "\n";
    std::cout << "3.Highest Salari" << "\n";
    std::cout << "4.Salary Difference" << "\n";
    std::cout << "5.Older employee" << "\n";
    std::cout << "6.Exit" << "\n";
}
template <typename T>
void avgSalary(const T &x, const T &y)
{
    std::cout << "Avg is :" << (x + y) / 2;
}
template <typename U>
void higherSalary(const U &x, const U &y)
{
    if (x > y)
        std::cout << "Higher Salary is :" << x;
    else
        std::cout << "Higher Salary is :" << y;
}
template <typename Z>
void SalariDifference(const Z &x, const Z &y)
{
    std::cout << "Salary Diference is :" << x - y;
}
template <typename K>

void olderEmployee(const K &x, const K &y)
{
    if (x > y)
        std::cout << "Older Employee is :" << x;
    else
        std::cout << "Older Employee is :" << y;
}
#endif