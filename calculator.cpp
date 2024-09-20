#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Welcome to the Simple Calculator!" << std::endl;

    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Input the operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            break;
    }

    return 0;
}
