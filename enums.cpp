#include <iostream>
 
enum Day {
    monday = 0,
    tuesday = 1,
    wednesday = 2,
    thursday = 3,
    friday = 4,
    saturday = 5,
    sunday = 6,

};

int main() {
    Day today = sunday;
 
    switch (today) {
        case monday: std::cout << "It is Monday\n"; break;
        case tuesday: std::cout << "It is Tuesday\n"; break;
        case wednesday: std::cout << "It is Wednesday\n"; break;
        case thursday: std::cout << "It is Thursday\n"; break;
        case friday: std::cout << "It is Friday\n"; break;
        case saturday: std::cout << "It is Saturday\n"; break;
        case sunday: std::cout << "It is Sunday\n"; break;
    }

    return 0;
}