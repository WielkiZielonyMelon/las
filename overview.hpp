#pragma once

namespace Game {
class Overview {
public:
    enum Option {
        BUY_LAND = 1,
        SELL_LAND,
        BUY_GRAIN,
        SELL_GRAIN,
        PLANT,
        QUIT,
        FIRST_VALID = BUY_LAND,
        LAST_VALID = QUIT,

        ERROR = -1
    };

    static void display(int year, int serfs, int land, int grain);
};
} // namespace Game
