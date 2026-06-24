#include <iostream>
#include <limits>

int main() {
    std::cout << "Simple C++ Calculator\n";
    std::cout << "Enter an expression like 2 + 3 or 4 * 5.\n";
    std::cout << "Supported operators: + - * /\n\n";

    double left = 0.0;
    double right = 0.0;
    char op = 0;

    std::cout << "Enter first number: ";
    if (!(std::cin >> left)) {
        std::cout << "Invalid number input.\n";
        return 1;
    }

    std::cout << "Enter operator (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    if (!(std::cin >> right)) {
        std::cout << "Invalid number input.\n";
        return 1;
    }

    double result = 0.0;
    bool valid = true;

    switch (op) {
        case '+':
            result = left + right;
            break;
        case '-':
            result = left - right;
            break;
        case '*':
            result = left * right;
            break;
        case '/':
            if (right == 0.0) {
                std::cout << "Error: division by zero.\n";
                return 1;
            }
            result = left / right;
            break;
        default:
            valid = false;
            break;
    }

    if (!valid) {
        std::cout << "Unsupported operator. Use +, -, *, or /.\n";
        return 1;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}