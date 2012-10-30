#ifndef PLAYER_DATA_H_
#define PLAYER_DATA_H_

#include <string>

class PlayerData
{
	std::string playerName;
	int gold;

public:
	PlayerData(std::string name = "Player", int gold = 0);

	std::string GetPlayerName() { return playerName; }
	int GetGold() { return gold; }

	void SetPlayerName(std::string name) { playerName = name; }
	void AddGold(int addedGold) { gold += addedGold; }
	bool OdejmijGold(int odjeteGold);

	bool SaveToFile();
};

#endif