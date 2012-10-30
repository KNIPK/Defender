#ifndef BATTLEFIELD_STATE_H_
#define BATTLEFIELD_STATE_H_

#include "Engine.h"

#include "State.h"

class BattlefieldState : public State
{
public:
	int Run(PlayerData& data);
};

#endif

