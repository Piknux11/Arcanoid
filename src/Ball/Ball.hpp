#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Rect.hpp>

class Ball : public sf::CircleShape {
public:
  Ball();

  void AutoMove();

  void CollisionWall(const sf::Vector2f &);
  void CollisionVaus(const sf::Shape &);
  
private:
  sf::Vector2f velocity;
  sf::Vector2f acceleration;

  float RandomAcceleration();
};

#endif
