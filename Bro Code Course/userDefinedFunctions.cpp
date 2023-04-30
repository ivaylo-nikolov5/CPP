#include <iostream>

void happyBirthday(std::string name, int age);

int main() {

    std::string name = "Ivaylo";
    int age = 18;
    happyBirthday(name, age);
    
    return 0;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << name << "!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "You are " << age << " years old!\n\n";
}