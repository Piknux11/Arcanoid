#include "Ball.hpp"

Ball::Ball()
  : sf::CircleShape(50.0f)
{
  this->setFillColor(sf::Color(149, 165, 166));
  this->setPosition(sf::Vector2f(100.0f, 100.0f));
}

void Ball::autoMove() {
  this->move(sf::Vector2f(1.0f,1.0f));
}
