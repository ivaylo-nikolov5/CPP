#include <iostream>

int main() {
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout <<  "Enter a food you like or 'q' to quit #" << i << ": ";
        std::getline(std::cin, temp);

        if (temp == "q") {
            break;
        }

        foods[i] = temp;
    }

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << "\n";
    }

    return 0;
}