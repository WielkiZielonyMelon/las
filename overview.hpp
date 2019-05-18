#pragma once

#include "serfs.hpp"
#include "land.hpp"

namespace Las {
class Overview {
public:
    enum Option {
        END_TURN = 1,
        BUY_LAND,
        SELL_LAND,
        PLANT,
        QUIT,
        FIRST_VALID = END_TURN,
        LAST_VALID = QUIT,

        ERROR = -1
    };

    static int selectOption();
    static void displayInfo(int year, const Serfs & serfs, const Land & land,
                            int grain);
    static void displayOptions();
};
} // namespace Las
