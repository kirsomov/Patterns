#include <iostream>
#include "factories/EmpireUnitFactory.h"
#include "factories/FederationUnitFactory.h"

int main() {
    EmpireUnitFactory empire_factory;
    auto empire_turret = empire_factory.CreateTurret(1, 3);
    auto empire_frigate = empire_factory.CreateFrigate(1, 4);
    auto empire_mine = empire_factory.CreateMine(1, 1);

    empire_turret->TakingDamage(200);
    empire_turret->Recovery();

    FederationUnitFactory federation_factory;
    auto federation_turret = federation_factory.CreateTurret(1, 3);
    auto federation_frigate = federation_factory.CreateFrigate(1, 4);
    auto federation_mine = federation_factory.CreateMine(1, 1);

    federation_turret->TakingDamage(200);
    federation_turret->Recovery();

    return 0;
}
