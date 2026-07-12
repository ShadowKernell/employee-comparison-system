
#include <iostream>
#include <string>
#include "Function.h"
#include <array>
#include "Employee.h"


void printEmployee(const std::array <Employee , 2>& pe)
{
    for(  const Employee x : pe){
    std::cout << "======Employee Comparision======" << "\n";
    std::cout << "Name is :" << x.name << "\n";
    std::cout << "id is :" << x.id << "\n";
    std::cout << "Age is :" << x.age << "\n";
    std::cout << "Salary is :" << x.salary << "\n";
    }
}

int main()
{
     std::array <Employee , 2> employees{};
     for( Employee& i : employees){
         std::cout << "Enter your Name :" << "\n";
    std::getline(std::cin >> std::ws, i.name);
    std::cout << "Enter your id :" << "\n";
    std::cin >> i.id;
    std::cout << "Enter your Age :" << "\n";
    std::cin >> i.age;
    std::cout << "Enter your Salary :" << "\n";
    std::cin >> i.salary;
     }
    showMenu();
    int x;
    std::cin >> x;
    switch (x)
    {
    case 1:
        printEmployee(employees);
      
        break;
    case 2:
        avgSalary(employees);
        break;
    case 3:
        higherSalary(employees);
        break;
    case 4:
        SalariDifference(employees);
        break;
    case 5:
        olderEmployee(employees);
        break;
    case 6:
        std::cout << "Good Luck!" << "\n";
        return 0;
        break;
    default:
        std::cout << "Eror!";
        break;
    }
    return 0;

}