#include "ATarget.hpp"


ATarget::ATarget(std::string type) : type(type)
{}

ATarget::~ATarget() {}

ATarget::ATarget(const ATarget& other)
{
    *this = other;
}

ATarget& ATarget::operator=(const ATarget& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

std::string const& ATarget::getType() const
{
    return type;
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

