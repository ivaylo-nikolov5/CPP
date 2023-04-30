#include <iostream>

int multiplyByPrevious(int steps);

int main() {

    int result = multiplyByPrevious(12);
    std::cout << result;

    return 0;
}

int multiplyByPrevious(int num) {
    if (num <= 1) {
        return 1;
    }

    return num * multiplyByPrevious(num - 1);
}