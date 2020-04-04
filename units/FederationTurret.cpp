#include "FederationTurret.h"

FederationTurret::FederationTurret(const int line_pos, const int column_pos) {
    hp = 100;
    max_hp = 100;
    atk = 75;

    shield_hp = 200;
    shield_max_hp = 200;
    recovery = 40;

    line = line_pos;
    column = column_pos;
}