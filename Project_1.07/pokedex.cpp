#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>

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

void displayExperience(std::vector<experience> &exp)
{
    for (auto e : exp)
    {
        e.display();
    }
}

void displayPokemonStats(std::vector<pokemon_stats> &ps)
{
    for (auto s : ps)
    {
        s.display();
    }
}

void displayStats(std::vector<stats> &sta)
{
    for (auto st : sta)
    {
        st.display();
    }
}

void displayPokemonTypes(std::vector<pokemon_types> &pt)
{
    for (auto p : pt)
    {
        p.display();
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

    else if (fileName == "experience")
    {
        std::vector<experience> exp;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

            int growth_rate_id;
            int level;
            int experienc;
            std::string tmp;

            std::getline(iStream, tmp, ',');
            growth_rate_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            level = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            experienc = atoi(tmp.c_str());

            experience p(growth_rate_id, level, experienc);
            exp.push_back(p);
            line = "";
        }
        displayExperience(exp);
    }

    else if (fileName == "pokemon_stats")
    {
        std::vector<pokemon_stats> ps;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

            int pokemon_id;
            int stat_id;
            int base_stat;
            int effort;
            std::string tmp;

            std::getline(iStream, tmp, ',');
            pokemon_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            stat_id = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            base_stat = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            effort = atoi(tmp.c_str());

            pokemon_stats p(pokemon_id, stat_id, base_stat, effort);
            ps.push_back(p);
            line = "";
        }
        displayPokemonStats(ps);
    }

    else if (fileName == "stats")
    {
        std::vector<stats> sta;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

            int id;
            int damage_class_id;
            std::string identifier;
            int is_battle_only;
            int game_index;

            std::string tmp;

            std::getline(iStream, tmp, ',');
            id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            damage_class_id = atoi(tmp.c_str());

            getline(iStream, identifier, ',');

            std::getline(iStream, tmp);
            is_battle_only = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            game_index = atoi(tmp.c_str());

            stats p(id, damage_class_id, identifier, is_battle_only, game_index);
            sta.push_back(p);
            line = "";
        }
        displayStats(sta);
    }

    else if (fileName == "pokemon_types")
    {
        std::vector<pokemon_types> pt;

        while (std::getline(inputFile, line))
        {
            std::stringstream iStream(line);

            int pokemon_id;
            int type_id;
            int slot;
            std::string tmp;

            std::getline(iStream, tmp, ',');
            pokemon_id = atoi(tmp.c_str());

            std::getline(iStream, tmp, ',');
            type_id = atoi(tmp.c_str());

            std::getline(iStream, tmp);
            slot = atoi(tmp.c_str());

            pokemon_types p(pokemon_id, type_id, slot);
            pt.push_back(p);
            line = "";
        }
        displayPokemonTypes(pt);
    }

    else
    {
        std::cout << "Are you sure that's the file you want?  I'm pretty sure thats a typo" << std::endl;
    }

    if (!inputFile.is_open())
    {
        std::string path = strcat(std::getenv("HOME"), "/.poke327/pokedex/pokedex/pokedex/data/csv");
        inputFile.open(path + fileName + ".csv");

        line = "";

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

        else if (fileName == "experience")
        {
            std::vector<experience> exp;

            while (std::getline(inputFile, line))
            {
                std::stringstream iStream(line);

                int growth_rate_id;
                int level;
                int experienc;
                std::string tmp;

                std::getline(iStream, tmp, ',');
                growth_rate_id = atoi(tmp.c_str());

                std::getline(iStream, tmp, ',');
                level = atoi(tmp.c_str());

                std::getline(iStream, tmp);
                experienc = atoi(tmp.c_str());

                experience p(growth_rate_id, level, experienc);
                exp.push_back(p);
                line = "";
            }
            displayExperience(exp);
        }

        else if (fileName == "pokemon_stats")
        {
            std::vector<pokemon_stats> ps;

            while (std::getline(inputFile, line))
            {
                std::stringstream iStream(line);

                int pokemon_id;
                int stat_id;
                int base_stat;
                int effort;
                std::string tmp;

                std::getline(iStream, tmp, ',');
                pokemon_id = atoi(tmp.c_str());

                std::getline(iStream, tmp, ',');
                stat_id = atoi(tmp.c_str());

                std::getline(iStream, tmp);
                base_stat = atoi(tmp.c_str());

                std::getline(iStream, tmp);
                effort = atoi(tmp.c_str());

                pokemon_stats p(pokemon_id, stat_id, base_stat, effort);
                ps.push_back(p);
                line = "";
            }
            displayPokemonStats(ps);
        }

        else if (fileName == "stats")
        {
            std::vector<stats> sta;

            while (std::getline(inputFile, line))
            {
                std::stringstream iStream(line);

                int id;
                int damage_class_id;
                std::string identifier;
                int is_battle_only;
                int game_index;

                std::string tmp;

                std::getline(iStream, tmp, ',');
                id = atoi(tmp.c_str());

                std::getline(iStream, tmp, ',');
                damage_class_id = atoi(tmp.c_str());

                getline(iStream, identifier, ',');

                std::getline(iStream, tmp);
                is_battle_only = atoi(tmp.c_str());

                std::getline(iStream, tmp);
                game_index = atoi(tmp.c_str());

                stats p(id, damage_class_id, identifier, is_battle_only, game_index);
                sta.push_back(p);
                line = "";
            }
            displayStats(sta);
        }

        else if (fileName == "pokemon_types")
        {
            std::vector<pokemon_types> pt;

            while (std::getline(inputFile, line))
            {
                std::stringstream iStream(line);

                int pokemon_id;
                int type_id;
                int slot;
                std::string tmp;

                std::getline(iStream, tmp, ',');
                pokemon_id = atoi(tmp.c_str());

                std::getline(iStream, tmp, ',');
                type_id = atoi(tmp.c_str());

                std::getline(iStream, tmp);
                slot = atoi(tmp.c_str());

                pokemon_types p(pokemon_id, type_id, slot);
                pt.push_back(p);
                line = "";
            }
            displayPokemonTypes(pt);
        }
    }

    inputFile.close();
}