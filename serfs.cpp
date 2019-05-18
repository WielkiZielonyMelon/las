#include "serfs.hpp"

namespace Las {
int Serfs::feed(int grain) {
    if (grain > serfs) {
        return grain - serfs;
    }

    serfs = grain;

    return 0;
}

bool Serfs::alive() {
    return serfs > 0;
}

int Serfs::howMany() const {
    return serfs;
}
} // namespace Las
