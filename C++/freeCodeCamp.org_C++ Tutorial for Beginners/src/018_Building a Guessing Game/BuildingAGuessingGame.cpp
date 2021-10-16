#include <iostream>

/* Simple number guessing game */

using namespace std;

int main()
{
    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    do
    {
        if(guessCount < guessLimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
            break;
        }

        if(guess != secretNumber)
        {
            cout << endl << "Your Guess was not correct" << endl;
            cout << "Guesses remaining: " << (guessLimit - guessCount) << endl << endl;
        }
        
    }while(guess != secretNumber && !outOfGuesses);

    if(outOfGuesses)
    {
        cout << "Out of guesses. You lose" << endl;
    } else {
        cout << endl << "Your guess was correct" << endl;
    }

    return 0;
}