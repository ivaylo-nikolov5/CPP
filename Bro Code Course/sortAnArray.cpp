#include <iostream>

int main() {
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size - 1; i++) {
        int swaps = 0;

        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps++;
            }
        }

        if (!swaps) {
            break;
        }
    }

    for (int num : array) {
        std::cout << num << " ";
    }

    return 0;
}