#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <array>
#include <cmath>
#include "Employee.h"

void showMenu()
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
void avgSalary(const std::array<Employee, 2> &employees)
{
    std::cout << "Avg is :" << (employees[0].salary + employees[1].salary) / 2.0;
}

void higherSalary(const std::array<Employee, 2> &employees)
{
    if (employees[0].salary > employees[1].salary)
        std::cout << "Higher Salary is :" << employees[0].salary;
    else
        std::cout << "Higher Salary is :" << employees[1].salary;
}

void SalariDifference(const std::array<Employee, 2> &employees)
{
    std::cout << "Salary Diference is :" << std::abs(employees[0].salary - employees[1].salary);
}

void olderEmployee(const std::array<Employee, 2> &employees)
{
    if (employees[0].age > employees[1].age)
        std::cout << "Older Employee is :" << employees[0].age;
    else
        std::cout << "Older Employee is :" << employees[1].age;
}
#endif