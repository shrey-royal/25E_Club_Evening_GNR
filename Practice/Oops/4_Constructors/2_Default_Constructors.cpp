#include <iostream>
using namespace std;

class Bank
{
    int AcNo;
    double balance;
    string name;

public:
    Bank()
    {
        AcNo = 123;
        balance = 25000;
        name = "Harsh Patel";
        cout << "Default Constructor Called.." << endl
             << endl;
    }

    void getData()
    {
        cout << "AcNo : " << AcNo << endl;
        cout << "Balance : " << balance << endl;
        cout << "Name : " << name << endl
             << endl;
    }
};

int main()
{
    Bank b ,b1 ,b2;
    b.getData();
    b1.getData();
    b2.getData();

    return 0;
}