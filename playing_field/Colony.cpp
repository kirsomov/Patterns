#include "Colony.h"

bool Colony::Add(Owner owner, std::shared_ptr<Unit> unit) {
    int column = unit->GetPos().second;
    if (column >= units.size()/2 || column < 0)
        return false;
    if (units[column] == nullptr) {
        assert(states[column] == NOBODY);
        units[column] = unit;
        states[column] = owner;
        return true;
    }
    return false;
}

int Colony::GetCost(Owner owner) {
    int cost = 0;
    for (int i = 0; i < length; i++)
        if (units[i] && states[i] == owner)
            cost += units[i]->GetCost();
    return cost;
}

int Colony::GetAttack(Owner owner) {
    int attack = 0;
    for (int i = 0; i < length; i++)
        if (units[i] && states[i] == owner)
            attack += units[i]->GetAttack();
    return attack;
}

int Colony::GetHp(Owner owner) {
    int hp = 0;
    for (int i = 0; i < length; i++)
        if (units[i] && states[i] == owner)
            hp += units[i]->GetHp();
    return hp;
}

int Colony::GetAmount(Owner owner) {
    int amount = 0;
    for (int i = 0; i < length; i++)
        if (units[i] && states[i] == owner)
            amount++;
    return amount;
}

int Colony::GetProducingRate(Owner owner) {
    int producing_rate = 0;
    for (int i = 0; i < length; i++)
        if (units[i] && states[i] == owner)
            producing_rate += units[i]->GetProducingRate();
    return producing_rate;
}

std::string& PaddingLine(std::string& line, int min_length = 10) {
    assert(line.length() <= min_length);
    int line_length = line.length();
    for (int i = 0; i < min_length - line_length; i++)
        line += ' ';
    return line;
}

void Colony::Print() {
    std::vector<std::string> lines(5);
    for (auto& line : lines)
        line += '|';
    for (int i = 0; i < units.size(); i++) {
        std::vector<std::string> characteristics(5);
        if (units[i])
            characteristics = units[i]->GetCharacteristics();
        characteristics[0] = OwnerToString(states[i]);
        for (int j = 0; j < characteristics.size(); j++)
            lines[j] += PaddingLine(characteristics[j])+'|';
    }
    for (int i = 0; i < lines[0].length(); i++)
        std::cout << '_';
    std::cout << '\n';
    for (auto& line : lines)
        std::cout << line << '\n';
    for (int i = 0; i < lines[0].length(); i++)
        std::cout << '_';
    std::cout << '\n';
}