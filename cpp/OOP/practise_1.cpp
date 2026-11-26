#include <iostream>
#include <string>

using namespace std;

// Practise

class Motorcycle {
    public:
        string brand;
        int engineCC;

    Motorcycle(string brand, int engineCC) {
        this -> brand = brand;
        this -> engineCC = engineCC;
    };
};

void upgradeEngine(Motorcycle& bike) {
    bike.engineCC += 100;
};

int main() {
    Motorcycle bike("Yamaha R1 2008", 1000);
    upgradeEngine(bike);

    return 0;
}