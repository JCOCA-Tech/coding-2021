#include <iostream>

using namespace std;

int main()
{
    int index = 1;

    /*
    while(index <= 5) // Executes code only if condition is met
    {
        cout << index << endl;
        index++;
    }
    */

    do // Executes code before checking the condition
    {
        cout << index << endl;
        index++;
    } while (index <= 5); // Check condition

    return 0;
}