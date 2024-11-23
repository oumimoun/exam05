#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"

class TargetGenerator
{
private:
    ATarget *target[4];
    TargetGenerator(const TargetGenerator& other);
    TargetGenerator& operator=(const TargetGenerator& other);
    
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget* target);
    void forgetTargetType(std::string const &targetType);
    ATarget* createTarget(std::string const &targetType);

};


#endif