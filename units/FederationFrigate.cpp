#include "FederationFrigate.h"

FederationFrigate::FederationFrigate(const int line_pos, const int column_pos) {
    hp = 125;
    max_hp = 125;
    atk = 75;

    line = line_pos;
    column = column_pos;
}