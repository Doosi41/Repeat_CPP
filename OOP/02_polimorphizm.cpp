#include <iostream>

using namespace std;

class Animal {
    public:
        virtual void makeSound() {
            cout << "Animal sound"<< endl;
        }
};

class Dog : public Animal {
    public:
        void makeSound() {
            cout << "Woof!" << endl;
        }
};

class Cat : public Animal {
    public:
        void makeSound() {
            cout << "Myau!" << endl;
        }
};

void sound(Animal& a) {
    a.makeSound();
}

int main() {
    Cat c;
    Dog d;
    sound(c);
    sound(d);
}
