#include <iostream>
#include <ctime>

void showMoves();
void checkWinner(char computerChoice, char choice);

int main() {
    srand(time(0));
    char choice;

    while (tolower(choice) != 'e') {
        int randNum = rand() % 3 + 1;
        char computerChoice;

        showMoves();
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);

        choice = tolower(choice);

        if (choice == 'e' || (choice != 'r' && choice != 'p' && choice != choice != 's')) {
            break;
        }

        switch (randNum) {
            case 1: computerChoice = 'r'; break;
            case 2: computerChoice = 'p'; break;
            case 3: computerChoice = 's'; break;
            default: computerChoice = 'r'; break; 
        }

        checkWinner(computerChoice, choice);
    }
    
    return 0;
}

void showMoves() {
    std::cout << "************* Rock, Paper, Scissors Game *************\n";
    std::cout << "Choose between: \n";
    std::cout << "r - ROCK\n";
    std::cout << "p - PAPER\n";
    std::cout << "s - SCISSORS\n";
    std::cout << "e - EXIT GAME\n";
    std::cout << "******************************************************\n";
}

void checkWinner(char computerChoice, char choice) {
    std::string result;

    if (computerChoice == 'r' && choice == 'r' ||
        computerChoice == 'p' && choice == 'p' || 
        computerChoice == 's' && choice == 's') {
        result = "Draw!" + std::string(1, toupper(computerChoice)) + " VS " + std::string(1, toupper(choice)) + "\n";
    } else if (computerChoice == 'r' && choice == 's' ||
               computerChoice == 'p' && choice == 'r' || 
               computerChoice == 's' && choice == 'p') {
        result = "Computer wins!" + std::string(1, toupper(computerChoice)) + "(computer) VS " + std::string(1, toupper(choice)) + "(player)\n";
    } else {
       result = "Player wins!" + std::string(1, toupper(choice)) + "(player) VS " + std::string(1, toupper(computerChoice)) + "(computer)\n";
    }

    std::cout << result;
}