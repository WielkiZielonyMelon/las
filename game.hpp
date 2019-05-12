#pragma once

namespace Las {
class Game {
private:
    int currentYear = 1321;
    int years;
    int serfs;
    int land;
    int grain;

public:
    Game(int _years = 20, int _serfs = 100, int _land = 1000, int _grain = 10000);
    void endTurn();
    void endGame();
    bool hasGameFinished();
};
} // namespace Las
