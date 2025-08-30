#include <iostream>
#include "science.cpp"
#include "basic.cpp"

int main()
{
    int type;

    std::cout << "Enter you type of calculator\n"
              << "1.Basic Calculator\n"
              << "2.Science Calculator\n"
              << "Enter:";
    std::cin >> type;

    switch (type)
    {
    case 1:
    basic_calculator();
    break;
    
    case 2:
    science_calculator();
    }

    return 0;
}