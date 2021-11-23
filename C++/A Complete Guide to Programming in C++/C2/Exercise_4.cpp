/*
Write a C++ program that two defines variables for floating-point numbers and

initializes them with the values
123.456 and 76.543
Then display the sum and the difference of these two numbers on screen.
*/

#include <iostream>

int main()
{
    float x(123.456F), y(76.543F);

    std::cout << "sum:\t\t" << x + y << std::endl
        << "difference:\t"<< x - y << std::endl;

    return 0;
}

/*
SOLUTION

// Defining and initializing variables

#include <iostream>
using namespace std;

int main()
{
    float x = 123.456F,               // or double
    y = 76.543F,
    sum;

    sum = x + y;

    cout << "Total:        "
    << x << " + " << y << " = " << sum << endl;
    
    cout << "Difference:  "
    << x << " — " << y << " = " << (x — y) << endl;

    return 0;
}
*/