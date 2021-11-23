#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int maxrange;

    cout << "Enter max. range integer value: ";
    
    cin  >> maxrange;

    cout << endl;

    for(int i = 0; i < int(maxrange) ; i++)
    {
        srand( i+1 );
        cout << "["<< i+1 << "]:\t" << rand() << endl;
    }

    return 0;
}