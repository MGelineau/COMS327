#ifndef POKEMON_H
# define POKEMON_H

enum pokemon_stat {
  stat_hp,
  stat_atk,
  stat_def,
  stat_spatk,
  stat_spdef,
  stat_speed
};

enum pokemon_gender {
  gender_female,
  gender_male
};

class pokemon {
 private:
  int level;
  int pokemon_index;
  int move_index[4];
  int pokemon_species_index;
  int IV[6];
  int effective_stat[6];
  bool shiny;
  pokemon_gender gender;
  int hp; //for battle
 public:
  pokemon();
  pokemon(int level);
  const char *get_species() const;
  int get_hp() const;
  int get_atk() const;
  int get_def() const;
  int get_spatk() const;
  int get_spdef() const;
  int get_speed() const;
  const char *get_gender_string() const;
  bool is_shiny() const;
  const char *get_move(int i) const;
  int get_move_accuracy(int i) const;
  int get_move_priority(int i) const;
  bool stab(int i) const;
  int get_health() const;
  void set_health(int i);
  int get_power(int i) const;
  int get_poke_speed() const;
  int get_level() const;


};

#endif
