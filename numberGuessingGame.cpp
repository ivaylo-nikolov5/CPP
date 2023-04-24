#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int num = rand() % 10 + 1;
    int currentGuess = 0;
    int attempts = 0;
    std::cout << "Pick a number between 1 and 10!: ";

    while (true) {
        std::cin >> currentGuess;
        attempts++;
        if (currentGuess == num) {
            break;
        }

        std::cout << "You didn't guess! Pick another number between 1 and 10!: ";
    }

    std::cout << "You guessed the number! It took you " << attempts << " attempts";

    return 0;
}