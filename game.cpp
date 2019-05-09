#include "game.hpp"
#include "overview.hpp"
#include "helpers.hpp"

namespace Las {
Game::Game(int _years, int _serfs, int _land, int _grain) :
    years(_years), serfs(_serfs), land(_land), grain(_grain) {

    while (true) {

        Las::Overview::displayOptions(currentYear, serfs, land, grain);
        int option = Las::Overview::selectOption();

        if (option == Las::Overview::END_TURN) {
            throw NotImplemented();
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
} // namespace Las
