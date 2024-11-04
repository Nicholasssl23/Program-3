#include <iostream>
#include "Word.h"
#include "GuessedLetters.h"
#include "GameState.h"

int main() {
    std::string word;
    std::cout << "Enter the word to guess: ";
    std::cin >> word;

    Word gameWord(word);
    GuessedLetters guessedLetters;
    GameState gameState;

    char guess;
    while (!gameWord.solved() && !gameState.gameOver()) {
        std::cout << "\nCurrent word: " << gameWord.getWord() << std::endl;
        std::cout << "Guessed letters: " << guessedLetters.getLetters() << std::endl;
        std::cout << "Current state: " << gameState.getState() << std::endl;

        std::cout << "Enter a letter: ";
        std::cin >> guess;

        if (guessedLetters.getLetters().find(guess) != std::string::npos) {
            std::cout << "You already guessed that letter. Try again.\n";
            continue;
        }

        guessedLetters.addLetter(guess);

        if (gameWord.findLetter(guess)) {
            gameWord.addLetter(guess);
            std::cout << "Good guess!\n";
        } else {
            gameState.addState();
            std::cout << "Wrong guess!\n";
        }
    }

    if (gameWord.solved()) {
        std::cout << "Congratulations! You guessed the word: " << gameWord.getWord() << std::endl;
    } else {
        std::cout << "Game over! The word was: " << word << std::endl;
    }

    return 0;
}
