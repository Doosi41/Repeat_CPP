#include <iostream>
using namespace std;

class Box {
    private:
        double length;   // Length of a box
        double breadth;  // Breadth of a box
        double height;   // Height of a box

    public:
        void setSize(double len, double bre, double hei) {
            length = len;
            breadth = bre;
            height = hei;
        }

        void getVolume() {
            cout << "Volume of Box: " << length * breadth * height << endl;
        }
};

int main() {
    Box box;
    box.setSize(5.0, 6.0, 7.0);
    box.getVolume();
    return 0;
}
