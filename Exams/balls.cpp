#include <iostream>
#include <iomanip>

int main() {
    int rows;
    int red = 0;
    int orange = 0;
    int yellow = 0;
    int white = 0;
    int other = 0;
    int divides = 0;
    int totalPoints = 0;

    std::cin >> rows;

    for (int i = 0; i < rows; i++) {
        std::string currentBall;
        std::cin >> currentBall;

        if (currentBall == "red") {
            red++;
            totalPoints += 5;
        } else if (currentBall == "orange") {
            orange++;
            totalPoints += 10;
        } else if (currentBall == "yellow") {
            yellow++;
            totalPoints += 15;
        } else if (currentBall == "white") {
            white++;
            totalPoints += 20;
        } else if (currentBall == "black") {
            totalPoints /= 2;
            divides++;
        } else {
            other++;
        }
    }

    std::cout << "Total points: " << totalPoints << std::endl;
    std::cout << "Red balls: " << red << std::endl;
    std::cout << "Orange balls: " << orange << std::endl;
    std::cout << "Yellow balls: " << yellow << std::endl;
    std::cout << "White balls: " << white << std::endl;
    std::cout << "Other colors picked: " << other << std::endl;
    std::cout << "Divides from black balls: " << divides << std::endl;

    return 0;
}