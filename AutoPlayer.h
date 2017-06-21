#pragma once
#include "Player.h"
#include <list>
#include <utility>

class AutoPlayer : public Player
{
private:
	std::list<std::pair<int, int>> plan;
	std::pair<int, int> ChooseNextPoint();
public:
	AutoPlayer();
	AutoPlayer(BattleField battelField);
	int MakeShoot(Player& player, int x = 0, int y = 0);
	~AutoPlayer();
};

