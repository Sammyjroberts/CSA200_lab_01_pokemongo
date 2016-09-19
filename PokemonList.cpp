//
//  PokemonList.cpp
//  PokemonGo
//
//  Created by Dean Roberts on 9/13/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#include "PokemonList.hpp"
PokemonList::~PokemonList() {
    
}
PokemonList::PokemonList() {
    totalPokemon = 0;
    listCapacity = INITIAL_CAPACITY;
    pokemonList = new Pokemon[listCapacity];
}
void PokemonList::addPokemon(string name, string type1, string type2) {
    if (listCapacity == totalPokemon) {
        Pokemon *newList = new Pokemon[listCapacity+TO_INCREASE];
        for(int i = 0; i < totalPokemon; i++) {
            newList[i] = pokemonList[i];
        }
        pokemonList = newList;
        
    }
    Pokemon p(name,type1,type2);
    this->pokemonList[totalPokemon] = p;
    totalPokemon++;
}
std::ostream& operator<<(std::ostream& os, const PokemonList &p) {
    for(int i = 0; i < p.totalPokemon; i++) {
        os << p.pokemonList[i] << std::endl;
    }
    return os;
}
int PokemonList::getTotalNoPokemon() {
    return totalPokemon;
}
int PokemonList::getCapacity() {
    return listCapacity;
}

void PokemonList::printPokemon(string name) {
    for(int i = 0; i < totalPokemon; i++) {
        if(pokemonList[i].getName() == name) {
            cout << pokemonList[i] << std::endl;
        }
    }
}
void PokemonList::printPokemonTypes(string type1) {
    for(int i = 0; i < totalPokemon; i++) {
        if(pokemonList[i].getType1() == type1) {
            cout << pokemonList[i] << std::endl;
        }
    }
}
void PokemonList::printPokemonTypes(string type1, string type2) {
    for(int i = 0; i < totalPokemon; i++) {
        if(pokemonList[i].getType1() == type1 && pokemonList[i].getType2() == type2) {
            cout << pokemonList[i] << std::endl;
        }
    }
}