#include <iostream>

using namespace std;

int getMax(int, int);
int getMax(int, int, int); // overrides the getMax() function if 3 parameters are parsed

int main()
{
    cout << getMax(2, 5) << endl;
    cout << getMax(2, 5, 3) << endl;

    return 0;
}

int getMax(int num1, int num2) // Compares two numbers and returns the bigger one
{
    int result;

    if(num1 > num2)
    {
        result = num1;
    } else {
        result = num2;
    }
    
    return result;
}

int getMax(int num1, int num2, int num3) // Does the same but with 3 numbers
{
    int result;

    if(num1 >= num2 && num2 >= num3)
    {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    
    return result;
}