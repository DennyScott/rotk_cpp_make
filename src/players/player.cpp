#include "players/player.h"

Player::Player(std::string _name)
{
  name = _name;
  health = 50;
}

std::string Player::getName()
{
  return name;
}

void Player::clearCards()
{
  doClearCards();
}

void Player::doClearCards()
{
  hand.clear();
}


