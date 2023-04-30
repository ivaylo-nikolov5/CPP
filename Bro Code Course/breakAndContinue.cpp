#include <iostream>

int main() {
    for (int i = 1; i <= 20; i++) {
        std::cout << i << "\n";
        if (i == 15) {
            break;
        }
        
    }

    std::cout << "######################################";
    
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }

        std::cout << i << "\n";
    }

    return 0;
}