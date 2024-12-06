**Breaking Down the Work**

1) **Word Bank Initialization**

Responsible for creating a word list.
Example: Add 5-10 predefined words to the bank.

2) **Random Word Picker**

Use rand() to select a word from the bank.

3) **Display Word State**

Show the guessed word with _ for unguessed letters.

4) **Letter Validation**

Check if a guessed letter is already in the guessed letters list.

5) **Process Guess**

Update the guessed word if correct.
Increment wrong guesses if incorrect.

6) **Hangman Display**

Draw the hangman figure based on wrong guesses.

7) **Win/Lose Logic**

Check if the guessed word is complete or if the player has exceeded MAX_WRONG_GUESSES
