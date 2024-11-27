#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::TargetGenerator(const TargetGenerator& other)
{
    *this = other;
}

TargetGenerator::~TargetGenerator()
{
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& other)
{
    if (this!= &other)
    {
        map = other.map;
    }
    return *this;
}

void TargetGenerator::learnTargetType(ATarget * target)
{
    if (map.find(target->getType()) == map.end())
    {
        map[target->getType()] = target;
    }
    
}

void TargetGenerator::forgetTargetType(std::string const & targetName)
{
    if (map.find(targetName) != map.end())
    {
        map.erase(targetName);
    }
    
}

ATarget* TargetGenerator::createTarget(std::string const & targetName)
{
    ATarget *temp = NULL;
    if (map.find(targetName) != map.end())
    {
        temp =  map[targetName];
    }
    return temp;
}
