#include "GameController.h"

#pragma once
class IPlayerObservable
{
public:
	virtual void AddGame(GameController gameController);
	virtual void NotifyGame(const GameController& gameController);
	virtual void ExitGame(GameController gameController);
};

