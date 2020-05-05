#include <fstream>
#include "factories/EmpireUnitFactory.h"
#include "factories/FederationUnitFactory.h"
#include "playing field/PlayingFieldProxy.h"

int main() {
    std::ofstream logs;
    logs.open("logs.txt", std::ios::app);
    logs << "*******************************************************\nentrance to main\n";
    logs.close();
    EmpireUnitFactory empire_factory;
    auto empire_turret = empire_factory.CreateTurret(1, 3);
    auto empire_frigate = empire_factory.CreateFrigate(1, 4);
    auto empire_mine = empire_factory.CreateMine(1, 1);

    empire_turret->TakingDamage(200);
    empire_turret->Recovery();

    FederationUnitFactory federation_factory;
    auto federation_turret = federation_factory.CreateTurret(1, 3);
    auto federation_frigate = federation_factory.CreateFrigate(1, 4);
    auto federation_mine = federation_factory.CreateMine(2, 1);

    federation_turret->TakingDamage(200);
    federation_turret->Recovery();

    Colony colony;
    ColonyProxy colony_proxy(&colony);
    std::cout << colony_proxy.Add(PLAYER, federation_turret); // true
    std::cout << colony_proxy.Add(BOT, federation_turret) << '\n'; // false
    colony_proxy.Print();
    colony_proxy.Print();
    PlayingField field;
    PlayingFieldProxy field_proxy(&field);
    std::cout << field_proxy.Add(PLAYER, federation_turret); // true
    std::cout << field_proxy.Add(PLAYER, federation_frigate); // true
    std::cout << field_proxy.Add(PLAYER, federation_mine); // true
    std::cout << field_proxy.Add(BOT, federation_frigate); // false
    std::cout << field_proxy.Add(BOT, federation_factory.CreateMine(100, 1)); // false
    std::cout << field_proxy.Add(BOT, federation_factory.CreateMine(1, 100)) << '\n'; // false

    std::cout << field_proxy.GetCost(PLAYER) << '\n'; // 150+200+300=650
    std::cout << field_proxy.GetAmount(PLAYER) << '\n'; // 3
    std::cout << field_proxy.GetAttack(PLAYER) << '\n'; // 75+75+0=150
    std::cout << field_proxy.GetHp(PLAYER) << '\n'; // 125+100+100=325
    std::cout << field_proxy.GetProducingRate(PLAYER) << '\n'; // 80

    field_proxy.Print();

    logs.open("logs.txt", std::ios::app);
    logs << "exit main with code 0\n*******************************************************\n";
    logs.close();
    return 0;
}
