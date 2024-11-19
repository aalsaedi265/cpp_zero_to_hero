
#include <iostream>
#include <math.h>

int main() {

    char op;
    double num1, num2, result;

    std::cout << "**************Calculator**************" << '\n';

    std::cout << "Enter either +, -, *, or /: " << '\n';
    std::cin >> op;

    std::cout << "enter #1: ";
    std::cin >> num1;

    std::cout << "enter #2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "Invalid operator" << '\n';
            return 0;
    }

    std::cout << "**********************";


    return 0;
};