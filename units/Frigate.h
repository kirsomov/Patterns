#pragma once
#include "Unit.h"

class Frigate : public Unit {
public:
    void Move();
    virtual ~Frigate() = default;

    int GetAttack() override { return atk; }
    int GetCost() override { return cost; }

    std::vector<std::string> GetCharacteristics() override;
protected:
    int atk;

    static const int cost = 150;

    static const int speed = 1;
    static const int range = 2;
};