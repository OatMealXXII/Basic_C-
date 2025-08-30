#include <iostream>

int science_calculator() {
    float a, b;
    int operation;
    const float PI = 3.1415926535897932384626433832795028841971693993751058209749445923078;
    std::cout << "Enter your type of calculator\n" << "1. Area of circle\n" << "2. Area of triangle\n" << "3. Area of rectangle\n" << "4. Area of square\n" << "Enter your select type: ";
    std::cin >> operation;

    switch (operation)
    {
    case 1:
    std::cout << "Enter radius : ";
    std::cin >> a;
    std::cout << "Area of circle is : " << (a*a)*PI << "\n";
        break;

    case 2:
    std::cout << "Enter base : ";
    std::cin >> a;
    std::cout << "\nEnter height : ";
    std::cin >> b;
    std::cout << "Area of triangle is : " << (a*b)/2 << "\n";
    break;

    case 3:
    std::cout << "Enter lenght : ";
    std::cin >> a;
    std::cout << "Enter width : ";
    std::cin >> b;
    std::cout << "Area of rectangle is : " << a*b << "\n";
    break;

    case 4:
    std::cout << "Enter side: ";
    std::cin >> a;
    std::cout << "Area of square is : " << a*a << "\n";
    break;

    default:
    std::cout << "You can only use *** integer *** for operation only!\n";
        break;
    }

    return 0;
}