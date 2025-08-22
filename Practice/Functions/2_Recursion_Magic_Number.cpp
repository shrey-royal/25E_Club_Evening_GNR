/*
Task : Check whether the entered number is magic number or not...
*/

#include <iostream>
using namespace std;

int magicNumber(int no)
{
    if (no < 10)
    {
        cout << "NUmber : " << no << endl;
        return no;
    } // back condition

    int sum = 0;
    while (no > 0) // 22 > 0
    {
        int ld = no % 10; // 2
        sum += ld;        // 2 + 2
        no /= 10;
    }
    no = sum;

    return magicNumber(no);
}
int main()
{
    int no;
    int sum;

    cout << "Enter a number : ";
    cin >> no; // 4567

    int res = magicNumber(no);

    if (res == 1)
    {
        cout << "magic ..";
    }
    else
    {
        cout << "not magic ..";
    }
    return 0;
}