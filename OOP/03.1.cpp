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

        RaceWeekend(string trackName, string Country, int circleCount) {
            track = trackName;
            country = "Unknown";
            circle_count = 0;
        }

};

int main() {
    // TODO: add examples in main. gonna finish, im so tired :(
}