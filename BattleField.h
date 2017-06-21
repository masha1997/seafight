#include <vector>
#pragma once


class BattleField
{
private:
	std::vector< std::vector<int> > battleField_;
	int Shoot(int x, int y);

public:
	 BattleField(std::vector< std::vector<int> > battleField);
	 BattleField();
	 ~BattleField();
	 bool isUsed(int x, int y);
	 std::vector< std::vector<int> > Get();
	 int GetPoint(int x, int y);
	 friend class Player;
};


