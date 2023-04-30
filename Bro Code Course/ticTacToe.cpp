#include <iostream>
#include <string>

void printPattern();
void printHeader();
void assignPlayers(char& playerOne, char& playerTwo);
void printBoard(int positions[], char playerOne, char playerTwo);
bool checkAvailablePosition(int positions[], int position);
bool checkWin(int currentPlayerNumber, int positions[]);
std::string fillSquare(int position, char playerOne, char playerTwo);


int main() {
    char playerOne;
    char playerTwo;
    int winner;

    int positions[10] = {0};

    printHeader();
    printPattern();

    assignPlayers(playerOne, playerTwo);

    for (int i = 1; i <= 9; i++) {
        int currentPosition;
        int currentPlayerNumber = (i % 2 == 1) ? 1 : 2;
        char currentPlayerSymbol = currentPlayerNumber == 1 ? playerOne : playerTwo;
        std::string playerTurn = currentPlayerNumber == 1 ? "Player 1" : "Player 2";

        bool available = false;
        while (currentPosition == 0 || available == false) {
            int temp;
            std::cout << playerTurn << ", please pick a free position (from 1 to 9): ";
            std::cin >> temp;
            
            if (temp < 1 || temp > 9) {
                std::cout << "This position is invalid!\n";
                continue;
            }
            currentPosition = temp;

            available = checkAvailablePosition(positions, currentPosition);
        }

        positions[currentPosition - 1] = currentPlayerNumber;
        
        printBoard(positions, playerOne, playerTwo);
        bool result = checkWin(currentPlayerNumber, positions);

        if (result) {
            winner = currentPlayerNumber;
            break;
        }
    }

    std::cout << "*************************** Game Over! ***************************\n";
    std::cout << "Result: " << ((winner == 0) ? "Draw!\n" : "Player " + std::to_string(winner) + " Wins!\n"); 

    return 0;
}

void printHeader() {
    std::cout << "**************************************************************\n";
    std::cout << "*                           TIC TAC TOE                      *\n";
    std::cout << "**************************************************************\n";
}

void printPattern() {
    std::cout << "This is the pattern of the game. Each number represents a cell.\n\n";
    std::cout << "           *******************************************           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *      1      *      2      *      3      *           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *******************************************           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *      4      *      5      *      6      *           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *******************************************           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *      7      *      8      *      9      *           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *******************************************           \n";
}

void assignPlayers(char& playerOne, char& playerTwo) {
    while (playerOne != 'X' && playerOne != 'O') {
        char temp;
        std::cout << "Enter a sign for Player 1 (X or O): ";
        std::cin >> temp;
        temp = toupper(temp);

        if (temp != 'X' && temp != 'O') {
            continue;
        } else {
            playerOne = temp;
            playerTwo = (playerOne == 'X') ? 'O' : 'X';
            break;
        }
    }

    std::cout << "Player 1 picks: " << playerOne << "\n";
    std::cout << "Player 2 picks: " << playerTwo << "\n";
    std::cout << "**************************** START! ****************************\n";
}   

bool checkAvailablePosition(int positions[], int position) {
    return positions[position] == 0;
}

void printBoard(int positions[], char playerOne, char playerTwo) {
    std::cout << "           *******************************************           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *      " 
    << fillSquare(positions[0], playerOne, playerTwo) << "      *      " 
    << fillSquare(positions[1], playerOne, playerTwo) << "      *      " 
    << fillSquare(positions[2], playerOne, playerTwo) << "      *           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *******************************************           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *      " 
    << fillSquare(positions[3], playerOne, playerTwo) << "      *      " 
    << fillSquare(positions[4], playerOne, playerTwo) << "      *      " 
    << fillSquare(positions[5], playerOne, playerTwo) << "      *           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *******************************************           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *      " 
    << fillSquare(positions[6], playerOne, playerTwo) << "      *      " 
    << fillSquare(positions[7], playerOne, playerTwo) << "      *      " 
    << fillSquare(positions[8], playerOne, playerTwo) << "      *           \n";
    std::cout << "           *             *             *             *           \n";
    std::cout << "           *******************************************           \n";

}

std::string fillSquare(int position, char playerOne, char playerTwo) {
    std::string temp;
    if (position == 0) {
        return " ";
    } else if (position == 1) {
        return temp + playerOne;
    } else {
        return temp + playerTwo;
    }

}

bool checkWin(int currentPlayerNumber, int positions[]) {
    const int winConditions[][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };

    for (int i = 0; i < sizeof(winConditions) / sizeof(winConditions[0]); i++) {
        if (positions[winConditions[i][0]] == positions[winConditions[i][1]] &&
            positions[winConditions[i][0]] == positions[winConditions[i][2]] &&
            positions[winConditions[i][0]] != 0) {
                return true;
            }
    }

    return false; 
}