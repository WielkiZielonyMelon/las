#pragma once

namespace Las {
class Overview {
public:
    enum Option {
        END_TURN = 1,
        BUY_LAND,
        SELL_LAND,
        BUY_GRAIN,
        SELL_GRAIN,
        PLANT,
        QUIT,
        FIRST_VALID = END_TURN,
        LAST_VALID = QUIT,

        ERROR = -1
    };

    static int selectOption();
    static void displayInfo(int year, int serfs, int land, int grain);
    static void displayOptions();
};
} // namespace Las
