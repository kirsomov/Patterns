#include "Turret.h"

void Turret::TakingDamage(int damage) {
    if (shield_hp >= damage)
        shield_hp -= damage;
    else {
        damage -= shield_hp;
        shield_hp = 0;
        hp -= hp <= damage ? hp : damage;
    }
}

void Turret::Recovery() {
    shield_hp = (shield_hp + recovery <= shield_max_hp) ? shield_hp + recovery : shield_max_hp;
}