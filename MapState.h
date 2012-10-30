#ifndef MAP_STATE_H_
#define MAP_STATE_H_

#include "State.h"

class MapState : public State
{
public:
	int Run(PlayerData& data);
};

#endif