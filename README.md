Breaking Down the Work:

Word Bank Initialization
Responsible for creating a word list.
Example: Add 5-10 predefined words to the bank.

Random Word Picker
Use rand() to select a word from the bank.

Display Word State
Show the guessed word with _ for unguessed letters.

Letter Validation
Check if a guessed letter is already in the guessed letters list.

Process Guess
Update the guessed word if correct.
Increment wrong guesses if incorrect.

Hangman Display
Draw the hangman figure based on wrong guesses.

Win/Lose Logic
Check if the guessed word is complete or if the player has exceeded MAX_WRONG_GUESSES.
