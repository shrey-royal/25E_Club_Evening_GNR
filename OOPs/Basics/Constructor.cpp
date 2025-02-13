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

    Watch(Watch& obj) {
        this->brand = obj.brand;
        this->type = obj.type;
        this->price = obj.price;
    }

    void getWatchSpecs() {
        cout << "Brand: " << brand << ", Type: " << type << ", Price: " << price << "\\-" << endl;
    }

    ~Watch() {
        cout << "Destructor called!" << endl;
    }
};

void fun() {
    Watch watch;
    watch.getWatchSpecs();
}

int main() {
    // Watch wristWatch("Rolex Oyster Perpeptual", "wrist", 528100);
    // wristWatch.getWatchSpecs();

    // Watch watch;
    // watch.getWatchSpecs();

    // Watch watch1(wristWatch);
    // watch1.getWatchSpecs();

    // string brand, type;
    // double price;

    // cout << "Enter brand: ";
    // getline(cin, brand);
    
    // cout << "Enter type: ";
    // cin >> type;
    
    // cout << "Enter price: ";
    // cin >> price;

    // Watch w(brand, type, price), main_w(w);

    // main_w.getWatchSpecs();

    cout << "Start" << endl;
    fun();
    cout << "End" << endl;

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