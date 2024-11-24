#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
private:

public:
    Polymorph();
    Polymorph(const Polymorph& other);
    Polymorph& operator=(const Polymorph& other);
    ~Polymorph();

    ASpell* clone() const;
};

#endif
