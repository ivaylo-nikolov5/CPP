#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string bestPlayer;
    int bestGoals = 0;
    std::string player;
    int goals;
    
    while (true) {
        std::getline(std::cin, player);

        if (player == "END") {
            break;
        }

        std::cin >> goals;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (bestGoals < goals) {
            bestPlayer = player;
            bestGoals = goals;
        }

        if (goals >= 10) {
            break;
        }
    }

    std::cout << bestPlayer << " is the best player!\n";
    if (bestGoals >= 3) {
        std::cout << "He has scored " << bestGoals << " goals and made a hat-trick !!!";
    } else {
        std::cout << "He has scored " << bestGoals << " goals.";
    }


    return 0;
}
