#include <iostream>

int main() {
    int age = 17;

    if (age >= 18) {
        std::cout << "You are an adult!";
    } else if (age <= 0 ) {
        std::cout << "You haven't been born yet!";
    } else if (age > 122) {
        std::cout << "You have already died!";
    } else {
        std::cout << "You are not an adult!";
    }
    return 0;
}