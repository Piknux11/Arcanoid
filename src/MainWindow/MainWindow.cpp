#include "MainWindow.hpp"
#include "../GameProperties.hpp"
#include "../Ball/Ball.hpp"
#include "../Vaus/Vaus.hpp"

MainWindow::MainWindow() 
  : sf::RenderWindow(sf::VideoMode({500,500}), "Arcanoid", sf::Style::Default, sf::State::Windowed) {
        
  this->setFramerateLimit(Game::FRAMERATE);
    
}


void MainWindow::WindowRun() {
  
  Ball *ball = new Ball();
  Vaus *vaus = new Vaus(this->getSize());
  
  sf::Vector2f sizeWindow = static_cast<sf::Vector2f>(this->getSize());
  
  while (this->isOpen()) {
        
    while (const std::optional event = this->pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
	this->close();
      }
    }

    this->clear(sf::Color::Black);

    this->draw(*vaus);
    this->draw(*ball);

    vaus->MoveVaus();

    ball->AutoMove();
    ball->CollisionWall(sizeWindow);
    ball->CollisionVaus(*vaus);
    
    this->display();
  }

  delete ball;
  delete vaus;
}
