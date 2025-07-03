/**
 * @file MainWindow.h
 * @brief Esta es una clase que derivara de sf::Window
 * @todo Crear la funcionalidad del metodo RunGame()
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System.hpp>
#include <SFML/Window/Event.hpp>
#include <optional>

namespace Game {

  class MainWindow : public sf::RenderWindow {
  public:
    
    /**
     * @brief Constructor por defecto
     */
    MainWindow();
    
    /**
     * @brief Constructor para asignar un tamano a la ventana 
     * @param windowSize es el tamanio de la ventana
     */
    MainWindow(const sf::Vector2u &windowSize);

    /**
     * @brief Ejecuta la ventana
     */
    void RunWindow();

    /**
     * @brief Metodo que retorna, si la ventana tiene el focus
     * @param No se usa ningun parametro
     * @return Regresa si la ventana tiene el foco mediante un Bool
     */
    bool GetIfHasFocus() const;

  private:

    /**
     * @brief Metod que gestiona los eventos de la ventana
     * @param No resive parametros
     * @return No retorna nada
     */
    void EventWindow();

    /**
     * @brief Metodo para cerrar la ventana
     * @param event es un puntero a la pisina de eventos de la ventana
     * @note La ventana se cierra con "Esc"
     */
    void EventCloseWindow(const std::optional<sf::Event> &event);
    
    /**
     * @brief Metodo que ejecuta el Juego
     * @param No resive parametros
     * @return Regresa un True si gana el jugador o un False si pierde 
     * @note Este metodo solo se usara dentro del metodo RunMenu()
     */
    bool RunGame();

  };
  
}

#endif
