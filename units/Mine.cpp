#include "Mine.h"

std::vector<std::string> Mine::GetCharacteristics() {
    std::vector<std::string> characteristics = Unit::GetCharacteristics();
    characteristics[1] = "Mine";
    characteristics.push_back("prod "+std::to_string(production_rate));
    return characteristics;
}