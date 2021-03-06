#include <iostream>

#include "main_menu.hpp"


namespace Las {
using std::cout;
using std::cin;
using std::endl;

void MainMenu::displayOptions() {
    cout << "Select option: " << endl;
    cout << Option::NEW_GAME << ") New game" << endl;
    cout << Option::CONTINUE << ") Continue" << endl;
    cout << Option::VIEW_HIGH << ") View highscores" << endl;
    cout << Option::EXIT << ") Exit" << endl;
}

int MainMenu::selectOption() {
    int opt;
    cin >> opt;
    if (opt < FIRST_VALID or opt > LAST_VALID) {
        cout << "Invalid option!" << endl;
        return Option::ERROR;
    }

    return opt;
}
} // namespace Las
