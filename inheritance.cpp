#include <iostream>

class Animal {
    public: 
        bool alive = true; 

    void eat() {
        std::cout << "This animal is eating...\n";
    }
};

class Dog : public Animal {
    public: 

    void bark() {
        std::cout << "This dog is barking...\n";
    }
};

class Cat : public Animal {
    public: 

    void meow() {
        std::cout << "This cat is meowing...\n";
    }
};

int main() {

    Dog dog;
    Cat cat;

    std::cout << dog.alive << "\n";
    dog.eat();
    dog.bark();

    cat.meow();


    return 0;
}