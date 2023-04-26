#include <iostream>

std::string* getQuestions();
std::string** getAnswers();

int main() {
    std::string questions[] = {"1. What year was C++ created?",
                               "2. Who invented C++?",
                               "3. What is the predecessor of C++?",
                               "4. Is the Earth flat?"};

    std::string answers[][4] = {{"a) 1994", "b) 1980", "c) 1983", "d) 1970"},
                                {"a) Guido van Rossum", "b) Bjarne Stroustrup", "c) Dennis Ritchie", "d) James Gosling"},
                                {"a) C", "b) C#", "c) Java", "d) Python"},
                                {"a) Yes", "b) No"}};

    int questionsSize = sizeof(questions) / sizeof(questions[0]);

    std::cout << "***************** C++ Quiz *****************\n";
    std::cout << "Answer only with the letter of the option you chose!\n";

    for (int i = 0; i < questionsSize; i++) {
        int answerSize = sizeof(answers[i]) / sizeof(answers[i][0]);
        char answer;
        std::cout << questions[i] << "\n";
        for (int j = 0; j < answerSize && !answers[i][j].empty(); j++) {
            std::cout << answers[i][j] << "\n";
        }
        std::cout << "Enter your answer!: ";
        std::cin >> answer;
        answer = tolower(answer); 
        std::cin.clear();
        fflush(stdin);

        if (i == 0 && answer == 'c' ||
            i == 1 && answer == 'b' ||
            i == 2 && answer == 'a' ||
            i == 3 && answer == 'b') {
            std::cout << "Correct answer!\n";
            continue;
        }

        std::cout << "Incorrect answer!\n"; 
    } 

    std::cout << "********************************************\n";

    return 0;
}
