#include <iostream>

void printInfo(const std::string name, const int age);

int main() {
    std::string name = "Ivaylo";
    int age = 17;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age) {
    std::cout << "Hello, " << name << ". You are " << age << " years old!";
}