#ifndef GUESSEDLETTERS_H
#define GUESSEDLETTERS_H

#include <vector>
#include <string>

class GuessedLetters {
private:
    std::vector<char> m_guessed;

public:
    GuessedLetters();
    std::string getLetters() const;
    void addLetter(char letter);
};

#endif
