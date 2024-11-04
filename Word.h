#ifndef WORD_H
#define WORD_H

#include <string>
#include <vector>

class Word {
private:
    std::vector<char> m_currentWord;
    std::string m_word;

public:
    Word(std::string word);
    std::string getWord() const;
    void addLetter(char letter);
    bool findLetter(char letter) const;
    bool solved() const;
};

#endif
