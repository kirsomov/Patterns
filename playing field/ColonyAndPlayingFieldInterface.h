#pragma once
#include "../units/Unit.h"
#include <vector>
#include <memory>

enum Owner {PLAYER, BOT, NOBODY};

std::string OwnerToString(Owner owner);

class ColonyAndPlayingFieldInterface {
public:
    // возвращает, получилось ли добавить юнита
    virtual bool Add(Owner owner, std::shared_ptr<Unit> unit) = 0;

    virtual int GetCost(Owner owner) = 0;
    virtual int GetAttack(Owner owner) = 0;
    virtual int GetHp(Owner owner) = 0;
    virtual int GetAmount(Owner owner) = 0;
    virtual int GetProducingRate(Owner owner) = 0;

    virtual void Print() = 0;
};
