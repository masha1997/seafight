#include "Player.h"


Player::Player(BattleField battelField) {
	this->battelField_ = battelField;
}

Player::Player() {}

int Player::MakeShoot(Player& player, int x, int y) {
	return player.battelField_.Shoot(x, y);
}
