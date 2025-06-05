#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics/CircleShape.hpp>

class Ball : public sf::CircleShape {
public:
  Ball();

  void autoMove();
};

#endif
