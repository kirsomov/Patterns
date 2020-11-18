#pragma once
#include "Unit.h"

class Mine : public Unit {
public:
    virtual ~Mine() = default;

    int GetProducingRate() override { return production_rate; }
    int GetCost() override { return cost; }

    std::vector<std::string> GetCharacteristics() override;
protected:
    static const int cost = 300;
    int production_rate;
};