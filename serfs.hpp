#pragma once

namespace Las {
class Serfs {
public:
    int serfs;
    Serfs(int _serfs) : serfs(_serfs) {}
    int feed(int grain);
    bool alive();
};
} // namespace Las