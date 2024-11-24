#include "Warlock.hpp"

Warlock::Warlock() : name(""), title("")
{
}

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock &other)
{
    *this = other;
}

Warlock &Warlock::operator=(const Warlock &other)
{
    if (this != &other)
    {
        name = other.name;
        title = other.title;
        _templates = other._templates;
    }
    return *this;
}

std::string const &Warlock::getName() const
{
    return name;
}

std::string const &Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
    {
        if (_templates.find(spell->getName()) == _templates.end()) // tatmchi l tali d templates o tatzid spell m clonya
            _templates[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(std::string spellName)
{
    if (_templates.find(spellName) != _templates.end())
    {
        delete _templates[spellName];
        _templates.erase(_templates.find(spellName));
    }
    
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
    if (_templates.find(spellName) != _templates.end())
    {
        _templates[spellName]->launch(target);
    }
}
