#pragma once
#include "Unit.h"

class Turret : public Unit {
public:
    void TakingDamage(int damage) override;
    void Recovery();
    virtual ~Turret() = default;

    int atk;

    const int cost = 200;

    int shield_hp;
    int shield_max_hp;
    int recovery;
};