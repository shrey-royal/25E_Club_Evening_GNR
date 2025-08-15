// 1) Store and reverse an OTP (One Time Password).

// 1      4
// 2      3
// 3      2
// 4      1

#include <iostream>
using namespace std;

int main()
{
    char otp[4];
    int temp;

    cout << "Enter OTP: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> otp[i];
    }

    for (int i = 0; i < 2; i++)
    {
        temp = otp[3 - i];
        otp[3 - i] = otp[i];
        otp[i] = temp;
    }

    cout << "OTP REV : ";
    for (int i = 0; i < 4; i++)
    {
        cout << otp[i];
    }

    return 0;
}