#include <iostream>

int main() {
    double gpa = 3.5;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Sandy", "Mr. Krabs", "Squidward", "Plankton"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(int) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(students) << " bytes\n";
    // length of the array
    std::cout << sizeof(students) / sizeof(std::string);


    return 0;
}