#include "ColonyProxy.h"
#include <fstream>

template<typename T>
void ColonyProxy::Logging(const T& log) {
    std::ofstream logs;
    logs.open("logs.txt", std::ios::app);
    logs << log << '\n';
    logs.close();
}

bool ColonyProxy::Add(Owner owner, std::shared_ptr<Unit> unit) {
    Logging("entrance to ColonyProxy::Add with owner == "+OwnerToString(owner));
    bool result = real_colony->Add(owner, unit);
    Logging(static_cast<std::string>("Colony::Add returned ")+(result ? "true" : "false"));
    return result;
}

int ColonyProxy::GetCost(Owner owner) {
    Logging("entrance to ColonyProxy::GetCost with owner == "+OwnerToString(owner));
    int cost = real_colony->GetCost(owner);
    Logging(static_cast<std::string>("Colony::GetCost returned "));
    Logging(cost);
    return cost;
}

int ColonyProxy::GetAttack(Owner owner) {
    Logging("entrance to ColonyProxy::GetAttack with owner == "+OwnerToString(owner));
    int attack = real_colony->GetAttack(owner);
    Logging(static_cast<std::string>("Colony::GetAttack returned "));
    Logging(attack);
    return attack;
}

int ColonyProxy::GetHp(Owner owner) {
    Logging("entrance to ColonyProxy::GetHp with owner == "+OwnerToString(owner));
    int hp = real_colony->GetHp(owner);
    Logging(static_cast<std::string>("Colony::GetHp returned "));
    Logging(hp);
    return hp;
}

int ColonyProxy::GetAmount(Owner owner) {
    Logging("entrance to ColonyProxy::GetAmount with owner == "+OwnerToString(owner));
    int amount = real_colony->GetAmount(owner);
    Logging(static_cast<std::string>("Colony::GetAmount returned "));
    Logging(amount);
    return amount;
}

int ColonyProxy::GetProducingRate(Owner owner) {
    Logging("entrance to ColonyProxy::GetProducingRate with owner == "+OwnerToString(owner));
    int producing_rate = real_colony->GetProducingRate(owner);
    Logging(static_cast<std::string>("Colony::GetProducingRate returned "));
    Logging(producing_rate);
    return producing_rate;
}

void ColonyProxy::Print() {
    Logging("entrance to ColonyProxy::Print");
    real_colony->Print();
}