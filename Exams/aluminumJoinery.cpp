#include <iostream>
#include <iomanip>

int main() {
    int windowsCount;
    std::string windowsKind;
    std::string receivingWay;
    double price;

    std::cin >> windowsCount >> windowsKind >> receivingWay;

    if (windowsCount < 10) {
        std::cout << "Invalid order";
        return 0;
    }

    if (windowsKind == "90X130") {
        price = 110 * windowsCount;
        if (windowsCount > 60) {
            price -= 0.08 * price;
        } else if (windowsCount > 30) {
            price -= price * 0.05;
        }
    } else if (windowsKind == "100X150") {
        price = 140 * windowsCount;
        if (windowsCount > 80) {
            price -= 0.1 * price;
        } else if (windowsCount > 40) {
            price -= price * 0.06;
        }
    } else if (windowsKind == "130X180") {
        price = 190 * windowsCount;
        if (windowsCount > 50) {
            price -= 0.12 * price;
        } else if (windowsCount > 20) {
            price -= price * 0.07;
        }
    } else if (windowsKind == "200X300") {
        price = 250 * windowsCount;
        if (windowsCount > 50) {
            price -= 0.14 * price;
        } else if (windowsCount > 25) {
            price -= price * 0.09;
        }
    }
    
    if (receivingWay == "With") {
        price += 60;
    }

    if (windowsCount > 99) {
        price -= price * 0.04;
    }

    

    std::cout << std::fixed << std::setprecision(2) << price << " BGN";

    return 0;
}