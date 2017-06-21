#include "BattleField.h"


enum Action {
	Place_Ship,
	Shoot_Ship
};
BattleField::BattleField(std::vector< std::vector<int> > battleField) {
	BattleField::battleField_ = battleField;
}

int BattleField::Shoot(int x, int y) {
	return battleField_[x][y] &= Action::Shoot_Ship;
}
BattleField::BattleField() {}

std::vector< std::vector<int> > BattleField::Get() {
	return battleField_;
}

bool BattleField::isUsed(int x, int y) {
	return Action::Shoot_Ship != battleField_[x][y] & Shoot_Ship;
}

int BattleField::GetPoint(int x, int y) {
	if (battleField_.size() > x && battleField_[x].size() > y)
		return battleField_[x][y];
	else
		return -1;
}
BattleField::~BattleField() {}