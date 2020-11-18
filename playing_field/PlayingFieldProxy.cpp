#include "PlayingFieldProxy.h"
#include <fstream>

template<typename T>
void PlayingFieldProxy::Logging(const T& log) {
    std::ofstream logs;
    logs.open("logs.txt", std::ios::app);
    logs << log << '\n';
    logs.close();
}

bool PlayingFieldProxy::Add(Owner owner, std::shared_ptr<Unit> unit) {
    Logging("entrance to PlayingFieldProxy::Add with owner == "+OwnerToString(owner));
    bool result = real_field->Add(owner, unit);
    Logging(static_cast<std::string>("PlayingField::Add returned ")+(result ? "true" : "false"));
    return result;
}

int PlayingFieldProxy::GetCost(Owner owner) {
    Logging("entrance to PlayingFieldProxy::GetCost with owner == "+OwnerToString(owner));
    int cost = real_field->GetCost(owner);
    Logging(static_cast<std::string>("PlayingField::GetCost returned "));
    Logging(cost);
    return cost;
}

int PlayingFieldProxy::GetAttack(Owner owner) {
    Logging("entrance to PlayingFieldProxy::GetAttack with owner == "+OwnerToString(owner));
    int attack = real_field->GetAttack(owner);
    Logging(static_cast<std::string>("PlayingField::GetAttack returned "));
    Logging(attack);
    return attack;
}

int PlayingFieldProxy::GetHp(Owner owner) {
    Logging("entrance to PlayingFieldProxy::GetHp with owner == "+OwnerToString(owner));
    int hp = real_field->GetHp(owner);
    Logging(static_cast<std::string>("PlayingField::GetHp returned "));
    Logging(hp);
    return hp;
}

int PlayingFieldProxy::GetAmount(Owner owner) {
    Logging("entrance to PlayingFieldProxy::GetAmount with owner == "+OwnerToString(owner));
    int amount = real_field->GetAmount(owner);
    Logging(static_cast<std::string>("PlayingField::GetAmount returned "));
    Logging(amount);
    return amount;
}

int PlayingFieldProxy::GetProducingRate(Owner owner) {
    Logging("entrance to PlayingFieldProxy::GetProducingRate with owner == "+OwnerToString(owner));
    int producing_rate = real_field->GetProducingRate(owner);
    Logging(static_cast<std::string>("PlayingField::GetProducingRate returned "));
    Logging(producing_rate);
    return producing_rate;
}

void PlayingFieldProxy::Print() {
    Logging("entrance to PlayingFieldProxy::Print");
    real_field->Print();
}