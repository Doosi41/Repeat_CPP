#include <iostream>
#include <string>

using namespace std;

// Inheritance

class Race{
    public:
        string track;
        int laps;
};

class SprintRace : public Race {
    public:
        int sprintPoints;
};

int main() {
    SprintRace sprint;

    sprint.track = "Monaco";
    sprint.laps = 19;
    sprint.sprintPoints = 8;

    return 0;
}