#pragma once

namespace Las {
class MainMenu {
public:
    enum Option {
        NEW_GAME = 1,
        CONTINUE,
        VIEW_HIGH,
        EXIT,
        FIRST_VALID = NEW_GAME,
        LAST_VALID = EXIT,

        ERROR = -1
    };

    static int selectOption();
    static void displayOptions();
};
} // namespace Las
