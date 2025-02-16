#include<iostream>
using namespace std;

class Father {
public:
    void giveMoney() {
        cout << "Father is giving money to use." << endl;
    }
};

class Mother {
public:
    void teachManners() {
        cout << "Mother is teaching manners." << endl;
    }
};

class Child : public Father, public Mother {
public:
    void useMoney() {
        cout << "Using the money that father gave me!" << endl;
    }

    void beingStubborn() {
        cout << "Not learning how to behave after getting beaten by mummyji!" << endl;
    }
};

int main() {
    Child krish;

    krish.beingStubborn();
    krish.teachManners();
    
    krish.giveMoney();
    krish.useMoney();

    return 0;
} 