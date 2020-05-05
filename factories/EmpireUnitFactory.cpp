#include "EmpireUnitFactory.h"

std::shared_ptr<Turret> EmpireUnitFactory::CreateTurret(const int line, const int column) {
    return std::make_shared<EmpireTurret>(line, column);
}

std::shared_ptr<Frigate> EmpireUnitFactory::CreateFrigate(const int line, const int column) {
    return std::make_shared<EmpireFrigate>(line, column);
}

std::shared_ptr<Mine> EmpireUnitFactory::CreateMine(const int line, const int column) {
    return std::make_shared<EmpireMine>(line, column);
}