#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"

class SpellBook
{
private:
    ASpell* _book[4];
    SpellBook(const SpellBook& other);
    SpellBook& operator=(const SpellBook& other);

public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
    
};

#endif
