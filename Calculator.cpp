#include <iostream>
#include <cmath>

int main()
{
    std::cout << "// ----------------- Calculator ----------------- //" << '\n';

    char opp;
    double num1;
    double num2;
    double result;

    std::cout << "Enter number 1 : ";
    std::cin >> num1;

    std::cout << "Enter number 2 : ";
    std::cin >> num2;

    std::cout << "Enter Opperator : ";
    std::cin >> opp;

    switch (opp)
    {

    case '+':
        result = num1 + num2;
        std::cout << "Result = " << result << '\n';
        break;

    case '-':
        result = num1 - num2;
        std::cout << "Result = " << result << '\n';
        break;

    case '*':
        result = num1 * num2;
        std::cout << "Result = " << result << '\n';
        break;

    case '/':
        result = num1 / num2;
        std::cout << "Result = " << result << '\n';
        break;

    default:
        std::cout << "Enter a valid opperator";
        break;
    }

    std::cout << "// ---------------------------------------------- //";
}
