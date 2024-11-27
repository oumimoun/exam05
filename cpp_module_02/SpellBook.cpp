#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(const SpellBook& other) 
{
    *this = other;
}

SpellBook::~SpellBook() {}

SpellBook& SpellBook::operator=(const SpellBook& other)
{
    if (this != &other)
    {
        // 
    }
    return *this;
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (map.find(spell->getName()) == map.end())
    {
        map[spell->getName()] = spell;
    }
}

void SpellBook::forgetSpell(std::string const & spellName)
{
    if (map.find(spellName) != map.end())
    {
        map.erase(spellName);
    }
}

ASpell* SpellBook::createSpell(std::string const & spellName)
{
    ASpell *temp = NULL;
    if (map.find(spellName) != map.end())
    {
        temp = map[spellName];
    }
    return temp;
}

