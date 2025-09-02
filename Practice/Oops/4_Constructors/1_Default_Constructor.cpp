// task : Default Constructor

#include <iostream>
using namespace std;

class Animal
{
    static int i;

public:
    Animal()
    {
        cout << "Animal Class Called ..... Default Constructor" << endl;
    }

    void showAnimal()
    {
        cout << "Animal " << ++i << " called...." << endl;
    }
};

int Animal ::i = 0;
int main()
{
    cout << endl
         << endl;
    Animal a, b, c;

    a.showAnimal();
    b.showAnimal();
    c.showAnimal();

    cout << endl
         << endl;
    return 0;
}