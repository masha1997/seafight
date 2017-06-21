#pragma once
class IGameObservable
{
public:
	virtual void AddPlayer(Player player);
	virtual void NotifyPlayer(const Player& player);
	virtual void RemovePlayer(Player player);
};

