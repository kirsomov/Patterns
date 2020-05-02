#pragma once
#include "ColonyProxy.h"

class PlayingField : public ColonyAndPlayingFieldInterface {
public:
    explicit PlayingField(int width = 5);

    // возвращает, получилось ли добавить юнита
    bool Add(Owner owner, std::shared_ptr<Unit> unit) override;

    int GetCost(Owner owner) override;
    int GetAttack(Owner owner) override;
    int GetHp(Owner owner) override;
    int GetAmount(Owner owner) override;
    int GetProducingRate(Owner owner) override;

    void Print() override;
private:
    std::vector<std::shared_ptr<Colony>> real_colonies;
    std::vector<ColonyProxy> proxy_colonies;
};