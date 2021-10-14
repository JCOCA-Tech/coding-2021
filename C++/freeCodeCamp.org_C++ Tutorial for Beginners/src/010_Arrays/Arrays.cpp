#include <iostream>

/* Simple C++ program that uses arrays */

using namespace std;

int main()
{
    //int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; // Array items are called elements

    int luckyNumbers[20]; // Arrays can also be initialized empty given a size is provided

    luckyNumbers[0] = 100;

    cout << luckyNumbers[0] << endl; // The first element has the index 0

    luckyNumbers[0] = 2; // modifying the value at index 0

    cout << luckyNumbers[0] << endl;

    return 0;
}