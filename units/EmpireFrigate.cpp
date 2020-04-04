#include "EmpireFrigate.h"

EmpireFrigate::EmpireFrigate(const int line_pos, const int column_pos) {
    hp = 150;
    max_hp = 150;
    atk = 100;

    line = line_pos;
    column = column_pos;
}