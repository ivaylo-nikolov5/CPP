#include <iostream>

int main() {
    int firstNum;
    int secondNum;

    std::cin >> firstNum >> secondNum;

    int first1, first2, first3, first4;
    int second1, second2, second3, second4;

    first1 = firstNum / 1000, second1 = secondNum / 1000;
    first2 = (firstNum / 100) % 10, second2 =  (secondNum / 100) % 10;
    first3 =  (firstNum / 10) % 10, second3 =  (secondNum / 10) % 10;
    first4 = firstNum % 10, second4 = secondNum % 10;


    for (int i = first1; i <= second1; i++) {
        for (int j = first2; j <= second2; j++) {
            for (int k = first3; k <= second3; k++) {
                for (int l = first4; l <= second4; l++) {
                    if (i % 2 == 0 || j % 2 == 0 || k % 2 == 0 || l % 2 == 0) {
                        continue;
                    }
                    std::cout << i << j << k << l << " ";
                }
            }
        }
    }

    return 0;
}