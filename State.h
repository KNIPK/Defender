#ifndef STATE_H_
#define STATE_H_

#include "PlayerData.h"

class State
{
public:
	virtual int Run(PlayerData& data) = 0;
};

#endif