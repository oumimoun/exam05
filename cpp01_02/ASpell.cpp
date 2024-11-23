#include "ASpell.hpp"

ASpell::ASpell() : name(""), effects("") 
{

}

ASpell::ASpell(std::string name, std::string effects) : name(name) , effects(effects)
{

}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell & other) 
{
    *this = other;
}

ASpell &ASpell::operator=(const ASpell& other)
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

std::string ASpell::getName() const
{
    return name;
}

std::string ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell(*this);
}
