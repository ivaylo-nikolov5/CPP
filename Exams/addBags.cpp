#include <iostream>
#include <iomanip>

int main() {
    double priceOverTwentyKilos;
    double bagsWeight;
    int daysToTrip;
    int bagsCount;
    double price;

    std::cin >> priceOverTwentyKilos >> bagsWeight >> daysToTrip >> bagsCount; 

    if (bagsWeight > 20) {
        price = priceOverTwentyKilos;
    } else if (bagsWeight >= 10) {
        price = priceOverTwentyKilos * 0.5;
    } else {
        price = priceOverTwentyKilos * 0.2;
    }

    if (daysToTrip > 30) {
        price += price * 0.1;
    } else if (daysToTrip >= 7) {
        price += price * 0.15;
    } else {
        price += price * 0.4;
    }

    price *= bagsCount;

    std::cout << "The total price of bags is: " << std::fixed << std::setprecision(2) << price << " lv.";
    

    return 0;
}