#include "FederationMine.h"

FederationMine::FederationMine(const int line_pos, const int column_pos) {
    hp = 100;
    max_hp = 100;

    production_rate = 80;

    line = line_pos;
    column = column_pos;
}