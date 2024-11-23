#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{}

Polymorph::Polymorph(const Polymorph& other) : ASpell("Polymorph", "turned into a critter")
{
    *this = other;
}

Polymorph& Polymorph::operator=(const Polymorph& other)
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

Polymorph* Polymorph::clone() const
{
    return new Polymorph();
}

Polymorph::~Polymorph() {}

