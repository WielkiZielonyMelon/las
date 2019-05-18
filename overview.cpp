#include <iostream>

#include "overview.hpp"
#include "serfs.hpp"
#include "land.hpp"

namespace Las {
using std::cout;
using std::cin;
using std::endl;

void Overview::displayInfo(int year, const Serfs & serfs, const Land & land,
                           int grain) {
    cout << "It is year " << year << "." << endl;
    cout << "You have " << serfs.howMany() << " serf";
    if (serfs.howMany() != 1) {
        cout << "s";
    }
    cout << "." << endl;
    cout << "You own " << land.howMuchTotal() << " m^2 of land." << endl;
    cout << "Of that " << land.howMuchSowed() << " m^2 is sowed." << endl;
    cout << "You have " << grain << " grain." << endl;
    cout << endl;
}

void Overview::displayOptions() {
    cout << "What do you want to do?" << endl;
    cout << Option::END_TURN << ") end turn" << endl;
    cout << Option::BUY_LAND << ") buy land" << endl;
    cout << Option::SELL_LAND << ") sell land" << endl;
    cout << Option::PLANT << ") plant" << endl;
    cout << Option::QUIT << ") quit" << endl;
    cout << endl;
}

int Overview::selectOption() {
    int opt;
    cin >> opt;
    if (opt < FIRST_VALID or opt > LAST_VALID) {
        cout << "Invalid option!" << endl;
        return Option::ERROR;
    }

    return opt;
}
} // namespace Las
