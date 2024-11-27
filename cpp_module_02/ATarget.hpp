#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
    std::string type;

public:
    ATarget();
    ATarget(std::string type);
    ATarget(const ATarget& other);
    ATarget& operator=(const ATarget& other);
    virtual ~ATarget();

    std::string const& getType() const;

    virtual ATarget* clone() const = 0;

    void getHitBySpell(const ASpell& spell) const;
};


#endif
