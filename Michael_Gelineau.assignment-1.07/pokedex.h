#ifndef POKEDEX_H
#define POKEDEX_H
#include <cstdlib>
#include <iostream>

class pokemon
{
public:
    int id;
    std::string identifier;
    int species_id;
    int height;
    int weight;
    int base_experience;
    int order;
    int is_default;

    pokemon(int ID, std::string IDENTIFIER, int SPECIES_ID, int HEIGHT, int WEIGHT, int BASE_EXP, int ORDER, int IS_DEF)
    {
        id = ID;
        identifier = IDENTIFIER;
        species_id = SPECIES_ID;
        height = HEIGHT;
        weight = WEIGHT;
        base_experience = BASE_EXP;
        order = ORDER;
        is_default = IS_DEF;
    }

    void display()
    {
        std::cout << "id: " << id << std::endl;
        std::cout << "identifier: " << identifier << std::endl;
        std::cout << "species_id: " << species_id << std::endl;
        std::cout << "height: " << height << std::endl;
        std::cout << "weight: " << weight << std::endl;
        std::cout << "base_experience: " << base_experience << std::endl;
        std::cout << "order: " << order << std::endl;
        std::cout << "is_default: " << is_default << std::endl;
        std::cout << "\n"
                  << std::endl;
    }
};

class moves
{
public:
    int id;
    std::string identifier;
    int gen_id;
    int type_id;
    int power;
    int pp;
    int accuracy;
    int priority;
    int target_id;
    int damage_class_id;
    int effect_id;
    int effect_chance;
    int contest_type_id;
    int contest_effect_id;
    int super_contest_effect_id;

    moves(int i, std::string iden, int g, int t, int p, int ppp, int acc, int pri, int tar, int dam, int eff, int effch, int cti, int cei, int scei)
    {
        id = i;
        identifier = iden;
        gen_id = g;
        type_id = t;
        power = p;
        pp = ppp;
        accuracy = acc;
        priority = pri;
        target_id = tar;
        damage_class_id = dam;
        effect_id = eff;
        effect_chance = effch;
        contest_type_id = cti;
        contest_effect_id = cei;
        super_contest_effect_id = scei;
    }

    void display()
    {
        std::cout << "id: " << id << std::endl;
        std::cout << "identifier: " << identifier << std::endl;
        std::cout << "gen_id: " << gen_id << std::endl;
        std::cout << "type_id: " << type_id << std::endl;
        std::cout << "power: " << power << std::endl;
        std::cout << "pp: " << pp << std::endl;
        std::cout << "accuracy: " << accuracy << std::endl;
        std::cout << "priority: " << priority << std::endl;
        std::cout << "target_id: " << target_id << std::endl;
        std::cout << "damage_class_id: " << damage_class_id << std::endl;
        std::cout << "effect_id: " << effect_id << std::endl;
        std::cout << "effect_chance: " << effect_chance << std::endl;
        std::cout << "contest_type_id: " << contest_type_id << std::endl;
        std::cout << "contest_effect_id: " << contest_effect_id << std::endl;
        std::cout << "super_contest_effect_id: " << super_contest_effect_id << std::endl;
        std::cout << "\n"
                  << std::endl;
    }
};

class pokemon_moves
{
public:
    int pokemon_id;
    int version_group_id;
    int move_id;
    int pokemon_move_method_id;
    int level;
    int order;

    pokemon_moves(int pi, int vgi, int mi, int pmmi, int l, int o)
    {
        pokemon_id = pi;
        version_group_id = vgi;
        move_id = mi;
        pokemon_move_method_id = pmmi;
        level = l;
        order = o;
    }

    void display()
    {
        std::cout << "pokemon_id: " << pokemon_id << std::endl;
        std::cout << "version_group_id: " << version_group_id << std::endl;
        std::cout << "move_id: " << move_id << std::endl;
        std::cout << "pokemon_move_method_id: " << pokemon_move_method_id << std::endl;
        std::cout << "level: " << level << std::endl;
        std::cout << "order: " << order << std::endl;
        std::cout << "\n"
                  << std::endl;
    }
};

class pokemon_species
{
public:
    int id;
    std::string identifier;
    int generation_id;
    int evolves_from_species_id;
    int evolution_chain_id;
    int color_id;
    int shape_id;
    int habitat_id;
    int gender_rate;
    int capture_rate;
    int base_happiness;
    int is_baby;
    int hatch_counter;
    int has_gender_differences;
    int growth_rate_id;
    int forms_switchable;
    int is_legendary;
    int is_mythical;
    int order;
    int conquest_order;

