#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <string>
#include <vector>

class GameState {
private:
    std::vector<std::string> m_state;
    std::vector<std::string> m_allStates = {"PLATFORM", "HEAD", "BODY", "LEFT_ARM", "RIGHT_ARM", "LEFT_LEG", "RIGHT_LEG"};
    int m_nextState = 0;

public:
    GameState();
    std::string getState() const;
    void addState();
    bool gameOver() const;
};

#endif
