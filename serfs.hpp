#pragma once

namespace Las {
class Serfs {
private:
    int serfs;
public:
    Serfs(int _serfs) : serfs(_serfs) {}
    int feed(int grain);
    bool alive();
    int howMany() const;
};
} // namespace Las
