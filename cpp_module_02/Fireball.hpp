#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
    Fireball();
    Fireball(const Fireball& other);

    Fireball& operator=(const Fireball& other);
    ~Fireball();

    ASpell* clone() const ; //hna

};



#endif