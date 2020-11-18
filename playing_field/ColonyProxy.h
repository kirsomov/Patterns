#pragma once
#include "Colony.h"

class ColonyProxy : public ColonyAndPlayingFieldInterface {
public:
    explicit ColonyProxy(Colony* real_colony) : real_colony(real_colony) {}

    // возвращает true, если добавление удалось
    bool Add(Owner owner, std::shared_ptr<Unit> unit) override;

    int GetCost(Owner owner) override;
    int GetAttack(Owner owner) override;
    int GetHp(Owner owner) override;
    int GetAmount(Owner owner) override;
    int GetProducingRate(Owner owner) override;

    int GetLength() { return real_colony->GetLength(); }

    void Print() override;
private:
    Colony* real_colony;

    template<typename T>
    static void Logging(const T& log);
};
