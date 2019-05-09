#include "game.hpp"
#include "overview.hpp"
#include "helpers.hpp"

namespace Las {
Game::Game() {
    while (true) {
        int year = 10;
        int serfs = 100;
        int land = 1000;
        int grain = 1000;

        Las::Overview::displayOptions(year, serfs, land, grain);
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
