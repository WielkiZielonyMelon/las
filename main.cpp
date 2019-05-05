#include <iostream>

#include "main_menu.hpp"
#include "overview.hpp"

int main(int argc, char * argv[]) {
    using std::cout;
    using std::endl;
    int option;
    while ((option = Game::MainMenu::selectOption()) != Game::MainMenu::Option::EXIT) {
        if (option == Game::MainMenu::Option::ERROR) {
            continue;
        }

        if (option == Game::MainMenu::Option::NEW_GAME) {
            int year = 10;
            int serfs = 100;
            int land = 1000;
            int grain = 1000;

            Game::Overview::display(year, serfs, land, grain);
        }


        cout << "You have selected: " << option << endl;
    }

    cout << "Quiting game." << endl;

    return 0;
}
