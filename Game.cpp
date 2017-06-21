#include "Game.h"

Game::Game(){}


Game::~Game(){}

/*Game::Game(Player player, AutoPlayer autoPlayer, int scoreHumanPlayer, int scoreAutoPlayer) {
	humanPlayer_ = player;
	autoPlayer_ = autoPlayer;
	scoreHumanPlayer_ = scoreHumanPlayer;
	scoreAutoPlayer_ = scoreAutoPlayer;
}*/

std::pair<int, int> Game::GetScore() {
	return std::make_pair(scoreHumanPlayer_, scoreAutoPlayer_);
}
