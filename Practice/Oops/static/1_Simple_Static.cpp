#include <iostream>
using namespace std;

// Function to demonstrate static variable in incrementing
void counter()
{
    // 'count' is static → created only once, 
    // and retains its value across multiple calls of counter()
    static int count = 1;  
    cout << "I : Count : " << count << endl;
    count++;   // increment value
}

// Function to demonstrate static variable in decrementing
void decrement()
{
    // Separate static variable 'count' (different memory than counter's count)
    // Initialized only once and retains value across calls
    static int count = 0;  
    cout << "D : Count : " << count << endl;
    count--;   // decrement value
}

int main()
{
    // Call both functions alternately
    counter();   // I : Count : 1
    decrement(); // D : Count : 0
    counter();   // I : Count : 2
    decrement(); // D : Count : -1

    return 0;
}
