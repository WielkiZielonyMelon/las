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
        Las::MainMenu::displayOptions();
        int option = Las::MainMenu::selectOption();
        if (option == Las::MainMenu::Option::ERROR) {
            continue;
        }

        if (option == Las::MainMenu::Option::NEW_GAME) {
            while (true) {
                int year = 10;
                int serfs = 100;
                int land = 1000;
                int grain = 1000;

                Las::Overview::displayOptions(year, serfs, land, grain);
                option = Las::Overview::selectOption();

                if (option == Las::Overview::END_TURN) {
                    throw NotImplemented();
                }

                if (option == Las::Overview::BUY_LAND) {
                    throw NotImplemented();
                }

                if (option == Las::Overview::SELL_LAND) {
                    throw NotImplemented();
                }

                if (option == Las::Overview::BUY_GRAIN) {
                    throw NotImplemented();
                }

                if (option == Las::Overview::SELL_GRAIN) {
                    throw NotImplemented();
                }

                if (option == Las::Overview::PLANT) {
                    throw NotImplemented();
                }

                if (option == Las::Overview::QUIT) {
                    throw NotImplemented();
                }

                continue;
            }
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
