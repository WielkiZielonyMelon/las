#include <iostream>

#include "game.hpp"
#include "overview.hpp"
#include "helpers.hpp"

using std::cin;
using std::cout;
using std::endl;

namespace Las {
Game::Game(int _years, int _serfs, int _land, int _grain) :
    years(_years), serfs(_serfs), land(_land), grain(_grain) {
    while (true) {
        Las::Overview::displayInfo(currentYear, serfs.serfs, land.size, grain);
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
            buyLand();
            continue;
        }

        if (option == Las::Overview::SELL_LAND) {
            sellLand();
            continue;
        }

        if (option == Las::Overview::BUY_GRAIN) {
            throw NotImplemented();
        }

        if (option == Las::Overview::SELL_GRAIN) {
            throw NotImplemented();
        }

        if (option == Las::Overview::PLANT) {
            plant();
            continue;
        }

        if (option == Las::Overview::QUIT) {
            throw NotImplemented();
        }

        continue;
    }
}

void Game::buyLand() {
    int amount;
    int maxToBuy = grain / LAND_BUY_PRICE;
    while (true) {
        cout << "To buy one square meter of land you need " << LAND_BUY_PRICE;
        cout << " bags of grain." << endl;
        cout << "You have " << grain << " bags of grain." << endl;
        cout << "You have " << land.size << " m^2 of land." << endl;
        cout << "You can buy " << maxToBuy << " m^2 of land." << endl;
        cout << "How much land do you want to buy?" << endl;
        cin >> amount;

        if (amount == 0) {
            return;
        }

        if (amount < 0) {
            cout << "Can't buy negative amount of land" << endl;
            continue;
        }

        if (amount > maxToBuy) {
            cout << "You can't afford to buy that much land" << endl;
            continue;
        }

        break;
    }

    grain -= amount * LAND_BUY_PRICE;
    land.buy(amount);
}

void Game::sellLand() {
    int amount;
    while (true) {
        cout << "For one square meter of land you will get " << LAND_SELL_PRICE;
        cout << " bags of grain." << endl;
        cout << "You have " << grain << " bags of grain." << endl;
        cout << "You have " << land.size << " m^2 of land." << endl;
        cout << "How much land do you want to sell?" << endl;
        cin >> amount;

        if (amount == 0) {
            return;
        }

        if (amount < 0) {
            cout << "Can't sell negative amount of land." << endl;
            continue;
        }

        if (amount > land.size) {
            cout << "You sell more land than you have." << endl;
            continue;
        }

        break;
    }

    grain += amount * LAND_SELL_PRICE;
    land.sell(amount);
}

void Game::plant() {
    int amount;
    int maxToPlant = grain * PLANT_COST_10_M2;
    if (land.size < maxToPlant) {
        maxToPlant = land.size;
    }

    while (true) {
        cout << "To plant ten square meters of land you need " << PLANT_COST_10_M2;
        cout << " bag of grain." << endl;
        cout << "One square meter will produce at max " << MAX_LAND_PRODUCTION;
        cout << " bag of grain." << endl;
        cout << "How much land do you want to plant?" << endl;
        cin >> amount;

        if (amount == 0) {
            return;
        }

        if (amount < 0) {
            cout << "Can't plant negative amount of land." << endl;
            continue;
        }

        if (amount > maxToPlant) {
            cout << "You can't plant that much." << endl;
            continue;
        }

        break;
    }

    land.sow(amount);
    grain -= amount;
}

void Game::endTurn() {
    grain += land.harvest();
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