    pokemon_species(int i, std::string idn, int gi, int evfsi, int eci, int ci, int si, int hi, int gr, int cr, int bh, int ib, int hc, int hgd, int gri, int fs, int il, int im, int o, int co)
    {
        id = i;
        identifier = idn;
        generation_id = gi;
        evolves_from_species_id = evfsi;
        evolution_chain_id = eci;
        color_id = ci;
        shape_id = si;
        habitat_id = hi;
        gender_rate = gr;
        capture_rate = cr;
        base_happiness = bh;
        is_baby = ib;
        hatch_counter = hc;
        has_gender_differences = hgd;
        growth_rate_id = gri;
        forms_switchable = fs;
        is_legendary = il;
        is_mythical = im;
        order = o;
        conquest_order = co;
    }

    void display()
    {
        std::cout << "id: " << id << std::endl;
        std::cout << "identifier: " << identifier << std::endl;
        std::cout << "generation_id: " << generation_id << std::endl;
        std::cout << "evolves_from_species_id: " << evolves_from_species_id << std::endl;
        std::cout << "evolution_chain_id: " << evolution_chain_id << std::endl;
        std::cout << "color_id: " << color_id << std::endl;
        std::cout << "shape_id: " << shape_id << std::endl;
        std::cout << "habitat_id: " << habitat_id << std::endl;
        std::cout << "gender_rate: " << gender_rate << std::endl;
        std::cout << "capture_rate: " << capture_rate << std::endl;
        std::cout << "base_happiness: " << base_happiness << std::endl;
        std::cout << "is_baby: " << is_baby << std::endl;
        std::cout << "hatch_counter: " << hatch_counter << std::endl;
        std::cout << "has_gender_differences: " << has_gender_differences << std::endl;
        std::cout << "growth_rate_id: " << growth_rate_id << std::endl;
        std::cout << "forms_switchable: " << forms_switchable << std::endl;
        std::cout << "is_legendary: " << is_legendary << std::endl;
        std::cout << "is_mythical: " << is_mythical << std::endl;
        std::cout << "order: " << order << std::endl;
        std::cout << "conquest_order: " << conquest_order << std::endl;
        std::cout << "\n"
                  << std::endl;
    }
};

class experience
{
public:
    int growth_rate_id;
    int level;
    int experienc;

    experience(int gri, int l, int e)
    {
        growth_rate_id = gri;
        level = l;
        experienc = e;
    }

    void display()
    {
        std::cout << "growth_rate_id: " << growth_rate_id << std::endl;
        std::cout << "level: " << level << std::endl;
        std::cout << "experience: " << experienc << std::endl;
        std::cout << "\n" << std::endl;
    }
};

class pokemon_stats
{
public:
    int pokemon_id;
    int stat_id;
    int base_stat;
    int effort;

    pokemon_stats(int pi, int si, int bs, int e)
    {
        pokemon_id = pi;
        stat_id = si;
        base_stat = bs;
        effort = e;
    }

    void display()
    {
        std::cout << "pokemon_id: " << pokemon_id << std::endl;
        std::cout << "stat_id: " << stat_id << std::endl;
        std::cout << "base_stat: " << base_stat << std::endl;
        std::cout << "effort: " << effort << std::endl;
        std::cout << "\n" << std::endl;
    }
};

class stats{
    public:
    int id;
    int damage_class_id;
    std::string identifier;
    int is_battle_only;
    int game_index;

    stats(int i, int dci, std::string iden, int ibo, int gi){
        id = i;
        damage_class_id = dci;
        identifier = iden;
        is_battle_only = ibo;
        game_index = gi;
    }

    void display(){
        std::cout << "id: " << id << std::endl;
        std::cout << "damage_class_id: " << damage_class_id << std::endl;
        std::cout << "identifier: " << identifier << std::endl;
        std::cout << "is_battle_only: " << is_battle_only << std::endl;
        std::cout << "game_index: " << game_index << std::endl;
        std::cout << "\n" << std::endl;
    }

};

class pokemon_types{
    public:
    int pokemon_id;
    int type_id;
    int slot;

    pokemon_types(int pi, int ti, int s){
        pokemon_id = pi;
        type_id = ti;
        slot = s;
    }

    void display(){
        std::cout << "pokemon_id: " << pokemon_id << std::endl;
        std::cout << "type_id: " << type_id << std::endl;
        std::cout << "slot: " << slot << std::endl;
        std::cout << "\n" << std::endl;
    }

};

void readFile(std::string fileName);

#endif