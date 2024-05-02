#include <math.h>
#include <unistd.h>
#include <ncurses.h>
#include <cctype>
#include <cstdlib>
#include <climits>

#include "pokemon.h"
#include "db_parse.h"

Pokemon::Pokemon(int level) :level(level){
    //Get a random pokemon
    pokemon_id = (rand() % 898) + 1;


    //get pokemon moves
    int move1;
    int move2;
    do {
    move1 = (rand() % 528238) + 1;

    poke_moves[0] = pokemon_moves[move1].move_id;
  }
  while(!((pokemon_moves[move1].pokemon_id == pokemon[pokemon_id].species_id) &&
          (pokemon_moves[move1].pokemon_move_method_id == 1)));

  do {
    move2 = (rand() % 528238) + 1;

    poke_moves[1] = pokemon_moves[move2].move_id;
  }
  while(!((pokemon_moves[move2].pokemon_id == pokemon[pokemon_id].species_id) &&
          (pokemon_moves[move2].pokemon_move_method_id == 1)) ||
          (move1 == move2));

    //get gender
    if((rand() % 2) == 0){
        poke_gender = male;
    }
    else{
        poke_gender = female;
    }

    //get shiny
    if((rand() % 8192) == 2384){
        shiny = true;
    }

    //get iv
    int i;
    for(i = 0; i < 6; i++){
        poke_iv[i] = rand() % 16;

        poke_stats[i] = (((((pokemon_stats[1 + (pokemon_id - 1) * 6].base_stat + poke_iv[i]) * 2) * level) / 100) + level + 10);
    }
     
}

const char *Pokemon::getPokemon() const {
  return species[pokemon_id].identifier;
}

int Pokemon::getLevel() const {
  return level;
}

int Pokemon::getHp() const {
  return poke_stats[hp];
}

int Pokemon::getAttack() const {
  return poke_stats[attack];
}

int Pokemon::getDefense() const {
  return poke_stats[defense];
}

int Pokemon::getSpecialAttack() const {
  return poke_stats[special_attack];
}

int Pokemon::getSpecialDefense() const {
  return poke_stats[special_defense];
}

int Pokemon::getSpeed() const {
  return poke_stats[speed];
}

const char *Pokemon::getMove(int i) const {
  return moves[poke_moves[i]].identifier;
}