#include "Unit.h"

void Unit::TakingDamage(int damage) {
    hp -= hp <= damage ? hp : damage;
}