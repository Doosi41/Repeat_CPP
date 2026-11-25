#include <iostream>
#include <string>

using namespace std;

// Инкапсуляция: данные скрыты, а доступ к ним идёт через публичные методы.
class F1Car {
    private:
        string name;
        float fuel = 0;

    public:
        void setName() {
            cout << "Whats name of piolot? " << endl;
            cin >> name;
        }

        void setFuel() {
            cout << "Enter fuel: " << endl;
            cin >> fuel;
            if (fuel < 0 || fuel > 100) {
                cout << "Fuel must be between 0 and 100" << endl;
                fuel = 0;
            }
        }

        void print() {
            cout << "Name of pilot: " << name << endl
            << "Fuel left: " << fuel;
        }
};

int main() {
    F1Car f1;

    f1.setName();
    f1.setFuel();
    f1.print();

    return 0;
}
