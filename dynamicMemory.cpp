#include <iostream>

int main() {
    int *pNum = NULL;

    pNum = new int;

    *pNum = 17;

    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    delete pNum;

    std::cout << pNum;
    return 0;
}