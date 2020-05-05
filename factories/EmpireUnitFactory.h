#pragma once
#include "UnitFactory.h"
#include "../units/EmpireTurret.h"
#include "../units/EmpireFrigate.h"
#include "../units/EmpireMine.h"

class EmpireUnitFactory : public UnitFactory {
public:
    std::shared_ptr<Turret> CreateTurret(int line, int column) override;
    std::shared_ptr<Frigate> CreateFrigate(int line, int column) override;
    std::shared_ptr<Mine> CreateMine(int line, int column) override;
};