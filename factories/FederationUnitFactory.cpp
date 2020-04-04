#include "FederationUnitFactory.h"

std::shared_ptr<Turret> FederationUnitFactory::CreateTurret(int line, int column) {
    return std::make_shared<FederationTurret>(line, column);
}

std::shared_ptr<Frigate> FederationUnitFactory::CreateFrigate(int line, int column) {
    return std::make_shared<FederationFrigate>(line, column);
}

std::shared_ptr<Mine> FederationUnitFactory::CreateMine(int line, int column) {
    return std::make_shared<FederationMine>(line, column);
}