#include <iostream>

class Stove {
    private:
        int temperature = 0;

    public: 

    int getTemperature() {
        return temperature;
    }

    void setTemperature(int temperature) {
        if (temperature > 300) {
            std::cout << "You cannot set a temperature bigger than 300 degrees\n";
            return;
        }

        this -> temperature = temperature;
    }
};

int main() {

    Stove stove;

    stove.setTemperature(400);
    
    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}