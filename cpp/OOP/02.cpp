#include <iostream>
#include <string>

using namespace std;

// Practice: function overloading — one name, different input parameters.

void showResult(string name) {
    cout << "Name of pilot: " << name << endl;
}

void showResult(string name, int position) {
    cout << "Position: " << position;
}

void showResult(string name, int position, int points) {
    cout << "Count of pilots: " << points<< endl;
}

int main() {
    showResult("Max");
    showResult("Max", 1);
    showResult("Max", 1, 25);
}
