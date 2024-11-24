#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}

Dummy::Dummy(const Dummy& other) : ATarget("Target Practice Dummy")
{
    *this = other;
}

Dummy& Dummy::operator= (const Dummy& other)
{
    if (this!= &other)
    {
        type = other.getType();
    }
    return *this;   
}

Dummy::~Dummy()
{

}


ATarget* Dummy::clone() const // 
{
    return new Dummy();
}