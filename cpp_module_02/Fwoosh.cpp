#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}


Fwoosh::~Fwoosh()
{
}

Fwoosh::Fwoosh(const Fwoosh& other) : ASpell("Fwoosh", "fwooshed")
{
    *this = other;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->effects = other.effects;
    }
    return *this;
}

ASpell* Fwoosh::clone() const //ta hna
{
    return new Fwoosh(*this);
}

