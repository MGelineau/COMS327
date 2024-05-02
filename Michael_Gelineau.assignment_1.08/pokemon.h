#ifndef POKEMON_H
#define POKEMON_H

enum stats {
    hp,
    attack,
    defense,
    special_attack,
    special_defense,
    speed
};

enum gender{
    male,
    female
};

class Pokemon {
    private:
    int pokemon_id;
    int level;
    int poke_stats[6];
    int poke_moves[2];
    gender poke_gender;
    bool shiny;
    int poke_iv[6];

    public:
    Pokemon(int level);
    const char *getPokemon() const;
    int getLevel() const;
    int getHp() const;
    int getAttack() const;
    int getDefense() const;
    int getSpecialAttack() const;
    int getSpecialDefense() const;
    int getSpeed() const;
    const char *getMove(int i) const;
};

#endif