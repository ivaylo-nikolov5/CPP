#include <iostream>

double getTotal(double prices[], int size);

int main() {
    double prices[] = {49.99, 34.99, 12.99, 34.49};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << total;

    return 0;
}

double getTotal(double prices[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += prices[i];;
    }

    return sum;
}