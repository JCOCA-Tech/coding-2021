#include <iostream>
#include <cmath> // import C++ math functions

/* Simple C++ program that uses numbers and binary operators */

using namespace std;

int main()
{
    /* Operators */
    cout << "Add constants:\t\t4 + 4 = " << 4+4 << endl; // Addition
    cout << "Subtract constants:\t4 - 4 = " << 4-4 << endl; // Subtraction
    cout << "Multiply constants:\t4 * 4 = " << 4*4 << endl; // Multiplication
    cout << "Divide constants:\t4 / 4 = " << 4/4 << endl; // Division
    cout << "Mod constants:\t\t4 % 4 = " << 4%4 << endl << endl; // Modulo

    int wholeNumber = 5;
    double decimalNumber = 5.5;

    /* Increment integer variables*/
    cout << "Increment the integer " << wholeNumber << ":\t\t";
    wholeNumber++; // Increment
    cout << wholeNumber << endl;
    cout << "Negatively increment the integer " << wholeNumber << ":\t";
    wholeNumber--; // Negative increment
    cout << wholeNumber << endl << endl;

    /* Increment decimal variables*/
    cout << "Increment the decimal " << decimalNumber << ":\t\t";
    decimalNumber++; // Increment
    cout << decimalNumber << endl;
    cout << "Negatively increment the decimal " << decimalNumber << ":\t";
    decimalNumber--; // Negative increment
    cout << decimalNumber << endl << endl;

    /* Variable operators on integers */
    wholeNumber+=4; // Addition
    cout << "Integer variable addition: \t\t" << wholeNumber << " + 4 = " << wholeNumber << endl;
    wholeNumber-=4; // Subtraction
    cout << "Integer variable subtraction: \t\t" << wholeNumber << " - 4 = " << wholeNumber << endl;
    wholeNumber*=4; // Multiplication
    cout << "Integer variable multiplication: \t" << wholeNumber << " * 4 = " << wholeNumber << endl;
    wholeNumber/=4; // Division
    cout << "Integer variable division: \t\t" << wholeNumber << " / 4 = " << wholeNumber << endl;
    wholeNumber%=4; // Modulo
    cout << "Integer variable modulo: \t\t" << wholeNumber << " % 4 = " << wholeNumber << endl << endl;

    /* Variable operators on decimal numbers */
    decimalNumber+=4; // Addition
    cout << "Decimal variable addition: \t\t" << decimalNumber << " + 4 = " << decimalNumber << endl;
    decimalNumber-=4; // Subtraction
    cout << "Decimal Variable subtraction: \t\t" << decimalNumber << " - 4 = " << decimalNumber << endl;
    decimalNumber*=4; // Multiplication
    cout << "Decimal Variable multiplication: \t" << decimalNumber << " * 4 = " << decimalNumber << endl;
    decimalNumber/=4; // Division
    cout << "Decimal Variable division: \t\t" << decimalNumber << " / 4 = " << decimalNumber << endl << endl;

    cout << "pow(2,2):\t" << pow(2,2) << endl; // Raise x to the power of y
    cout << "sqrt(36):\t" << sqrt(36) << endl; // Square root of x
    cout << "round(4.6):\t" << round(4.6) << endl; // Round x
    cout << "ceil(4.1):\t" << ceil(4.1) << endl; // Round everything up 
    cout << "floor(4.6):\t" << floor(4.6) << endl; // Round everything down
    cout << "fmax(3,10):\t" << fmax(3,10) << endl; // Determine if x or y is larger and return the larger number
    cout << "fmin(3,10):\t" << fmax(3,10) << endl; // Determine if x or y is smaller and return the smaller number

    return 0;
}