//#include "Game.h"
#include"BattleField.h"
#include "IGameObservable.h"
#include "IGameObserver.h"
#include "Statictics.h"

#pragma once

class GameController
{
private:
	Game currGame;
	void AddStatictics(Statictics statictics);
public:
	BattleField RandomizeBattleField();
	BattleField ConstructBattleField();
	int isValid(BattleField battleField);
//	GameController(Game currGame);
	~GameController();
	void AddPlayer(Player player);
	void NotifyPlayer(const Player& player);
	void RemovePlayer(Player player);
	void AfterMoveUpdate();
};

