#include <iostream>

int main() {
    char unit;
    double celsius;
    double fahrenheit;

    std::cout << "Enter the unit which you want to convert (C - celsius / F - fahrenheit): ";
    std::cin >> unit;
    
    std::cout << "Enter the degrees value: ";
    std::cin >> (tolower(unit) == 'c' ? celsius : fahrenheit);

    if (unit == 'c') {
        fahrenheit = (celsius * 1.8) + 32;
        std::cout << celsius << " C = " << fahrenheit << " F.";
    } else if (unit == 'f') {
        celsius = (fahrenheit - 32) * (5/9);
        std::cout << fahrenheit << "F = " << celsius << "C.";
    } else {
        std::cout << "Enter a valid unit(C or F)!";
    }

    return 0;
}