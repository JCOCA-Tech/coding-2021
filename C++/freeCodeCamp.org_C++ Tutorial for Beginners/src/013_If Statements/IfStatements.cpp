#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;

    /*
    if(isMale) // Execute the following code if isMale is true
    {
        cout << "You are a male" << endl;
    } else { // Otherwise execute this code
        cout << "You are not male" << endl;
    }
    */

    /*
    if(isMale && isTall) // && is a binary AND operator. Execute this code if isMale and isTall are true
    {
        cout << "You are a tall male" << endl;
    } else { // Otherwise execute this code
        cout << "You are not male" << endl;
    }
    */

    /*
    if(isMale || isTall) // || is a binary OR operator. Execute this code if isMale or isTall or both are true
    {
        cout << "You are a tall or a male" << endl;
    } else { // Otherwise execute this code
        cout << "You are not tall or not male" << endl;
    }
    */

    if(isMale && isTall)
    {
        cout << "You are a tall male" << endl;
    } else if(isMale && !isTall){ // ! is a negation operator
        cout << "You are a short male" << endl;
    } else if(!isMale && isTall){ // ! is a negation operator
        cout << "You are tall but not male" << endl;
    } else {
        cout << "You are not tall and not male" << endl;
    }

    return 0;
}