/*
Task : Check whether the entered number is magic number or not...
*/

#include <iostream>
using namespace std;

int magicNumber(int no)
{
    int sum;
    while (no >= 10) // 22 > 10
    {
        sum = 0;
        while (no > 0) // 22 > 0
        {
            int ld = no % 10; // 2
            sum += ld;        // 2 + 2
            no /= 10;
        }
        no = sum; // 4
    }

    return no;
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