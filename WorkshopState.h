#ifndef WORKSHOP_STATE_H_
#define WORKSHOP_STATE_H_

#include "Engine.h"

#include "State.h"

class WorkshopState : public State
{
public:
	int Run(PlayerData& data);
};

#endif