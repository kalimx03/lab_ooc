#include <iostream>

namespace ironman
{
    int add()
    {
        int a, b;
        std::cout << "Enter your numbers:" << std::endl;
        std::cin >> a >> b;
        std::cout << "addition of two numbers is:" << a + b << std::endl;
        return a + b;
    }

    int sub()
    {
        int a, b;
        std::cout << "Enter your numbers:" << std::endl;
        std::cin >> a >> b;
        std::cout << "subtraction of two numbers is:" << a - b << std::endl;
        return a - b;
    }
}