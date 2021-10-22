guess = 0
secretNumber = 7
guessCount = 0
guessLimit = 3
outOfGuesses = False

while True:
    if(guessCount < guessLimit):
        guess = int(input("Enter guess: "))
        guessCount += 1
    else:
        outOfGuesses = True
        continue

    if(guess != secretNumber):
        print("\nYour Guess was not correct")
        print("Guesses remaining: ", guessLimit - guessCount, "\n")
    
    if(guess != secretNumber and not outOfGuesses):
        continue

    if(outOfGuesses):
        print("Out of guesses. You lose")
        break
    else:
        print("Your guess was correct")
        break