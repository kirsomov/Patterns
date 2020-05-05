#pragma once
#include <memory>
#include "../units/Turret.h"
#include "../units/Frigate.h"
#include "../units/Mine.h"

class UnitFactory {
public:
    virtual std::shared_ptr<Turret> CreateTurret(int line, int column) = 0;
    virtual std::shared_ptr<Frigate> CreateFrigate(int line, int column) = 0;
    virtual std::shared_ptr<Mine> CreateMine(int line, int column) = 0;
};