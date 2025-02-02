#include<iostream>
using namespace std;

class Watch {
public:
    string brand;
    string type;
    double price;

    Watch() {
        brand = "HMT Tareeq";
        type = "wrist";
        price = 1500;
    }

    Watch(string brand, string type, double price) {
        this->brand = brand;
        this->type = type;
        this->price = price;
    }

    void getWatchSpecs() {
        cout << "Brand: " << brand << ", Type: " << type << ", Price: " << price << "\\-" << endl;
    }
};

int main() {
    Watch wristWatch("Rolex Oyster Perpeptual", "wrist", 528100);
    wristWatch.getWatchSpecs();

    Watch watch;
    watch.getWatchSpecs();

    return 0;
}

/*
3 types of constructors:
1. default
2. parameterized
3. copy

Task: Make a class ColdDrinks;
    - 3 attrs
    - 1 method
    - 2 constructors (1 default, 1 paramterized)
*/