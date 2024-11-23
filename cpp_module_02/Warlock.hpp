#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
private:
    SpellBook _SpellBook;
    std::string name;
    std::string title;
    Warlock();
    Warlock& operator=( const Warlock& other);
    Warlock(const Warlock& other);

public:
    Warlock(std::string name, std::string title);
    ~Warlock();

    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle( const std::string &title);

    void introduce() const;

    void learnSpell(ASpell* aspell);
    void forgetSpell(std::string spellName);
    void launchSpell(std::string spellName, ATarget& target);

};


#endif
