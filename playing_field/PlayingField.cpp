#include "PlayingField.h"

PlayingField::PlayingField(int width) : real_colonies(width) {
    for (int i = 0; i < width; i++) {
        real_colonies[i] = std::make_shared<Colony>(Colony());
        proxy_colonies.emplace_back(&(*real_colonies[i]));
    }
}

bool PlayingField::Add(Owner owner, std::shared_ptr<Unit> unit) {
    int line = unit->GetPos().first;
    if (line < 0 || line >= proxy_colonies[0].GetLength())
        return false;
    return proxy_colonies[line].Add(owner, unit);
}

int PlayingField::GetCost(Owner owner) {
    int cost = 0;
    for (auto& colony : proxy_colonies)
       cost += colony.GetCost(owner);
    return cost;
}

int PlayingField::GetAttack(Owner owner) {
    int attack = 0;
    for (auto& colony : proxy_colonies)
        attack += colony.GetAttack(owner);
    return attack;
}

int PlayingField::GetHp(Owner owner) {
    int hp = 0;
    for (auto& colony : proxy_colonies)
        hp += colony.GetHp(owner);
    return hp;
}

int PlayingField::GetAmount(Owner owner) {
    int amount = 0;
    for (auto& colony : proxy_colonies)
        amount += colony.GetAmount(owner);
    return amount;
}

int PlayingField::GetProducingRate(Owner owner) {
    int producing_rate = 0;
    for (auto& colony : proxy_colonies)
        producing_rate += colony.GetProducingRate(owner);
    return producing_rate;
}

void PlayingField::Print() {
    for (auto& colony : proxy_colonies)
        colony.Print();
}