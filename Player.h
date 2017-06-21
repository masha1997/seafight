#include "BattleField.h"
#include "IPlayerObservable.h"
#include"IPlayerObserver.h"
#include "GameController.h"

#pragma once
class Player
{
private:
	BattleField battelField_;
	std::initializer_list<GameController> games;
	
public:
	Player(BattleField battelField);
	Player();
	virtual int MakeShoot(Player& player, int x, int y);
	void HandleMoveEvent();
};

