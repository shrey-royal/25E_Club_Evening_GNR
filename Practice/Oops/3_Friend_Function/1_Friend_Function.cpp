#include <iostream>
using namespace std;

class Vehicle
{
    void Name()
    {
        cout << "Vehicle Class ---- Name Method Called..\n";
    }
    friend void getDetailsfromClass();
};

class Bike
{
    void BikeName(string name)
    {
        cout << "Bike : " << name << " has arrived...\n";
    }

    friend void getBikeDetails(Bike &b);
};

void getDetailsfromClass()
{
    Vehicle v;
    v.Name();
}
void getBikeDetails(Bike &b)
{
    b.BikeName("Kawasaki Ninja H2R");
}

int main()
{
    getDetailsfromClass();
    
    Bike b;
    getBikeDetails(b);
    return 0;
}