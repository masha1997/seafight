#include "AutoPlayer.h"
#include "Player.h"
#include <utility>

#pragma once
class Game
{
private:
	Player humanPlayer_;
	//AutoPlayer autoPlayer_;
	int scoreHumanPlayer_;
	int scoreAutoPlayer_;
public:
	Game();
	//Game(Player player, AutoPlayer autoPlayer, int scoreHumanPlayer, int scoreAutoPlayer);
	~Game();
	std::pair<int, int> GetScore();
};

