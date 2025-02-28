#include<iostream>
using namespace std;

class Calculator {
public:
    void add(int a, int b) {
        cout << a << " + " << b << " = " << a+b << endl;
    }

    void add(int a, int b, int c) {
        cout << a << " + " << b << " + " << c << " = " << a+b+c << endl;
    }

    void add(int a, float b) {
        cout << a << " + " << b << " = " << a+b << endl;
    }

    void add(float a, float b) {
        cout << a << " + " << b << " = " << a+b << endl;
    }
};

int main() {
    Calculator c;

    c.add(2, 3);
    c.add(2, 3, 4);
    c.add(2, 3.22f);
    c.add(2.3f, 2.0f);

    return 0;
}

/*
Method Overloading: In a class, when we have methods with same name and same return type but with either different number of parameters or different sequence of parameter, we can say that these methods are getting overloaded.
*/