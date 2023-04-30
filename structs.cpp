#include <iostream>

struct student {
    std::string name;
    int gpa;
    bool enrolled = true;
};

int main() {
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.5;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled;

    return 0;
}