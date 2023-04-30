#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    std::cout << "Enter the length of a side: ";
    std::cin >> a;

    std::cout << "Enter the lenght of b side: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) +  pow(b, 2));
    std::cout << "The length of the side c is: " << c;

    return 0;
}