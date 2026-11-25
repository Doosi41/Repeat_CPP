#include <iostream>
#include <string>

using namespace std;

// Inheritance

class Race{
    public:
        string track;
        int laps;

    Race (string t, int l) {
        track = t;
        laps = l;
    }
};


int main() {
    Race race("Interlagos", 24);
    cout << race.track << endl << race.laps;

    return 0;
}