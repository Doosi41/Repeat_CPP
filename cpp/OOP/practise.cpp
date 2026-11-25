#include <iostream>
#include <string>

using namespace std;

// Practise

class Motorcycle {
    public:
        string brand;
        int engineCC;
        int maxSpeed;

        Motorcycle(string brand, int engineCC, int maxSpeed) {
            this -> brand = brand;
            this -> engineCC = engineCC;
            this -> maxSpeed = maxSpeed;
        };

        void printBr() {
            cout << "brand of moto: " << brand << endl;
        }

        void printCC() {
            cout << "power of moto: " << engineCC << endl;
        }

        void printMaxSpeed() {
            cout << "max speed of moto: " << maxSpeed<< endl;
        }
};


int main() {
    Motorcycle bike("Yamaha R1 2008", 1000, 299);
    bike.printBr();
    bike.printCC();
    bike.printMaxSpeed();

    return 0;
}