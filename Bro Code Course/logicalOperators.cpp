#include <iostream>

int main() {
    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30) {
    //     std::cout << "The temperature is good!";
    // } else {
    //     std::cout << "The temperature is bad!";
    // }

    // if (temp <= 0 || temp >= 30) {
    //     std::cout << "The temperature is bad!";
    // } else {
    //     std::cout << "The temperature is good!";
    // }

    std::cout << (!sunny ? "It is cloudy!" : "It is sunny!");

    return 0;
}