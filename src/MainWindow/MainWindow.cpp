#include "MainWindow.hpp"

MainWindow::MainWindow() 
  : sf::RenderWindow(sf::VideoMode({500,500}), "Arcanoid", sf::Style::Default, sf::State::Windowed) {
        
  this->setFramerateLimit(game::FRAMES);
    
}

void MainWindow::run() {
  Ball *ball = new Ball();
  while (this->isOpen()) {
        
    while (const std::optional event = this->pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
	this->close();
      }
    }

    this->clear(sf::Color::White);
    
    this->draw(*ball);

    ball->autoMove();
    
    this->display();
  }

  delete ball;
}
