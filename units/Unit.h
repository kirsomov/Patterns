#pragma once
class Unit {
public:
    virtual void TakingDamage(int damage);

    int hp;
    int max_hp;

    int line;
    int column;
};