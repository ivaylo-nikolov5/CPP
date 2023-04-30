#include <iostream>

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat() {
            std::cout << "This person is eating...";
        }

        void drink() {
            std::cout << "This human is drinking...";
        }
};

int main() {
    
    Human human1;

    human1.name = "Ivaylo";
    human1.age = 17;
    human1.occupation = "Programmer";

    std::cout << human1.name << "\n";
    std::cout << human1.age << "\n";
    std::cout << human1.occupation << "\n";

    human1.eat();
    human1.drink();

    return 0;
}