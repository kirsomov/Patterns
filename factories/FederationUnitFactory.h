#pragma once
#include "UnitFactory.h"
#include "../units/FederationTurret.h"
#include "../units/FederationFrigate.h"
#include "../units/FederationMine.h"

class FederationUnitFactory : public UnitFactory {
public:
    std::shared_ptr<Frigate> CreateFrigate(int line_pos, int column_pos) override;
    std::shared_ptr<Mine> CreateMine(int line_pos, int column_pos) override;
    std::shared_ptr<Turret> CreateTurret(int line_pos, int column_pos) override;
};
