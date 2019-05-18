#pragma once

#include "land.hpp"
#include "serfs.hpp"

namespace Las {
class Game {
private:
    int currentYear = 1321;
    int years;
    Serfs serfs;
    Land land;
    int grain;

    const int LAND_BUY_PRICE = 3;
    const int LAND_SELL_PRICE = 2;
    const int PLANT_COST_10_M2 = 1;
    const int MAX_LAND_PRODUCTION = 1;

public:
    Game(int _years = 20, int _serfs = 100, int _land = 1000, int _grain = 10000);
    void buyLand();
    void sellLand();
    void plant();
    void endTurn();
    void endGame();
    bool hasGameFinished();
};
} // namespace Las
