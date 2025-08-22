/*
Task : Write a function that accepts a number and returns true if it's both palindrome and prime.
*/

#include <iostream>
using namespace std;

int prime(int n)
{
    int i, count = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int palindrome(int n)
{
    int temp = n, ld, rev = 0;

    while (n > 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }
    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int primePalindrome(int n)
{
    int pr = prime(n);//wrwa
    int pa = palindrome(n);//wrwa

    if (pr == 1 && pa == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int no;

    cout << "Enter a number : ";
    cin >> no;

    int res = primePalindrome(no);// wrwa

    if (res == 1)
    {
        cout << "Number is prime and palindrome..";
    }
    else
    {
        cout << "Number is not prime or palindrome..";
    }
    return 0;
}