#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::BrickWall(const BrickWall& other) : ATarget("Inconspicuous Red-brick Wall")
{
    *this = other;
}

BrickWall& BrickWall::operator=(const BrickWall& other)
{
    if (this != &other)
    {
        type = other.getType();
    }
    return *this;
}

BrickWall::~BrickWall() {}

ATarget* BrickWall::clone() const
{
	return (new BrickWall());
}