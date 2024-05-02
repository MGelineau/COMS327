#include <string>
#ifndef ITEMS_H
#define ITEMS_H

class items
{
public:
    int numCyanideDart;
    int numPokeballs;
    int numRevives;
    int numHealPotions;
    int numGun;
    int numBrassKnuckles;

    int costCyanide;
    int costPokeballs;
    int costRevives;
    int costHeal;
    int costGun;
    int costBrass;

    const char *cyanideDesc = "Throw this at your opponent to immediately incompacitate them, giving you the opportunity to run like the coward you are";
    const char *gunDesc = "REAL GUN (with no bullets): Give yourself a jump on the opponent and significantly increase your chance to rob another trainer";
    const char *brassDesc = "You're a brute.  Give yourself a moderately increased chance to rob another trainer";
    items();
};

#endif