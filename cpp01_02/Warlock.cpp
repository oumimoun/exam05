#include "Warlock.hpp"

Warlock::Warlock() : name(""), title("")
{
    for (int i = 0; i < 4; i++)
    {
        _templates[i] = NULL;
    }
}

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
    for (int i = 0; i < 4; i++)
    {
        _templates[i] = NULL;
    }
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
        for (int i = 0; i < 4; i++)
        {
            // delete
            if (other._templates[i])
            {
                _templates[i] = other._templates[i];
            }
            _templates[i] = NULL;
        }
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

void Warlock::learnSpell(ASpell *aspell)
{
    if (!aspell)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_templates[i] == NULL)
        {
            _templates[i] = aspell;
            return;
        }
    }
}

void Warlock::forgetSpell(std::string spellName)
{
    for (int i = 0; i < 4; i++)
    {
        if (_templates[i]->getName() == spellName && _templates[i] != NULL)
        {
            _templates[i] = NULL;
            return;
        }
    }
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
    for (int i = 0; i < 4; i++)
    {
        if (_templates[i])
        {
            if (_templates[i]->getName() == spellName)
            {
                _templates[i]->launch(target);
                return;
            }
        }
    }
}
