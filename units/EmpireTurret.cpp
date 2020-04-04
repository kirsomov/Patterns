#include "EmpireTurret.h"

EmpireTurret::EmpireTurret(int line_pos, int column_pos) {
    hp = 200;
    max_hp = 200;
    atk = 100;

    shield_hp = 100;
    shield_max_hp = 100;
    recovery = 20;

    line = line_pos;
    column = column_pos;
}