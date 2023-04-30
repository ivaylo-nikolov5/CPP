#include <iostream>

struct Car {
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

int main() {
    Car car1;
    Car car2;

    car1.model = "BMW";
    car2.model = "Audi";

    car1.year = 2011;
    car2.year = 2008;

    car1.color = "black";
    car2.color = "white";

    std::cout << &car1 << "\n";

    printCar(car1);
    // printCar(car2);

}

void printCar(Car &car) {

    std::cout << &car << "\n";

    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}