#include <iostream>

int main() {
    char op;
    double a;
    double b;
    double res;

    std::cout << "Please enter an operator: ";
    std::cin >> op;

    std::cout << "Please enter the first number: ";
    std::cin >> a;

    std::cout << "Please enter the second number: ";
    std::cin >> b; 

    switch (op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/':
            if (a == 0 || b == 0) {
                std::cout << "You cannot divide by zero";
                break;
            } 
            res = a / b; 
            break;
        case '%':
            if (a == 0 || b == 0) {
                std::cout << "You cannot divide by zero";
                break;
            } 
            res = (int) a % (int) b; 
            break;
        default: std::cout << "Please enter a valid operator: (+, -, *, /, %)";
    }

    std::cout << res;
    return 0;
}