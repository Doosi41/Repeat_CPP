#include <iostream>
#include <string>

using namespace std;

// Practice: constructors and destructors control an object's lifetime.

class F1Car {
    private:
        string driver;
        string team;
    public:
        F1Car(string driverName, string teamName) {
            driver = driverName;
            team = teamName;

            cout << "F1 car is ready: " << endl;
        }
        
        ~F1Car() {
            cout << "F1 car leaves the garage: " << endl;
        }

        void showInfo() {
            cout << driver << endl << team;
        }

};

int main() {
    string driverName;
    string teamName;

    cout << "Driver name: ";
    getline(cin, driverName);

    cout << "Team name: ";
    getline(cin, teamName);

    F1Car car(driverName, teamName);
    car.showInfo();
}