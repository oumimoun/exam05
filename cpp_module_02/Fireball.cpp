#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}

Fireball::Fireball(const Fireball& other) : ASpell("Fireball", "burnt to a crisp")
{
    *this = other;
}

Fireball& Fireball::operator=(const Fireball& other) 
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

Fireball::~Fireball() {}

ASpell* Fireball::clone() const // hna
{
    return (new Fireball());
}