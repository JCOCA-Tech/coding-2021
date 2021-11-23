/*
Write a C++ program to generate the screen output shown on the below

        I
                "RUSH"
                        \TO\
                AND
        /FRO/

*/

#include <iostream>

int main()
{
        std::cout << "\n\n\t I"
        "\n\n\t\t \"RUSH\""
                "\n\n\t\t\t \\TO\\"
                "\n\n\t\t AND"
                "\n\n\t /FRO/" << std::endl;

        return 0;        
}

/*
SOLUTION

// Usage of escape sequences

#include <iostream>
using namespace std;

int main()
{
        cout << "\n\n\t I"              // Instead of tabs
                "\n\n\t\t \"RUSH\""         // you can send the
                "\n\n\t\t\t \\TO\\"         // suited number
                "\n\n\t\t AND"              // of blanks to
                "\n\n\t /FRO/" << endl;     // the output.

        return 0;
}
*/