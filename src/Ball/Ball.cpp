#include "Ball.hpp"


Ball::Ball()
  : sf::CircleShape(20.0f)
{
  this->setFillColor(sf::Color(149, 165, 166));

  this->setOrigin(sf::Vector2f(this->getRadius(), this->getRadius()));
  
  this->setPosition(sf::Vector2f(100.0f, 100.0f));

  this->velocity = {0.0f, 0.0f};
  this->acceleration = {20.5f, -20.0f};
}

void Ball::autoMove() {

  this->velocity = {this->acceleration.x * 0.016f , this->acceleration.y * 0.016f};
  
  this->move(this->velocity);
}

void Ball::collisionWall(sf::Vector2f &sizeWindow) {
  if (this->getPosition().x < 0 || this->getPosition().x >= sizeWindow.x) {
    this->acceleration.x *= -1;
  }

  if (this->getPosition().y < 0 || this->getPosition().y >= sizeWindow.y) {
    this->acceleration.y *= -1;
  }
}
