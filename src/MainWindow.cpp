/**
 * @file MainWindow.cpp
 * @brief Se declaran los metodos de MainWindow.h
 */

#include "../include/MainWindow.h"

Game::MainWindow::MainWindow()
: sf::RenderWindow(sf::VideoMode({500,500}), "Arcanoid", sf::Style::Default, sf::State::Windowed) {}

Game::MainWindow::MainWindow(const sf::Vector2u &windowSize)
: sf::RenderWindow(sf::VideoMode(windowSize), "Arcanoid", sf::Style::Default, sf::State::Windowed) {}

void Game::MainWindow::RunWindow() {
  while (this->isOpen()) {

    this->clear();
    this->display();
  }
}

bool Game::MainWindow::GetIfHasFocus() const {
    return this->hasFocus();
}


bool Game::MainWindow::RunGame() {
    
}
