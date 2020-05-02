#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cassert>


class Unit {
public:
    virtual void TakingDamage(int damage);
    virtual int GetAttack() { return 0; }
    virtual int GetCost() = 0;
    virtual int GetProducingRate() { return 0; }
    int GetHp() { return hp; }
    std::pair<int, int> GetPos() { return {line, column}; }

    virtual std::vector<std::string> GetCharacteristics();
protected:
    int hp;
    int max_hp;

    int line;
    int column;
};