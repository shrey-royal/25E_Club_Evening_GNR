/*
Task : Check whether the number is armstrong or not ..
*/

#include <iostream>
using namespace std;

int Armstrong(int n)
{
    int temp = n, ld, arm = 0;

    while (n > 0)
    {
        ld = n % 10;

        arm += ld * ld * ld;
        n /= 10;
    }
    if (arm == temp)  return 1;
    else  return 0;
}

int main()
{
    int no;

    cout << "Enter a number : ";
    cin >> no;

    int result = Armstrong(no);

    if (result)
    {
        cout << no << " is armstrong number.";
    }
    else
    {
        cout << no << " is not armstrong number.";
    }
    return 0;
}