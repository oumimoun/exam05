#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook& other) 
{
    *this = other;
}

SpellBook& SpellBook::operator=(const SpellBook& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            _book[i] = other._book[i];
        }
        
    }
    return *this;
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (!spell)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_book[i] == NULL)
        {
            _book[i] = spell;
            return;
        }
    }
}

void SpellBook::forgetSpell(std::string const &spelName)
{
    for (int i = 0; i < 4; i++)
    {
        if (_book[i]->getName() == spelName)
        {
            _book[i] = NULL;
            return;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    for (int i = 0; i < 4; i++)
    {
        if (_book[i]->getName() == spellName)
        {
            return _book[i];
        }
    }
    return NULL;
}
