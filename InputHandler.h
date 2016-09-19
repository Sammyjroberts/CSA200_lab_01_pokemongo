//
//  InputHandler.h
//  PokemonGo
//
//  Created by Dean Roberts on 9/13/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#ifndef InputHandler_h
#define InputHandler_h

#include "PokemonList.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void createPokemonList(ifstream& infile, PokemonList& pokemonList)
{
    string  name, type1, type2;
    
    while (!infile.eof())
    {
        infile >> name >> type1 >> type2;
        
        pokemonList.addPokemon(name, type1, type2);
    }
}

void readPokemonData(PokemonList& pokemonList)
{
    ifstream infile;
    
    infile.open("pokemon_database.txt");
    
    if (!infile)
    {
        cerr << "Input file does not exist." << endl;
        exit(1);
    }
    
    createPokemonList(infile, pokemonList);
    
    infile.close();
}


#endif /* InputHandler_h */
