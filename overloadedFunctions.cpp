#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping1, std::string topping2);

int main() {

    bakePizza("pepperoni", "mushrooms");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping) {
    std::cout << "Here is your pizza with " << topping << "!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "!\n";
}