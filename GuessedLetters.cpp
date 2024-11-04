#include "GuessedLetters.h"

GuessedLetters::GuessedLetters() {}

std::string GuessedLetters::getLetters() const {
    return std::string(m_guessed.begin(), m_guessed.end());
}

void GuessedLetters::addLetter(char letter) {
    m_guessed.push_back(letter);
}
