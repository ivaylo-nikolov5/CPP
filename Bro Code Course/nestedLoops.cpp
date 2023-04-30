#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << j << "\n";
        }
    }

    int i = 1;

    while (i <= 10) {
        int j = 1; 
        i++;
        while (j <= 10) {
            std::cout << j << "\n";
            j++;
        }
    }

    return 0;
}