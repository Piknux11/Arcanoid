/**
 * @file MainWindow.cpp
 * @brief Se declaran los metodos de MainWindow.h
 */

#include "../include/MainWindow.h"
#include <iostream>

Game::MainWindow::MainWindow()
: sf::RenderWindow(sf::VideoMode({500,500}), "Arcanoid", sf::Style::Default, sf::State::Windowed) {}

Game::MainWindow::MainWindow(const sf::Vector2u &windowSize)
: sf::RenderWindow(sf::VideoMode(windowSize), "Arcanoid", sf::Style::Default, sf::State::Windowed) {}

void Game::MainWindow::RunWindow() {
  sf::Clock clock;
  
  while (this->isOpen()) {

    this->EventWindow();

    system("clear");
    std::cout << this->GetIfHasFocus() << "\n";

    this->clear();
    this->display();
  }

  sf::Time time = clock.getElapsedTime();

  std::cout << time.asSeconds() << std::endl;
}

bool Game::MainWindow::GetIfHasFocus() const {
    return this->hasFocus();
}

void Game::MainWindow::EventWindow() {
    while (const std::optional<sf::Event> event = this->pollEvent()) {
        this->EventCloseWindow(event);
    }
}

void Game::MainWindow::EventCloseWindow(const std::optional<sf::Event> &event) {
    if (event->is<sf::Event::Closed>()) {
        this->close();
    }
    else if (const auto keyClose = event->getIf<sf::Event::KeyPressed>()) {
        if (keyClose->scancode == sf::Keyboard::Scancode::Escape) {
            this->close();
        }
    }
}

bool Game::MainWindow::RunGame() {
    return 0; 
}
