#include "AutoPlayer.h"



AutoPlayer::AutoPlayer() {}


AutoPlayer::~AutoPlayer() {}

std::pair<int, int> AutoPlayer::ChooseNextPoint() {
	//code goes here
}

AutoPlayer::AutoPlayer(BattleField battelField) : Player::Player(battelField) {}

int AutoPlayer::MakeShoot(Player& player, int x = 0, int y = 0) {
	Player::MakeShoot(player, ChooseNextPoint().first, ChooseNextPoint().second);
}
