#include "Ball.hpp"
#include "../GameProperties.hpp"

#include <random>

Ball::Ball()
  : sf::CircleShape(20.0f)
{
  
  this->setFillColor(sf::Color(149, 165, 166));
  this->setOrigin(sf::Vector2f(this->getRadius(), this->getRadius()));
  this->setPosition(sf::Vector2f(100.0f, 100.0f));

  this->velocity = {0.0f, 0.0f};
  this->acceleration = {150.5f, -150.0f};
}

void Ball::AutoMove() {

  this->velocity = {this->acceleration.x * Game::DELTATIME , this->acceleration.y * Game::DELTATIME};
  
  this->move(this->velocity);
}

void Ball::CollisionWall(const sf::Vector2f &sizeWindow) {
  if (this->getPosition().x < 0) {
    this->acceleration.x = this->RandomAcceleration();
  }
  else if (this->getPosition().x >= sizeWindow.x) {
    this->acceleration.x = this->RandomAcceleration() * -1;
  }

  if (this->getPosition().y < 0) { 
    this->acceleration.y = this->RandomAcceleration();
  }
  else if (this->getPosition().y >= sizeWindow.y) {
    this->acceleration.y = this->RandomAcceleration() * -1;
  }
}

void Ball::CollisionVaus(const sf::Shape &vaus) {
  if (this->getGlobalBounds().findIntersection(vaus.getGlobalBounds())) {
    this->acceleration.y *= -1;
  }
}

float Ball::RandomAcceleration() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution urd(150.0, 180.0);

    return static_cast<float>(urd(gen));
}
