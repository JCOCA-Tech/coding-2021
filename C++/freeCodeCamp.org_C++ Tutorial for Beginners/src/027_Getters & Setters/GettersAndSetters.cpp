#include <iostream>

/* Simple C++ program that uses getters and setters to control access to object attributes */

using namespace std;

class Movie
{
    private:
        string rating;
    
    public:
        string title;
        string director;

        Movie(string argTitle, string argDirector, string argRating)
        {
            cout << "[DEBUG]: creating object [\"" << argTitle << "\", \"" << argDirector << "\", \"" << argRating << "\"]..." << endl;
            title = argTitle;
            director = argDirector;
            setRating(argRating);
            cout << "[DEBUG]: Object created [\"" << title << "\", \"" << director << "\", \"" << rating << "]" << endl;
            cout << "[DEBUG]: Done" << endl; 
        }

        void setRating(string paramRating)
        {
            if(paramRating == "G" || paramRating == "PG" || paramRating == "PG-13" || paramRating == "R" || paramRating == "NR")
            {
                rating = paramRating;
                cout << "[DEBUG]: Rating set to default value \"" << paramRating << "\"" << endl;
            } else {
                rating = "NR";
                cout << "[ERROR]: Value \"" << paramRating << "\" is not a valid rating. Rating was instead set to default value \"NR\"" << endl;
            }
        }

        string getRating()
        {
            return rating;
        }
};

int main()
{
    //TODO set movie directors and ratings
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    Movie oblivion("Oblivion", "Joseph Kosinski", "PG-13");
    Movie interstellar("Interstellar", "Christopher Nolan", "PG-13");
    Movie transcendence("Transcendence", "Wally Pfister", "PG-13");

    Movie Movies[] = {avengers, oblivion, interstellar, transcendence};


    for(int i = 0; i < size(Movies); i++)
    {
        cout << endl << "Title:\t\t" << Movies[i].title << endl;
        cout << "Director:\t" << Movies[i].director << endl;
        cout << "Rating:\t\t" << Movies[i].getRating() << endl;
    }

    return 0;
}