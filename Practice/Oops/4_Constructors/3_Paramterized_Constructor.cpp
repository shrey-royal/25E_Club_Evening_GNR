#include <iostream>
using namespace std;

// paramterized constructor

// it has arguments  / parameters
// are from user

class Person
{
    int aid, age;
    string name;

public:
    Person(int aid, int age, string name)
    {
        this->aid = aid;
        this->age = age;
        this->name = name;

        cout << "Parameterized constructor called...";
    }

    void getPersonData()
    {
        cout << aid << "\t" << age << "\t" << name << endl;
    }
    // void updateData()
    // {

    // }
};

int main()
{
    // user defined .....
    Person p(1342, 46, "Kalin Bhaiya");
    Person p1(1569, 35, "Hrithik Roshan");
    Person p2(4201, 52, "Nawazuddin Sidiquee");
    Person p3(4569, 56, "Vin Diesel");
    Person p4(786, 36, "Akshay Kumar");
    Person p5(9875, 56, "Jr. NTR");
    Person p6(7456, 23, "Rocky");

    cout << "\n\nAID\tAge\tName" << endl;
    cout << "---\t---\t----" << endl;
    p.getPersonData();
    p1.getPersonData();
    p2.getPersonData();
    p3.getPersonData();
    p4.getPersonData();
    p5.getPersonData();
    p6.getPersonData();
    return 0;
}