#include <iostream>

#include "main_menu.hpp"

int main(int argc, char * argv[]) {
    using std::cout;
    using std::endl;
    int option;
    while ((option = Game::MainMenu::selectOption()) != Game::MainMenu::Option::EXIT) {
        if (option == Game::MainMenu::Option::ERROR) {
            continue;
        }

        cout << "You have selected: " << option << endl;
    }

    cout << "Quiting game." << endl;

    return 0;
}
