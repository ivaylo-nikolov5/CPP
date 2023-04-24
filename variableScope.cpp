#include <iostream>

void printNum();

// ::(x) using global variable if there is same var in the block of code

int myNum = 1;

int main() {
    int myNum = 2;

    printNum();
    std::cout << ::myNum;
    return 0;
} 

void printNum() {
    int myNum = 3;
    std::cout << ::myNum << "\n";
}