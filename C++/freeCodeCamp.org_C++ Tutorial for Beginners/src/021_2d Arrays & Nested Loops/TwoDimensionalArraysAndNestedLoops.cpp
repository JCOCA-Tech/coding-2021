#include <iostream>

/* Simple C++ program that uses twodimensional arrays an nested for loops */

using namespace std;

int main()
{
    int numberGrid[3][2] = { // This is a two dimensional matrix
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < 3; i++) // This loop iterates over the elements in the first array
    {
        for(int j = 0; j < 2; j++) // This nested loop iterates over the elements in the second array
        {
            cout << numberGrid[i][j] << "\t";
        }
        cout << endl << endl;
    }

    return 0; 
}