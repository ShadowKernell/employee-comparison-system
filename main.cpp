#include <iostream>
#include <string>
#include "Function.h"
struct Employee
{
    std::string name{};
    int id{};
    int age{};
    double Salary{};
};

void printEmployee(const Employee &employe)
{
    std::cout << "======Employee Comparision======" << "\n";
    std::cout << "Name is :" << employe.name << "\n";
    std::cout << "id is :" << employe.id << "\n";
    std::cout << "Age is :" << employe.age << "\n";
    std::cout << "Salary is :" << employe.Salary << "\n";
}

int main()
{

    Employee User1{};
    std::cout << "Enter your Name :" << "\n";
    std::getline(std::cin >> std::ws, User1.name);
    std::cout << "Enter your id :" << "\n";
    std::cin >> User1.id;
    std::cout << "Enter your Age :" << "\n";
    std::cin >> User1.age;
    std::cout << "Enter your Salary :" << "\n";
    std::cin >> User1.Salary;
    Employee User2{};
    std::cout << "Enter your Name :" << "\n";
    std::getline(std::cin >> std::ws, User2.name);
    std::cout << "Enter your id :" << "\n";
    std::cin >> User2.id;
    std::cout << "Enter your Age :" << "\n";
    std::cin >> User2.age;
    std::cout << "Enter your Salary :" << "\n";
    std::cin >> User2.Salary;
    MyFunction();
    int x;
    std::cin >> x;
    switch (x)
    {
    case 1:
        printEmployee(User1);
        printEmployee(User2);
        break;
    case 2:
        avgSalary(User1.Salary, User2.Salary);
        break;
    case 3:
        higherSalary(User1.Salary, User2.Salary);
        break;
    case 4:
        SalariDifference(User1.Salary, User2.Salary);
        break;
    case 5:
        olderEmployee(User1.age, User2.age);
        break;
    case 6:
        std::cout << "Good Luck!" << "\n";
        std::exit(0);
        break;
    default:
        std::cout << "Eror!";
        break;
    }
    return 0;
}