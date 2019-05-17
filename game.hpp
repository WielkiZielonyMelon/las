#pragma once

namespace Las {
class Game {
private:
    int currentYear = 1321;
    int years;
    int serfs;
    int land;
    int grain;

    const int LAND_BUY_PRICE = 3;
    const int LAND_SELL_PRICE = 2;

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
