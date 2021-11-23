/*
// A program containing errors!
# include <iostream>, <string>
# include <stdlib>
# void srand( seed);

int main()
{
    string message "\nLearn from your mistakes!";
    cout << message << endl;
    int len = length( message);
    cout << "Length of the string: " << len << endl;
    // And a random number in addition:
    int a, b;

    a = srand(12.5);
    b = rand( a );
    cout << "\nRandom number: " << b << endl;
    return 0;
}
*/

#include <iostream>
#include <string>
#include <cstdlib>
//#include <stdlib.h>

int main()
{
    std::string message = "\nLearn from your mistakes!";

    std::cout << message << std::endl;
    
    int len = message.length();
    
    std::cout << "Length of the string: " << len << std::endl;

    // And a random number in addition:
    int b;
    
    srand(12.5);

    b = rand();

    std::cout << "\nRandom number: " << b << std::endl;

    return 0;
}

/*
SOLUTION

// The corrected program:
#include <iostream>     // Just one header file in a line
#include <string>
#include <cstdlib>      // Prototypes of functions
                        // void srand( unsigned int seed);
                        // int rand(void);
                        // or:
// #include <stdlib.h>
using namespace std;    // Introduces all names of namespace
                        // std into the global scope.

int main()
{
    string message = "\nLearn from your mistakes!";...// =

    cout << message << endl;
    
    int len = message.length();

    // instead of: length(message);
    cout << "Length of the string: " << len << endl;

    // And another random number:
    int b;                  // Variable a is not needed.
    srand(12);              // instead of:  a = srand(12.5);

    b = rand();             // instead of:  b = rand(a);

    cout << "\nRandom number: " << b << endl;
    return 0;
}
*/