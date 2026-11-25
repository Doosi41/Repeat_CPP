#include <iostream>
#include <string>

using namespace std;

// Practise

class Motorcycle {
    public:
        string brand;
        int engineCC;

        Motorcycle(string brand, int engineCC) {
            this->brand = brand;
            this->engineCC = engineCC;
        };

        void printBr() {
            cout << "The brand of moto: " << brand << endl;
        }

        void printCC() {
            cout << "The power of moto: " << engineCC << endl;
        }
};


int main() {
    Motorcycle bike("Yamaha R1 2008", 1000);
    bike.printBr();
    bike.printCC();

    return 0;
}