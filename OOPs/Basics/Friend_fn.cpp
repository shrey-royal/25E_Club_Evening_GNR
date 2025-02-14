#include<iostream>
using namespace std;

class Friend {
    int data;
public:
    Friend(int d) : data(d) {}
    friend int getData(Friend&);
};

int getData(Friend& obj) {
    return obj.data;
}

int main() {
    Friend frd(78);

    cout << getData(frd) << endl;

    return 0;
}