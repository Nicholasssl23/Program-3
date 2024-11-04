#include "Word.h"

Word::Word(std::string word) : m_word(word) {
    // Initialize m_currentWord with underscores
    m_currentWord.resize(m_word.size(), '_');
}

std::string Word::getWord() const {
    return std::string(m_currentWord.begin(), m_currentWord.end());
}

void Word::addLetter(char letter) {
    for (size_t i = 0; i < m_word.size(); ++i) {
        if (m_word[i] == letter) {
            m_currentWord[i] = letter;
        }
    }
}

bool Word::findLetter(char letter) const {
    return m_word.find(letter) != std::string::npos;
}

bool Word::solved() const {
    return getWord() == m_word;
}
