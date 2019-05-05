#include <iostream>

#include "overview.hpp"

namespace Game {
using std::cout;
using std::cin;
using std::endl;

void Overview::display(int year, int serfs, int land, int grain) {
    cout << "It is year " << year << "." << endl;
    cout << "You have " << serfs << " serf";
    if (serfs != 1) {
        cout << "s";
    }
    cout << "." << endl;
    cout << "You own " << land << " m^2 of land." << endl;
    cout << "You have " << grain << " grain." << endl;
    cout << endl;
}
} // namespace Game
