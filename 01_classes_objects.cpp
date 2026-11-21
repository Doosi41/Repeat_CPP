#include <iostream>
using namespace std;

// ============================================================
// TOPIC 1: Classes and Objects
// ============================================================
// A CLASS is a "plan" (blueprint). It describes a thing.
// A class has:
//   - fields  = data (what the thing HAS)
//   - methods = actions (what the thing DOES)
//
// An OBJECT is a REAL thing made from the class (the plan).
// One class -> many objects.

class Dog {
public:
    // FIELDS (data) - what a Dog HAS
    string name;
    int age;

    // METHOD (action) - what a Dog DOES
    void bark() {
        cout << name << " says: Woof! Woof!" << endl;
    }
};

int main() {
    // We make an object from the class Dog.
    Dog myDog;   // myDog is an OBJECT. Dog is the CLASS.

    // We set the fields.
    myDog.name = "Rex";
    myDog.age = 3;

    // We use the fields and the method.
    cout << "My dog is " << myDog.name << endl;
    cout << "Age: " << myDog.age << endl;
    myDog.bark();

    // We can make a second object from the same class.
    Dog otherDog;
    otherDog.name = "Luna";
    otherDog.age = 1;
    otherDog.bark();

    return 0;
}
