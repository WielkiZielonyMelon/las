#include <iostream>

#include "game.hpp"
#include "main_menu.hpp"
#include "overview.hpp"
#include "helpers.hpp"

int main() {
    using std::cout;
    using std::endl;

    while (true) {
        Las::MainMenu::displayOptions();
        int option = Las::MainMenu::selectOption();
        if (option == Las::MainMenu::Option::ERROR) {
            continue;
        }

        if (option == Las::MainMenu::Option::NEW_GAME) {
            Las::Game();
        }

        if (option == Las::MainMenu::Option::CONTINUE) {
            throw NotImplemented();
        }

        if (option == Las::MainMenu::Option::VIEW_HIGH) {
            throw NotImplemented();
        }

        if (option == Las::MainMenu::Option::EXIT) {
            break;
        }
    }

    cout << "Quiting game." << endl;

    return 0;
}
