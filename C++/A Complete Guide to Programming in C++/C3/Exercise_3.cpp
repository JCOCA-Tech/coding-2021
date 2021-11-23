/*
Create a C++ program that defines a string containing the following character sequence:

    I have learned something new again! 

and displays the length of the string on screen.
Read two lines of text from the keyboard. Concatenate the strings using " * "
to separate the two parts of the string. Output the new string on screen.
*/

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    // Define a string
    std::string message( "I have learned something new again!" ),
    prompt("Please input two lines of text:"),
    str1,str2;

    // Display the length of the string on screen
    std::cout << message.length() << std::endl;

    //Read two lines of text from the keyboard

    std::cout << prompt;

    std::getline( std::cin, str1 );
    std::getline( std::cin, str2 );

    // Concatenate the strings using " * " to separate the two parts of the string
    message = str1 + " * " + str2;

    // Output the new string on screen
    std::cout << message << std::endl;

    return 0;
}

/*
SOLUTION

#include <iostream>    // Declaration of cin, cout
#include <string>      // Declaration of class string
using namespace std;

int main()
{
    string message("I have learned something new again!\n"),
    prompt("Please input two lines of text:"),
    str1, str2, sum;

    cout << message << endl;   // Outputs the message

    cout << prompt << endl;    // Request for input
    
    getline( cin, str1);      // Reads the first
    getline( cin, str2);      // and the second line of text

    sum = str1 + " * " + str2;   // Concatenates, assigns

    cout << sum << endl;         // and outputs strings.

    return 0;
}
*/