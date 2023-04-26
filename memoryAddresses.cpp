#include <iostream>

int main() {
    std::string name = "Ivaylo";
    int age = 17;
    int student = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";
    
    return 0;
}