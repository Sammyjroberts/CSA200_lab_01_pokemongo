//
//  Pokemon.hpp
//  PokemonGo
//
//  Created by Dean Roberts on 9/13/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#ifndef Pokemon_hpp
#define Pokemon_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Pokemon {
private:
    std::string name;
    std::string type1;
    std::string type2 = "NULL";
public:
    Pokemon();
    Pokemon(std::string name, std::string type1, std::string type2);
    std::string getName();
    std::string getType1();
    std::string getType2();
    friend std::ostream& operator<<(std::ostream& os, const Pokemon p);
    ~Pokemon();
};

#endif /* Pokemon_hpp */
