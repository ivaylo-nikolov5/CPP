#include <iostream>

int main() {
    int grade;

    std::cout << "Enter grade (0 - 100): ";
    std::cin >> grade;

    std::cout << (grade >= 60 ? "You pass!" : "You fail!");

    return 0;
}