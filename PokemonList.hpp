//
//  PokemonList.hpp
//  PokemonGo
//
//  Created by Dean Roberts on 9/13/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#ifndef PokemonList_hpp
#define PokemonList_hpp
#include "Pokemon.hpp"
#include <string>
using namespace std;
class PokemonList {
    friend std::ostream& operator<<(std::ostream& os, const PokemonList &p);
public:
    PokemonList();
    ~PokemonList();
    void addPokemon(string name, string type1, string type2);
    int getTotalNoPokemon();
    int getCapacity();
    void printPokemon(string name);
    void printPokemonTypes(string type1);
    void printPokemonTypes(string type1, string type2);
private:
    Pokemon *pokemonList;
    int totalPokemon;
    int listCapacity;
    const int INITIAL_CAPACITY = 200;
    const int TO_INCREASE = 50;
    
};


#endif /* PokemonList_hpp */
