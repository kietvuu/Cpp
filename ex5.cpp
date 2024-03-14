#include <iostream>

// Function to calculate the result of an operation
void calculate(double value1, double value2, char op, double& result) {
    switch (op) {
        case '+':
            result = value1 + value2;
            break;
        case '-':
            result = value1 - value2;
            break;
        case '*':
            result = value1 * value2;
            break;
        case '/':
            if (value2 == 0) {
                std::cerr << "Error: division by zero" << std::endl;
                result = 0;
            } else {
                result = value1 / value2;
            }
            break;
        default:
            std::cerr << "Error: unknown operator " << op << std::endl;
            result = 0;
    }
}

int main() {
    double value1, value2, result;
    char op;

    // Prompt user for input
    std::cout << "Enter the first value: ";
    std::cin >> value1;
    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter the second value: ";
    std::cin >> value2;

    // Calculate result using function
    calculate(value1, value2, op, result);

    // Print result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
