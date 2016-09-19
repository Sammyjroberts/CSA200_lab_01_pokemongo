//
//  Pokemon.cpp
//  PokemonGo
//
//  Created by Dean Roberts on 9/13/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#include "Pokemon.hpp"

//constructors
Pokemon::Pokemon() {
    
}
Pokemon::Pokemon(std::string name, std::string type1, std::string type2) {
    this->name = name;
    this->type1 = type1;
    this->type2 = type2;
}
//destructors
Pokemon::~Pokemon() {
    
}
//member funcs
std::string Pokemon::getName() {
        return this->name;
}
std::string Pokemon::getType1() {
        return this->type1;
}
std::string Pokemon::getType2() {
        return this->type2;
}

//overloaded operators
std::ostream& operator<<(std::ostream& os, const Pokemon p)
{
    std::string type2OutputString = "";
    if(p.type2 != "NULL") {
        type2OutputString = " " + p.type2;
    }
    os << p.name << ": " << p.type1 << type2OutputString;
    return os;
}
