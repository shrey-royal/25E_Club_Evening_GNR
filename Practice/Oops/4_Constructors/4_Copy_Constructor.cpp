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

    Person()
    {
        aid = 420;
        age  = 12;
        name ="Hetavi Mentos";
    }//default constructor

    Person(int aid, int age, string name)
    {
        this->aid = aid;
        this->age = age;
        this->name = name;

        cout << "Parameterized constructor called...";
    } // parameterized constructor with 3 args 

    Person(int aid , int age)
    {   
        this->aid  = aid;
        this->age =  age;
        name = "Harsh Patel";
    }// parameterized constructor with 2 args 
    Person(Person &obj)
    {
        aid = obj.aid;
        age = obj.age;
        name = obj.name;
    } // copy constructor 

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
    Person p1(9875, 56, "Jr. NTR");
    Person p2(7456, 23, "Rocky");
    Person cp(p2);
    Person Dummy(123456 , 45);
    Person DEFA;

    cout << "\n\nAID\tAge\tName" << endl;
    cout << "---\t---\t----" << endl;
    p1.getPersonData();
    p2.getPersonData();
    cp.getPersonData();
    Dummy.getPersonData();
    DEFA.getPersonData();

    return 0;
}