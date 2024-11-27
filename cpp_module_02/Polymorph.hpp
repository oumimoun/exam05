#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
private:

public:
    Polymorph();
    ~Polymorph();
    ASpell* clone() const;

};



#endif