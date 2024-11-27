#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
private:
    std::map<std::string , ASpell*> _templates;
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

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string spellName);
    void launchSpell(std::string spellName, ATarget const & target);

};


#endif
