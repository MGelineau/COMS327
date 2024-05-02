#include "items.h"

#include <cstdlib>

items::items(){
    numCyanideDart = (rand() % 4) + 1;
    numGun = 1;
    numBrassKnuckles = 1;
    numPokeballs = (rand() % 8) + 1;
    numHealPotions = (rand() % 5) + 1;
    numRevives = (rand() % 5) +1;

    costBrass = (rand() % 6) + 10;
    costGun = (rand() % 7) + 15;
    costCyanide = (rand() % 6) + 6;
    costPokeballs = (rand() % 7) + 1;
    costRevives = (rand() % 7) + 1;
    costHeal = (rand() % 7) + 1;
}
