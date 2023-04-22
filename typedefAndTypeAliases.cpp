#include <iostream>;
#include <vector>;

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {
    text_t name = "Ivaylo";
    number_t age = 17;
    std::cout << name << "\n";
    std::cout << age;
    
    return 0;
}