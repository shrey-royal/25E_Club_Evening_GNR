/*
!Task : Create a class Car with a static member totalCars.
!       Every time a new car object is created, increment totalCars. Display the car name and totalCars.


!Sample Input:
Car c1("BMW");
Car c2("Audi");
Car c3("Tesla");

Car: BMW, Total Cars: 1
Car: Audi, Total Cars: 2
Car: Tesla, Total Cars: 3
*/

#include <iostream>
using namespace std;

class Car
{
    static int totalCars; // sharing same memory throughout all calls and objects

public:
    void AddCar(string Carname)
    {
        totalCars++;
        cout << "Car : " << Carname << ", Total Cars : " << totalCars << endl;
    }
};

int Car ::totalCars = 0;

int main()
{
    Car c1, c2, c3;

    c1.AddCar("BMW");
    c2.AddCar("AUDI");
    c3.AddCar("TESLA");

    return 0;
}