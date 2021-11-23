// To use strings.

#include <iostream>    // Declaration of cin, cout
#include <string>      // Declaration of class string
using namespace std;

int main()
{
    // Defines four strings:
    string prompt("What is your name:  "),
        name,                   // An empty
        line( 40, '-'),         // string with 40 '-'
        total = "Hello ";       // is possible!

    cout << prompt;         // Request for input.
    getline( cin, name);    // Inputs a name in one line

    total = total + name;   // Concatenates and
                            // assigns strings.

    cout << line << endl      // Outputs line and name
        << total << endl;
    cout << " Your name is "  // Outputs length
        << name.length() << " characters long!" << endl;
    cout << line << endl;

    return 0;
}