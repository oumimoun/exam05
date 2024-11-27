#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    SpellBook(const SpellBook& other);
    SpellBook& operator=(const SpellBook& other);
    std::map<std::string, ASpell*> map;
    
public:
    SpellBook();

    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

    
};


#endif