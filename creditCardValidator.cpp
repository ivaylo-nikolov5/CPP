#include <iostream>

void printHeader();
bool validateCard(std::string cardNumber);

int main() {
    std::string cardNumber;

    printHeader();
    std::cin >> cardNumber;

    bool isValid = validateCard(cardNumber);
    std::cout << "The condition of the card is: " << (isValid ? "Valid" : "Invalid") << "!";

    return 0;
}

void printHeader() {
    std::cout << "**********************Credit Card Validator**********************\n";
    std::cout << "Enter the number of the credit card: ";

}

bool validateCard(std::string cardNumber) {
    int oddSum = 0;
    int evenSum = 0;
    int size = cardNumber.length();

    for (int i = size - 1; i >= 0; i--) {
        int currentNumber = (size - i) % 2 == 0 ? (int) (cardNumber[i] - 48) * 2 : (int) cardNumber[i] - 48;

        if (currentNumber > 9 && (size - i) % 2 == 0) {
            std::string temp = std::to_string(currentNumber);
            currentNumber = (int) temp[0] + (int) temp[1] - 96;
        }

        

        if ((size - i) % 2 == 0) {
            evenSum += currentNumber;
        } else {
            oddSum += currentNumber;
        }  

        
    }
    
    std::cout << evenSum << "\n";
    std::cout << oddSum << "\n";
    return (oddSum + evenSum) % 10 == 0;
}