#include <iostream>

using namespace std;

// Polimorphizm

class Driver{
    public:
        virtual void printRole() {
            cout << "Driver" << endl;
        }
};

class RaceDriver : public Driver {
    void printRole()  {
        cout << "RaceDriver" << endl;
    }
};

class ReserveDriver : public Driver {
    void printRole() {
        cout << "ReserveDriver" << endl;
    }
};

void showRole(Driver& driver) {
    driver.printRole();
}

int main() {
    RaceDriver race;
    showRole(race);

    ReserveDriver reserve;
    showRole(reserve);

    return 0;
}