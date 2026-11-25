#include <iostream>
#include <string>

using namespace std;

// Practice: constructor overloading.

class RaceWeekend{
    private:
        string track;
        string country;
        int circle_count;
    public:
        RaceWeekend(string trackName, string Country,int circleCount) {
            track = trackName;
            country = Country;
            circle_count = circleCount;
        }

        RaceWeekend(string trackName) {
            track = trackName;
            country = "Unknown";
            circle_count = 0;
        }

        void showInfo() {
            cout << track << 
            endl << country << 
            endl << circle_count;
        }
};

int main() {
    RaceWeekend race1("Circuit de Spa-Francorchamps", "Belgium", 78);
    RaceWeekend race2("Monaco");

    race1.showInfo();
    race2.showInfo();

    return 0;
}