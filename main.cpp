#include "Engine.h"

#include "State.h"
#include "BattlefieldState.h"
#include "MapState.h"
#include "WorkshopState.h"
#include "MenuState.h"

#include "PlayerData.h"

int main()
{
	State* states[4];
	PlayerData playerData;

	states[0] = new MenuState;
	states[1] = new MapState;
	states[2] = new WorkshopState;
	states[3] = new BattlefieldState;

	int currentState = 2;

	while(currentState != -1)
	{
		currentState = states[currentState]->Run(playerData);
	}

	return 0;
}