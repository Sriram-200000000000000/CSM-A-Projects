#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WRONG_GUESSES 6

// Function prototypes
void initializeWordBank(char words[][20], int *wordCount);
char* pickRandomWord(char words[][20], int wordCount);
void displayWordState(char guessedWord[], int wordLength);
int isLetterAlreadyGuessed(char guessedLetters[], char letter, int guessCount);
int processGuess(char word[], char guessedWord[], char guessedLetters[], char guess, int *wrongGuesses, int *guessCount);
void displayHangman(int wrongGuesses);
int isGameWon(char guessedWord[], int wordLength);

int main() {
    // TODO: Initialize word bank and pick a random word
    
    // TODO: Set up guessedWord array and guessedLetters array
    
    // TODO: Implement the game loop
    // - Display the hangman figure
    // - Show the current word state
    // - Take input from the user
    // - Process the guess
    // - Check for win or lose conditions

    return 0;
}

// Function to initialize the word bank
void initializeWordBank(char words[][20], int *wordCount) {
    // TODO: Add some predefined words to the word bank
}

// Function to pick a random word from the word bank
char* pickRandomWord(char words[][20], int wordCount) {
    // TODO: Use rand() to pick a random word
    return NULL; // Placeholder
}

// Function to display the current state of the word
void displayWordState(char guessedWord[], int wordLength) {
    // TODO: Print the current guessed word with underscores for unguessed letters
}

// Function to check if a letter was already guessed
int isLetterAlreadyGuessed(char guessedLetters[], char letter, int guessCount) {
    // TODO: Check if the guessed letter is already in the guessedLetters array
    return 0; // Placeholder
}

// Function to process a player's guess
int processGuess(char word[], char guessedWord[], char guessedLetters[], char guess, int *wrongGuesses, int *guessCount) {
    // TODO: Update guessedWord if the guess is correct, otherwise increment wrongGuesses
    return 0; // Placeholder
}

// Function to display the hangman figure
void displayHangman(int wrongGuesses) {
    // TODO: Display hangman based on the number of wrong guesses
}

// Function to check if the game is won
int isGameWon(char guessedWord[], int wordLength) {
    // TODO: Check if all letters in guessedWord have been revealed
    return 0; // Placeholder
}
