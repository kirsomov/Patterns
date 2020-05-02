#pragma once
#include "ColonyAndPlayingFieldInterface.h"
#include <cassert>

class Colony : public ColonyAndPlayingFieldInterface {
public:
    explicit Colony(const int length = 10) : length(length), units(length), states(length, NOBODY) {}

    // возвращает true, если добавление удалось
    bool Add(Owner owner, std::shared_ptr<Unit> unit) override;

    int GetCost(Owner owner) override;
    int GetAttack(Owner owner) override;
    int GetHp(Owner owner) override;
    int GetAmount(Owner owner) override;
    int GetProducingRate(Owner owner) override;

    int GetLength() { return units.size(); }

    void Print() override;
private:
    int length;
    std::vector<std::shared_ptr<Unit>> units;
    std::vector<Owner> states;
};
