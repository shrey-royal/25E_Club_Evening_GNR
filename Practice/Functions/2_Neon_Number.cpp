    /*
    Task : Neon Number
    → Square of the number, sum of digits of square = original number.
    Example: 9² = 81 → 8+1=9
    */

    #include <iostream>
    using namespace std;

    int square(int n)
    {
        return n * n;
    }

    void neonNumber(int n)
    {
        int ld, sum;
        int ans = square(n);
        sum = 0;
        while (ans >= 10)
        {
            while (ans > 0)
            {
                ld = ans % 10;
                sum += ld;
                ans /= 10;
            }
            ans = sum;
        }

        if (ans == n)
        {
            cout << n << " is neon number.";
        }
        else
        {
            cout << n << " is not neon number.";
        }
    }

    int main()
    {
        int no;

        cout << "Enter a number : ";
        cin >> no;

        neonNumber(no);
        return 0;
    }

    