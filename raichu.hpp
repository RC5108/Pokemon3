#ifndef RAICHU_HPP
#define RAICHU_HPP

#include "pokemon.hpp"

class Raichu : public Pokemon {
public:
    Raichu(int hp, int atk, int def, int level);
    Raichu();
    void thunderShock(Pokemon& target);
};

#endif
