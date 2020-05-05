cmake_minimum_required(VERSION 3.15)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp units/Unit.h units/Unit.h factories/UnitFactory.h units/Turret.h units/EmpireTurret.h factories/EmpireUnitFactory.h units/EmpireFrigate.h units/Frigate.h factories/UnitFactory.cpp factories/EmpireUnitFactory.cpp units/EmpireTurret.cpp units/EmpireFrigate.cpp factories/FederationUnitFactory.cpp factories/FederationUnitFactory.h units/FederationTurret.cpp units/FederationTurret.h units/FederationFrigate.cpp units/FederationFrigate.h units/Mine.h units/EmpireMine.cpp units/EmpireMine.h units/FederationMine.cpp units/FederationMine.h units/Unit.cpp units/Turret.cpp units/Frigate.cpp)