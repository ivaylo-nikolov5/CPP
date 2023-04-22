#include <iostream>

int main() {

    int x; // declaration
    x = 5; // assignment

    int y = 9; // declaration and assignment
    int sum = x + y;

    // std::cout << x << "\n";
    // std::cout << y << "\n";
    // std::cout << sum << "\n";

    int age = 18;
    int year = 2023;
    int days = 7.5;

    // std::cout << days << "\n";

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // std::cout << price << "\n";
    // std::cout << gpa << "\n";
    // std::cout << temperature << "\n";

    // char (single character)

    char grade = 'A';
    char initial = 'B';

    // std::cout << grade << "\n";
    // std::cout << initial << "\n";

    // boolean (either true or false)

    bool isAdult = true;
    bool changed = false;

    // std::cout << isAdult << "\n";
    // std::cout << changed << "\n";

    // string (object that represents a sequence of text)
    std::string name = "Ivaylo";
    std::string day  = "Friday";
    std::string food = "Dönner";
    
    // std::cout << name << "\n"; 
    // std::cout << day << "\n"; 
    // std::cout << food << "\n"; 
    
    std::cout << "Hello, " << name << ". Your favorite day is " 
    << day << " and you like eating " << food << ".\n";

    return 0;   
}