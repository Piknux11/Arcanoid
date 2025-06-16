#include "Vaus.hpp"

#include "../GameProperties.hpp"

Vaus::Vaus(const sf::Vector2u &sizeWindow)
  : sf::RectangleShape(sf::Vector2f(80.0f, 10.0f))
{

  this->setPosition(sf::Vector2f(sizeWindow.x/2.0f, sizeWindow.y - 50));
  this->setFillColor(sf::Color::Green);

  this->velocity = {150.0f * Game::DELTATIME, 0.0f};
}

void Vaus::MoveVaus() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
    this->move({this->velocity.x * -1.0f, 0.0f});
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
    this->move(this->velocity);
  }
}
