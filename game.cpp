#include <iostream>

#include "game.hpp"
#include "overview.hpp"
#include "helpers.hpp"

namespace Las {
Game::Game(int _years, int _serfs, int _land, int _grain) :
    years(_years), serfs(_serfs), land(_land), grain(_grain) {

    while (true) {
        Las::Overview::displayInfo(currentYear, serfs, land, grain);
        Las::Overview::displayOptions();
        int option = Las::Overview::selectOption();

        if (option == Las::Overview::END_TURN) {
            if (hasGameFinished()) {
                endGame();
                return;
            }

            endTurn();
        }

        if (option == Las::Overview::BUY_LAND) {
            throw NotImplemented();
        }

        if (option == Las::Overview::SELL_LAND) {
            throw NotImplemented();
        }

        if (option == Las::Overview::BUY_GRAIN) {
            throw NotImplemented();
        }

        if (option == Las::Overview::SELL_GRAIN) {
            throw NotImplemented();
        }

        if (option == Las::Overview::PLANT) {
            throw NotImplemented();
        }

        if (option == Las::Overview::QUIT) {
            throw NotImplemented();
        }

        continue;
    }
}

void Game::endTurn() {
    ++currentYear;
    --years;
}

bool Game::hasGameFinished() {
    if (years <= 1) {
        return true;
    }

    return false;
}

void Game::endGame() {
    std::cout << "Fanfares!" << std::endl;
}
} // namespace Las
