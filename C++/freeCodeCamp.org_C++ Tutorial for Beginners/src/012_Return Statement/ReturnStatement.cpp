#include <iostream>

/* Simple C++ program that uses functions with return statements */

using namespace std;

double cube(double);

int main()
{
    /*
    double answer = cube(5.0);
    cout << answer << endl;
    */

    cout << cube(5.0) << endl; // This is valid as well as more compact

    return 0;
}

double cube(double num)
{
    /*
    double result = num * num * num;
    return result;
    */

    return num * num * num; // This is valid as well as more compact. Return tells the compiler that the execution of the functions code is done
    
    cout << "Hello" << endl; // This code will never be executed as the compiler has already stopped the function code execution
}