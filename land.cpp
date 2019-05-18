#include "land.hpp"

namespace Las {
Land::Land(int _size) : sowed(0), size(_size) {}

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

int Land::howMuch() const {
    return size;
}
} // namespace Las
