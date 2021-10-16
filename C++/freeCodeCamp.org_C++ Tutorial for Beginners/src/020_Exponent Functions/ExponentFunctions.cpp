#include <iostream>

/* Simple C++ program that uses a selfdefined exponent function */

using namespace std;

int power(int, int);

int main()
{
    cout << power(2, 3) << endl;
    
    return 0;
}

int power(int baseNumber, int powerNumber)
{
    int result = 1;
    for(int i = 0; i < powerNumber; i++)
    {
        result = result * baseNumber;
    }

    return result;
}