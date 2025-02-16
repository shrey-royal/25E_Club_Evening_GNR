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

class Cat : public Animal {
public:
    void meow() {
        cout << "Meow! Meow!" << endl;
    }
}; 

int main() {
    Cat c;
    Dog d;

    c.eat();
    c.meow();
    c.sleep();
    cout << endl;
    d.eat();
    d.bark();
    d.sleep();

    return 0;
}