#include "ColonyAndPlayingFieldInterface.h"

std::string OwnerToString(Owner owner) {
    if (owner == PLAYER)
        return "PLAYER";
    if (owner == BOT)
        return "BOT";
    return "NOBODY";
}