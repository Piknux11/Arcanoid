#ifndef VAUS_HPP
#define VAUS_HPP

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Window/Keyboard.hpp>

class Vaus : public sf::RectangleShape {
public:
  Vaus(const sf::Vector2u &);

  void MoveVaus();

private:
  sf::Vector2f velocity;
  sf::Vector2f acceleration;
};

#endif
