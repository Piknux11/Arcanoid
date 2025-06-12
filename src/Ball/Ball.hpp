#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics/CircleShape.hpp>

class Ball : public sf::CircleShape {
public:
  Ball();

  void autoMove();

  void collisionWall(sf::Vector2f &);

private:
  sf::Vector2f velocity;
  sf::Vector2f acceleration;
};

#endif
