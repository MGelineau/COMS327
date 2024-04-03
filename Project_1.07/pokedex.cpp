#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "pokedex.h"

void displayPokemon(std::vector<pokemon> &pokemons)
{
    for (auto p : pokemons)
    {
        p.display();
    }
}

void displayMoves(std::vector<moves> &movess)
{
    for (auto m : movess)
    {
        m.display();
    }
}

void displayPokemonMoves(std::vector<pokemon_moves> &pms)
{
    for (auto m : pms)
    {
        m.display();
    }
}

void displayPokemonSpecies(std::vector<pokemon_species> &pokeSpec)
{
    for (auto ps : pokeSpec)
    {
        ps.display();
    }
}

void readFile(std::string fileName)
{
    std::ifstream inputFile;
    inputFile.open("/share/cs327/pokedex/pokedex/data/csv/" + fileName + ".csv");
    std::string line = "";

    std::getline(inputFile, line);
    line = "";

    if (fileName == "pokemon")
    {
        std::vector<pokemon> pokemons;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

            int id;
            std::string identifier;
            int species_id;
            int height;
            int weight;
            int base_experience;
            int order;
            int is_default;
            std::string tmp;

            std::getline(iStream, tmp, ',');
            id = atoi(tmp.c_str());

            getline(iStream, identifier, ',');

            std::getline(iStream, tmp, ',');
            species_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            height = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            weight = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            base_experience = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            order = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            is_default = atoi(tmp.c_str());

            pokemon poke(id, identifier, species_id, height, weight, base_experience, order, is_default);
            pokemons.push_back(poke);
            line = "";
        }

        displayPokemon(pokemons);
    }

    else if (fileName == "moves")
    {
        std::vector<moves> movess;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

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
            std::string tmp;

            std::getline(iStream, tmp, ',');
            id = atoi(tmp.c_str());

            getline(iStream, identifier, ',');

            std::getline(iStream, tmp, ',');
            gen_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            type_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            power = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            pp = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            accuracy = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            priority = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            target_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            damage_class_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            effect_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            effect_chance = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            contest_type_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            contest_effect_id = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            super_contest_effect_id = atoi(tmp.c_str());

            moves m(id, identifier, gen_id, type_id, power, pp, accuracy, priority, target_id, damage_class_id, effect_id, effect_chance, contest_type_id, contest_effect_id, super_contest_effect_id);
            movess.push_back(m);
            line = "";
        }

        displayMoves(movess);
    }

    else if (fileName == "pokemon_moves")
    {

        std::vector<pokemon_moves> pms;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

            int pokemon_id;
            int version_group_id;
            int move_id;
            int pokemon_move_method_id;
            int level;
            int order;
            std::string tmp;

            std::getline(iStream, tmp, ',');
            pokemon_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            version_group_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            move_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            pokemon_move_method_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            level = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            order = atoi(tmp.c_str());

            pokemon_moves p(pokemon_id, version_group_id, move_id, pokemon_move_method_id, level, order);
            pms.push_back(p);
            line = "";
        }

        displayPokemonMoves(pms);
    }

    else if (fileName == "pokemon_species")
    {
        std::vector<pokemon_species> pokeSpec;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

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
            std::string tmp;

            std::getline(iStream, tmp, ',');
            id = atoi(tmp.c_str());

            getline(iStream, identifier, ',');

            std::getline(iStream, tmp, ',');
            generation_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            evolves_from_species_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            evolution_chain_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            color_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            shape_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            habitat_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            gender_rate = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            capture_rate = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            base_happiness = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            is_baby = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            hatch_counter = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            has_gender_differences = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            growth_rate_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            forms_switchable = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            is_legendary = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            is_mythical = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            order = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            conquest_order = atoi(tmp.c_str());

            pokemon_species p(id, identifier, generation_id, evolves_from_species_id, evolution_chain_id, color_id, shape_id, habitat_id, gender_rate, capture_rate, base_happiness, is_baby, hatch_counter, has_gender_differences, growth_rate_id, forms_switchable, is_legendary, is_mythical, order, conquest_order);
            pokeSpec.push_back(p);
            line = "";
        }

        displayPokemonSpecies(pokeSpec);
    }
}