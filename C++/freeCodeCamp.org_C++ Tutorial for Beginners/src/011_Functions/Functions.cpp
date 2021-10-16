#include <iostream>

/* Simple C++ program that uses functions */

using namespace std;

/* This way he function has to be defined before the main function */
/*
void myFunction(string name,int age) // This is our own function that greets the user. It has a void return type (does not return anything). It takes a name and an age parameter of types string and int
{
    cout << "Hello " << name << " you are " << age << endl; // the parsed string and int parameters get printed
}
*/

void myFunction(string,int); // Function stub that sets the functions signature. This stub declares the function, that way the function can be defined after being called

int main()
{
    myFunction("John", 50); // This calls our function with the name parameter
    myFunction("Bill", 37);
    myFunction("Mike", 30);

    return 0;
}

void myFunction(string name,int age) // This is the same function but it can be defined at a later point because we used a function stub
{
    cout << "Hello " << name << " you are " << age << endl;
}