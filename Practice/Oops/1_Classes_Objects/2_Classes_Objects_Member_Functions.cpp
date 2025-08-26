#include <iostream>
using namespace std;

class Person
{
    // data members -- properties
    // default : private ,  accessible within class only
    string name;
    int age;
    float height, weight;

public:
// private:  this will not allow to access in main function leading to no results..
    // member functions -- methods -- behaviour
    void setData(string n, int a, float h, float w)
    {
        name = n;
        age = a;
        height = h;
        weight = w;
    }

    void getData()
    {
        cout << name << "\t" << age << "\t  " << height << "\t" << weight << endl;
    }
};

int main()
{
    // Creating object of Person class
    Person p, p1, p2;    

    p.setData("Prachi", 18, 1.6, 89);
    p1.setData("Niya", 20, 1.75, 35);
    p2.setData("Hetavi", 21, 1.42, 56);
    cout << "Name\tAge\tHeight\tWeight\n";
    p.getData();
    p1.getData();
    p2.getData();

    // Person::age;   // -- non static member should be affilliated with any objects

    return 0;
}