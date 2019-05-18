#pragma once

namespace Las {
class Land {
private:
    int size;
    int sowed;

public:
    Land(int _size);
    void sow(int amount);
    int harvest();
    void buy(int amount);
    void sell(int amount);
    int howMuchTotal() const;
    int howMuchSowed() const;
};
} // namespace Las
