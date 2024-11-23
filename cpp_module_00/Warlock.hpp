#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
private:
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

};


#endif
