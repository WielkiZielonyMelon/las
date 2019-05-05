#include <iostream>

#include "main_menu.hpp"


namespace Game {
using std::cout;
using std::cin;
using std::endl;

int MainMenu::selectOption() {
        int opt;
        cout << "Select option: " << endl;
        cout << Option::NEW_GAME << ") New game" << endl;
        cout << Option::CONTINUE << ") Continue" << endl;
        cout << Option::VIEW_HIGH << ") View highscores" << endl;
        cout << Option::EXIT << ") Exit" << endl;

        cin >> opt;
        if (opt < FIRST_VALID or opt > LAST_VALID) {
            cout << "Invalid option!" << endl;
            return Option::ERROR;
        }

        return opt;
    }
} // namespace Game
