#include <fstream>

#include "PlayerData.h"

PlayerData::PlayerData(std::string name, int gold)
{
	playerName = name;
	PlayerData::gold = gold;
}

bool PlayerData::SaveToFile()
{
	// Do zrobienia
	return true;
}