#include <iostream>
#include <array>
#include <string>
int main()
{
    std::string myString[]{"Reza", "Reyhaneh", "roz", "eli"};
    for (std::string &x : myString)
    {
        std::cout << x << '\n';
    }
    for (std::string &name : myString)
    {
        name += 'a';
        std::cout << name << '\n';
    }
}