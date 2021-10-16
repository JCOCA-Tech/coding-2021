#include <iostream>

/* Simple C++ program that uses constructor functions */

using namespace std;

class Book // A class is a custom datatype template or blueprint
{
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages) // constructor using all 3 arguments
        {
            cout << "[DEBUG]: Creating book object [\"" << aTitle << "\", \"" << aAuthor << "\", \"" << aPages <<"\"]..." << endl;
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            cout << "[DEBUG]: Done" << endl;
        }

        Book() // empty constructor
        {
            cout << "[DEBUG]: Creating book object [\"No title\", \"No author\", \"0\"]..." << endl;
            title = "No title";
            author = "No author";
            pages = 0;
            cout << "[DEBUG]: Done" << endl;
        }
};

int main()
{
    /*
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
    */

    
    Book book1("Harry Potter","JK Rowling",500); // Does the same as the above using the classes constructor
    Book book2("Lord of the Rings","Tolkien",700);

    book1.author = "J.K. Rowling"; // Public attributes can still be directly accessed
    
    Book book3; // New book object using the empty constructor


    /*
    This prints all the books attributes
    */

    Book bookshelf[3] = {book1, book2, book3}; // Array with all 3 books

    for(int i = 0; i < 3; i++)
    {
        cout << endl << "Title:\t" << bookshelf[i].title << endl;
        cout << "Author:\t" << bookshelf[i].author << endl;
        cout << "Pages:\t" << bookshelf[i].pages << endl;
    }

    return 0;
}