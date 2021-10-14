#include <iostream>

/* Simple C++ mad libs game (random word story completion) */

using namespace std;

int main()
{
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a noun plural: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are red " << color << endl;
    cout << pluralNoun << " are blue " << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}