#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.length() << "\n";
    // checks of string is empty
    std::cout << name.empty() << "\n";
    
    // clears the string 
    // name.clear();
    // std::cout << name;

    // appends another string to the original string
    // std::cout << name.append("@gmail.com");

    // returns the value on this index
    // std::cout << name.at(2);

    // inserts value on a given index in a string
    // std::cout << name.insert(0, "@");

    // finds the character index in a string
    // std::cout << name.find("N");

    // erases every character from the start index to the end index
    std::cout << name.erase(1, 4);

    return 0;
}