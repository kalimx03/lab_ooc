#include <iostream>
namespace ironman
{
    int mul()
    {
        int a, b;
        std::cout << "Enter your numbers:" << std::endl;
        std::cin >> a >> b;
        std::cout << "multiplication of two numbers is:" << a * b << std::endl;
        return a * b;
    }

    int div()
    {
        int a, b;
        std::cout << "Enter your numbers:" << std::endl;
        std::cin >> a >> b;
        std::cout << "division of two numbers is:" << a / b << std::endl;
        return a / b;
    }
}

