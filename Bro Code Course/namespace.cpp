#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using namespace std;
    using std::cout;
    using std::string;
    // using namespace first;

    // std::cout << x << "\n";
    // std::cout << second::x << "\n";

    string name = "Ivaylo";
    cout << name;
    return 0;
}