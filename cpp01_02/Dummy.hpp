#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
    Dummy();
    Dummy(const Dummy& other);
    Dummy& operator=(const Dummy& other);
    ~Dummy();

    ATarget* clone() const; // hna
};



#endif