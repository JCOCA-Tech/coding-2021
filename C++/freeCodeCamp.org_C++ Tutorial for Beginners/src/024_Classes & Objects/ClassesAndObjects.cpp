#include <iostream>

/* Simple C++ program that uses classes and objects to represent realworld entities */

using namespace std;

class Book // A class is a custom datatype template or blueprint
{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1; // An object is an instance of a class
    book1.title = "Harry Potter"; // The objects public attributes can be directly modified
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 700;

    cout << "Title:\t" << book1.title << endl; // Prints the title of the first book object

    cout << "Title:\t" << book2.title << endl; // Prints the title of the second book object

    return 0;
}