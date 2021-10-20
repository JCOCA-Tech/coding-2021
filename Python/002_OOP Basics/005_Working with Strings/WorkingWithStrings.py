# This showcases multiple string functions that come in handy and prints out the return values
phrase = "Giraffe Academy";

phraseLength = len(phrase);
print("Phrase Length: ", phraseLength)

phraseCharacter = phrase[0];
print("Phrase Character: ", phraseCharacter)

phraseIndex = phrase.find("Academy", 0);
print("Phrase Index: ",phraseIndex)

phraseSub = phrase[3:8];
print("Phrase Phrase Substring: ", phraseSub)
