#include <iostream>

using namespace std;

int main()
{
    /* Get a number from the console */
    /*
    double age;

    cout << "Enter your age:\t";
    cin >> age;
    cout << "You are " << age << " years old" << endl<<endl;
    */

    /* Get a line of text from the console */
    string name; // buffer

    cout << "Enter your name:\t";
    getline(cin, name); // function that stores the input stream into the buffer

    cout << endl << "Hello " << name << endl;

    return 0;
}