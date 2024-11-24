#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
private:
    
public:
    Fwoosh();
    Fwoosh(const Fwoosh& other);
    Fwoosh & operator=(const Fwoosh& other);
    ~Fwoosh();

    ASpell* clone() const;

};


#endif
