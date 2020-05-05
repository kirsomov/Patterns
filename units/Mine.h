#pragma once
#include "Unit.h"

class Mine : public Unit {
public:
    virtual ~Mine() = default;
    const int cost = 300;

    int production_rate;
};