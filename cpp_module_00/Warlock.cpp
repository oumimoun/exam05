#include "Warlock.hpp"

Warlock::Warlock() : name("") , title("") {}

Warlock::Warlock(std::string name, std::string title) : name(name) , title(title) 
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& other)
{
    *this = other;
}

Warlock& Warlock::operator=(const Warlock& other)
{
    if (this != &other)
    {
        name = other.name;
        title = other.title;
    }
    return *this;
}

std::string const & Warlock::getName() const 
{
    return name;
}

std::string const & Warlock::getTitle() const
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


