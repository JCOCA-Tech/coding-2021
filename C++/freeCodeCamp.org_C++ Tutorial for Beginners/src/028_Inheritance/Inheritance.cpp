#include <iostream>

/* Simple C++ program that uses inheritance */

using namespace std;

class Chef // Chef is a superclass
{
    public:
        void makeChicken()
        {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes bbc ribs" << endl;
        }
};

class ItalianChef : public Chef // inherit the Chef class. ItalianChef is a subclass of the Chef class
{
    public:
        void makePasta()
        {
            cout << "The italian chef makes pasta" << endl;
        }
        void makeSpecialDish() // Overrides the superclasses makeSpecialDish() function
        {
            cout << "The italian chef makes chicken parm" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeChicken();

    chef.makeSpecialDish();
    italianChef.makeSpecialDish();

    return 0;
}