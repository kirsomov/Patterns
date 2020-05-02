#include "Unit.h"

void Unit::TakingDamage(int damage) {
    hp -= hp <= damage ? hp : damage;
}

std::vector<std::string> Unit::GetCharacteristics() {
    return std::vector<std::string>({"", "", "hp "+std::to_string(hp)});
}

