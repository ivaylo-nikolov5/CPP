#include <iostream>
#include <iomanip>

void displayAtm();
double deposit(double balance, double value); 
double withdraw(double balance, double value);
void checkBalance(double balance);



int main() {
    int option;
    double balance = 0.00;

    while (option != 4) {
        displayAtm();
        std::cout << "Choose an option: ";
        std::cin >> option;
        double value;

        switch (option) {
            case 1:
                std::cout << "Enter the amount you want to deposit: "; 
                std::cin >> value;
                balance = deposit(balance, value);
                break; 
            case 2:
                std::cout << "Enter the amount you want to withdraw: ";
                std::cin >> value;
                balance = withdraw(balance, value); 
                break;
            case 3: 
                checkBalance(balance); 
                break;
            default: break;
        }
    }

    return 0;
}

void displayAtm() {
    std::cout << "****************** ATM ******************\n";
    std::cout << "Options: \n";
    std::cout << "1 - Deposit\n";
    std::cout << "2 - Withdraw\n";
    std::cout << "3 - Check balance\n";
    std::cout << "4 - Exit\n";
    std::cout << "*****************************************\n";

}

double deposit(double balance, double value) {
    balance += value;
    checkBalance(balance);
    return balance;
} 

double withdraw(double balance, double value) {
    if (value > balance) {
        // refers to Mr. Tate 😎
        std::cout << "You don't have enough money in your account, you wagey, peasant, a peon, brokey!\n";
        return 0;
    } 

    balance -= value;
    checkBalance(balance);
    return balance;
}

void checkBalance(double balance) {
    std::cout << "Your current balance is: " << std::setprecision(2) << std::fixed << balance << "$\n";
}
