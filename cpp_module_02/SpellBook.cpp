#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook &other)
{
    *this = other;
}

SpellBook &SpellBook::operator=(const SpellBook &other)
{
    if (this != &other)
    {
        _book = other._book;
    }
    return *this;
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
    {
        _book[spell->getName()] = spell;
    }
    
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    if (_book.find(spellName) != _book.end())
        _book.erase(_book.find(spellName));
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    ASpell* temp = NULL;
    if (_book.find(spellName) != _book.end())
        temp = _book[spellName];
    return temp;
}

