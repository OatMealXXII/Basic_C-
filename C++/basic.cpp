#include <iostream>

int basic_calculator()
{
    int type;
    float a, b;
    char operation;
    std::cout << "Enter your type of operation (+, -, *, /) : ";
    std::cin >> operation;
    std::cout << "Enter your first number: ";
    std::cin >> a;
    std::cout << "Enter your second number: ";
    std::cin >> b;

    switch (operation)
    {
    case '+':
        std::cout << "Result is: " << a + b << "\n";
        break;
    case '-':
        std::cout << "Result is: " << a - b << "\n";
        break;
    case '*':
        std::cout << "Result is: " << a * b << "\n";
        break;
    case '/':
        std::cout << "Result is: " << a / b << "\n";
        break;
    default:
        std::cout << "You can only use   + - * /   for operation only!\n";
        break;
    }

    return 0;
}