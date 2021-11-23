/*
Create a program to calculate the square roots of the numbers

    4   12.25   0.0121

and output them as shown opposite.Then read a number from the keyboard and
output the square root of this number.
To calculate the square root, use the function sqrt(), which is defined by the
following prototype in the math.h (or cmath ) header file:

    double sqrt( double x);

The return value of the sqrt() function is the square root of x.
*/

#include <iostream>
#include <cmath>

int main()
{
    double number1(4),number2(12.25),number3(0.0121);

    std::cout << "Number 1:\t" << sqrt(number1) << std::endl
        << "Number 2:\t" << sqrt(number2) << std::endl
        << "Number 3:\t" << sqrt(number3) << std::endl;

    return 0;
}

/*
SOLUTION

// Compute square roots

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1 = 4.0, x2 = 12.25, x3 = 0.0121;
    cout << "\n   Number  \t Square Root" << endl;
    cout << "\n    " << x1 << "   \t " << sqrt(x1)
    << "\n   "  << x2 << "   \t " << sqrt(x2)
    << "\n    " << x3 << "   \t " << sqrt(x3) << endl;
    cout << "\nType a number whose square root is to be"
    " computed. ";
    cin  >> x1;
    cout << "\n   Number  \t Square Root" << endl;
    cout << "\n   " << x1 << "  \t " << sqrt(x1) << endl;
    return 0;
}
*/