#ifndef MENU_STATE_H_
#define MENU_STATE_H_

#include "State.h"
class MenuState : public State
{
public:
	int Run(PlayerData& data);
};

#endif