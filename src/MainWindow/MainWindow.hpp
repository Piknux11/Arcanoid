#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <string>

#include "../Header.hpp"
#include "../Ball/Ball.hpp"

class MainWindow : public sf::RenderWindow {
public:
    MainWindow();    

    void run();
private:


};

#endif
