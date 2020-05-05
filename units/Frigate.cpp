#include "Frigate.h"

void Frigate::Move() {
    column++;
}

std::vector<std::string> Frigate::GetCharacteristics() {
    std::vector<std::string> characteristics = Unit::GetCharacteristics();
    characteristics[1] = "Frigate";
    return characteristics;
}