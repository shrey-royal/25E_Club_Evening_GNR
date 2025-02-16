#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }

    void sleep() {
        cout << "Animal is sleeping." << endl;
    }
};

class Dog : public Animal {
public:   
    void bark() {
        cout << "Woof! Woof!" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping." << endl;
    }
}; 

int main() {
    Puppy pup;

    pup.weep();
    pup.bark();
    pup.sleep();
    pup.eat();

    return 0;
}