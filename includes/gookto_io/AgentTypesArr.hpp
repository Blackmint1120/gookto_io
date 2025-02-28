/**
 * STS19 Captain
 * @file : AgentTypesArr.hpp
 * @version : 1.0
 * @author : Jeyun Kim
 */

#ifndef AGENTTYPESARR_H
#define AGENTTYPESARR_H

#include <map>
#include "InputAgentTypes.hpp"

class AgentTypesArr
{
private:
    std::map<int, InputAgentTypes> vehTypes;

public:
    AgentTypesArr();

    //access function
    InputAgentTypes getAgentType(int type) { return vehTypes.find(type)->second; }
};


#endif