#include "MainWindow.hpp"

MainWindow::MainWindow() 
  : sf::RenderWindow(sf::VideoMode({500,500}), "Arcanoid", sf::Style::Default, sf::State::Fullscreen) {
        
  this->setFramerateLimit(60);
    
}

void MainWindow::run() {
  while (this->isOpen()) {
        
    while (const std::optional event = this->pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
	this->close();
      }
    }

    this->clear(sf::Color::Black);
    
    // Aquí puedes dibujar
    
    this->display();
  }
}
