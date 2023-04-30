#include <iostream>

double getSquareArea(double length);
double getCubeVolume(double length);

int main() {
    double length = 6.0;
    double squareArea = getSquareArea(length);
    double cubeArea = getCubeVolume(length);
    std::cout << squareArea << "\n";
    std::cout << cubeArea;

    return 0;
}

double getSquareArea(double length) {
    return length * length;
}

double getCubeVolume(double length) {
    return length * length * length;
}