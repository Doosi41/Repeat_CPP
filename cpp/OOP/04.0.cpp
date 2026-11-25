#include <iostream>
#include <string>

using namespace std;

// Inheritance

class Driver{
    public:
        string name;

        Driver (string n) {
            name = n;
        }

        void printName() {
            cout << name << endl;
        }
};

class QualifyingResult : public Driver {
    int position;

    public:
        QualifyingResult (string n, int p) : Driver(n), position(p){
    }
};


int main() {
    QualifyingResult Driver("Lando Norris", 1);
    Driver.printName();

    return 0;
}
