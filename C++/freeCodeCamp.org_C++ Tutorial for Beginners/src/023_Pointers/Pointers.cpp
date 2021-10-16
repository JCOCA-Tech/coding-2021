#include <iostream>

/* Simple C++ program that uses pointers */

using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    //cout << &age << endl; // This prints the memory address of a variable to the console (print the pointer)
    cout << "Age:\t" << &age << endl;
    cout << "GPA:\t" << &gpa << endl;
    cout << "Name:\t" << &name << endl << endl;

    int *pAge = &age; // Pointer variable that can store a pointer. The pointer needs the same datatype
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "Pointer:\t" << pAge << endl; // This prints the value of the pointer
    cout << "Dereferenced:\t" << *pAge << endl << endl; // This prints the value of the dereferenced pointer (value stored at pointer address)

    cout << "Dereferenced:\t" << *&age << endl; // Dereferencing used to return the value stored at a memory address
    cout << "Pointer:\t" << &*&age << endl; // These symbols can be chained together


    return 0;
}