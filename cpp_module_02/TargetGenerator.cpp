#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& other)
{
    *this = other;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& other)
{
    if (this != &other)
    {
        _target = other._target;
    }
    return *this;
}


void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
    {
        _target[target->getType()] = target;
    }
}


void TargetGenerator::forgetTargetType(std::string const &targetType)
{
    if (_target.find(targetType) != _target.end())
        _target.erase(_target.find(targetType));
}


ATarget* TargetGenerator::createTarget(std::string const &targetType)
{
    ATarget* temp = NULL;
    if (_target.find(targetType) != _target.end())
        temp = _target[targetType];
    return temp;
}

