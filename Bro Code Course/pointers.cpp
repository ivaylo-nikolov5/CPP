#include <iostream>

int main() {
    
    std::string name = "Ivaylo";
    int age = 17;
    std::string pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pPizzas = pizzas;

    std::cout << *pName << "\n";
    std::cout << *pAge << "\n";
    std::cout << pPizzas << "\n";

    return 0;
}