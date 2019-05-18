#include "land.hpp"

namespace Las {
Land::Land(int _size) : size(_size), sowed(0) {}

void Land::sow(int amount) {
    sowed += amount;
}

int Land::harvest() {
    int ret = sowed;
    sowed = 0;

    return ret;
}

void Land::buy(int amount) {
    size += amount;
}

void Land::sell(int amount) {
    size -= amount;
}

int Land::howMuchTotal() const {
    return size;
}

int Land::howMuchSowed() const {
    return sowed;
}
} // namespace Las
