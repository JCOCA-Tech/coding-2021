#include <iostream>

/* Simple C++ program that uses string functions */

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    int phraseLength = phrase.length();
    char phraseCharacter = phrase[0];
    int phraseIndex = phrase.find("Academy", 0);
    string phrasesub = phrase.substr(8,3);

    return 0;
}