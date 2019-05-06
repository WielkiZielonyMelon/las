#include <iostream>

#include "main_menu.hpp"
#include "overview.hpp"

class NotImplemented : public std::logic_error {
public:
    NotImplemented() : std::logic_error("Function not yet implemented") { };
};

int main(int argc, char * argv[]) {
    using std::cout;
    using std::endl;

    while (true) {
        Game::MainMenu::displayOptions();
        int option = Game::MainMenu::selectOption();
        if (option == Game::MainMenu::Option::ERROR) {
            continue;
        }

        if (option == Game::MainMenu::Option::NEW_GAME) {
            while (true) {
                int year = 10;
                int serfs = 100;
                int land = 1000;
                int grain = 1000;

                Game::Overview::displayOptions(year, serfs, land, grain);
                option = Game::Overview::selectOption();

                if (option == Game::Overview::END_TURN) {
                    throw NotImplemented();
                }

                if (option == Game::Overview::BUY_LAND) {
                    throw NotImplemented();
                }

                if (option == Game::Overview::SELL_LAND) {
                    throw NotImplemented();
                }

                if (option == Game::Overview::BUY_GRAIN) {
                    throw NotImplemented();
                }

                if (option == Game::Overview::SELL_GRAIN) {
                    throw NotImplemented();
                }

                if (option == Game::Overview::PLANT) {
                    throw NotImplemented();
                }

                if (option == Game::Overview::QUIT) {
                    throw NotImplemented();
                }

                continue;
            }
        }

        if (option == Game::MainMenu::Option::CONTINUE) {
            throw NotImplemented();
        }

        if (option == Game::MainMenu::Option::VIEW_HIGH) {
            throw NotImplemented();
        }

        if (option == Game::MainMenu::Option::EXIT) {
            break;
        }

    }

    cout << "Quiting game." << endl;

    return 0;
}
