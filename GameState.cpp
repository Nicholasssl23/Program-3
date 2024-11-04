#include "GameState.h"

GameState::GameState() {}

std::string GameState::getState() const {
    std::string state;
    for (const std::string& part : m_state) {
        state += part + " ";
    }
    return state;
}

void GameState::addState() {
    if (m_nextState < m_allStates.size()) {
        m_state.push_back(m_allStates[m_nextState]);
        ++m_nextState;
    }
}

bool GameState::gameOver() const {
    return m_nextState == m_allStates.size();
}
