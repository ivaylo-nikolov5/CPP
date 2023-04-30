#include <iostream>

void swapVariables(std::string &x, std::string &y);

int main() {
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swapVariables(x, y);

    std::cout << x << "\n";
    std::cout << y;

    return 0;
}

void swapVariables(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}