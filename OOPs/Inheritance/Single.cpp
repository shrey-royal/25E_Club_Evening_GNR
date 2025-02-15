#include<iostream>
#include<iomanip>
using namespace std;

class Car {
public:
    string brand;
    string model;
    string color;
    double price;

    Car(string brand, string model, string color, double price) {
        this->brand = brand;
        this->model = model;
        this->color = color;
        this->price = price;
    }

    void printCarDetails() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << fixed << setprecision(2) << price << endl;
    }
};

class SportsCar : public Car {
public:
    int seats;
    bool isTurboCharged;

    SportsCar(string brand, string model, string color, double price, int seats, bool isTurboCharged) : Car(brand, model, color, price), seats(seats), isTurboCharged(isTurboCharged) {}

    void printSportsCarDetails() {
        printCarDetails();
        cout << "\nSports Fetaures: " << endl;
        cout << "Seats: " << seats << endl;
        cout << "Is engine Turbo Charged? -> " << (isTurboCharged ? "YES" : "NO") << endl;
    }
};

int main() {
    SportsCar car("Hyundai", "Creta Sports", "White", 2500000, 2, true);
    car.printSportsCarDetails();

    return 0;
}