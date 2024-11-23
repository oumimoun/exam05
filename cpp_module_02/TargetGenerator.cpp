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
        // 
    }
    return *this;
}


void TargetGenerator::learnTargetType(ATarget* target)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->target[i] == NULL)
        {
            this->target[i] = target;
            return;
        }
    }
}


void TargetGenerator::forgetTargetType(std::string const &targetType)
{
    for (int i = 0; i < 4; i++)
    {
        if (target[i]->getType() == targetType)
        {
            target[i] = NULL;
            return;
        }
    }
}


ATarget* TargetGenerator::createTarget(std::string const &targetType)
{
    ATarget* tmp = NULL;
    for (int i = 0; i < 4; i++)
    {
        tmp = target[i]; // ghy tankhwer
    }
    return tmp;
}

