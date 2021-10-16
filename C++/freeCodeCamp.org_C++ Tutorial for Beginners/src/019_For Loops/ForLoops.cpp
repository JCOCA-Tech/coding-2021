#include <iostream>

/* Simple C++ program that uses for loops */

using namespace std;

int main()
{
    int index = 1;

    /*
    while(index <= 5)
    {
        cout << index << endl;
        index++;
    }
    */

    /*
    for(int index = 1; index <= 5; index++) // Does the same as the above but is way more compact
    {
        cout << index << endl;
    }
    */

    int nums[] = {1, 2, 5, 7, 3};
    for(int index = 0; index <= 4; index++) // For loops can be used to loop trough the elements of an array
    {
        cout << nums[index] << endl;
    }

    return 0;
}