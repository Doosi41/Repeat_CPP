#include <iostream>
#include <string>

using namespace std;

// Practice: function overloading — one name, different input parameters.

void showResult(string name) {
    string name;

    cout << "Name of pilot: " << name;
    cin >> name;
}

void showResult(string name, int position) {
    int position;

    cout << "Name of pilot: " << name << endl;
    cin >> name;

    cout << "Position: " << position;
    cin >> position;
}

void showResult(string name, int position, int points) {
    int points;

    cout << "Name of pilot: " << name << endl;
    cin >> name;

    cout << "Position: " << position;
    cin >> position;

    cout << "Count of pilots: " << count<< endl;
    cin >> points;
}

int main() {
    showResult("Max");
    showResult("Max", 1);
    showResult("Max", 1, 25);
}
