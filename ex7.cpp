#include <iostream>

class Calculator {
public:
    Calculator(double v1, double v2, char op) : value1_{v1}, value2_{v2}, op_{op} {}

    void performCalculation() {
        switch(op_) {
            case '+':
                result_ = value1_ + value2_;
                break;
            case '-':
                result_ = value1_ - value2_;
                break;
            case '*':
                result_ = value1_ * value2_;
                break;
            case '/':
                if (value2_ != 0) {
                    result_ = value1_ / value2_;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: Invalid operator!" << std::endl;
                break;
        }
    }

    double getResult() const { return result_; }

private:
    double value1_;
    double value2_;
    char op_;
    double result_;
};

int main() {
    double value1, value2;
    char op;

    std::cout << "Enter first value: ";
    std::cin >> value1;

    std::cout << "Enter operator (+,-,*,/): ";
    std::cin >> op;

    std::cout << "Enter second value: ";
    std::cin >> value2;

    Calculator calculator{value1, value2, op};
    calculator.performCalculation();

    std::cout << "Result: " << calculator.getResult() << std::endl;

    return 0;
}
