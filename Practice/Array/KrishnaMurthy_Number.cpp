
#include <iostream>
using namespace std;



int factorial(int no)
{
    int fact = 1;
    for (int i = 1; i <= no; i++)
    {
        fact *= i;
    }
    return fact;
}


void Krishna(int no)
{
    int ld , temp = no;
    int sum = 0;

    while (no > 0)
    {
        ld = no % 10;
        sum += factorial(ld);
        no /= 10;
    }


    if(sum == temp)
    {
        cout  <<"Krishnmurthy number";
    }
}

int main()
{
    int no = 1;

    Krishna(no);
    return 0;
}