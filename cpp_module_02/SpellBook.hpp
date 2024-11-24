#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    std::map<std::string , ASpell*> _book;
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
