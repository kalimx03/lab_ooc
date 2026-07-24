#include <iostream>

namespace ironman
{
    int add();
    int sub();
    int mul();
    int div();
}

int main()
{
    int ch;
    std::cout << "Enter choice (1=add 2=sub 3=mul 4=div 5=exit): ";
    std::cin >> ch;

    switch (ch)
    {
        case 1:
            std::cout << "addition of two numbers is " << ironman::add() << std::endl;
            break;
        case 2:
            std::cout << "subtraction of two numbers is " << ironman::sub() << std::endl;
            break;
        case 3:
            std::cout << "multiplication of two numbers is " << ironman::mul() << std::endl;
            break;
        case 4:
            std::cout << "division of two numbers is " << ironman::div() << std::endl;
            break;
        case 5:
            std::cout << "exit" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}