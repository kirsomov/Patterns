#include "EmpireMine.h"

EmpireMine::EmpireMine(const int line_pos, const int column_pos) {
    hp = 150;
    max_hp = 150;

    production_rate = 75;

    line = line_pos;
    column = column_pos;
}