/*
Task :How  many numbers are armstrong between 1 and 5000
*/

#include <iostream>
using namespace std;

int Armstrong(int n)
{
    int temp = n, ld, arm = 0, count = 0, mul = 1;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    n = temp;

    while (n > 0)
    {
        ld = n % 10; // 3
        mul = 1;
        for (int i = 1; i <= count; i++)
        {
            mul *= ld; // mul = 1 *3 = 3
                      //  mul = 3 * 3 = 9
        }
        arm += mul;
        n /= 10;
    }
    if (arm == temp)
        return 1;
    else
        return 0;
}

int main()
{
    for (int i = 0; i <= 5000; i++)
    {
        int result = Armstrong(i);

        if (result)
        {
            cout << i << " , ";
        }
    }

    return 0;
}