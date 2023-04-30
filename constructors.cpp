#include <iostream>

class Student {
    public: 
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa) {
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};

int main() {

    Student student1("Spongebob", 21, 3.5);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    return 0;
}