#pragma once
#include "PlayingField.h"

class PlayingFieldProxy : public ColonyAndPlayingFieldInterface {
public:
    explicit PlayingFieldProxy(PlayingField* real_field) : real_field(real_field) {}

    // возвращает, получилось ли добавить юнита
    bool Add(Owner owner, std::shared_ptr<Unit> unit) override;

    int GetCost(Owner owner) override;
    int GetAttack(Owner owner) override;
    int GetHp(Owner owner) override;
    int GetAmount(Owner owner) override;
    int GetProducingRate(Owner owner) override;

    void Print() override;
private:
    PlayingField* real_field;

    template<typename T>
    void Logging(const T& log);
};
