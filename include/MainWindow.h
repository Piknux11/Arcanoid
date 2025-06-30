/**
 * @file MainWindow.h
 * @brief Esta es una clase que derivara de sf::Window
 * @todo Crear la funcionalidad del metodo RunGame()
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>

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
     * @brief Metodo que ejecuta el Juego
     * @param No resive parametros
     * @return Regresa un True si gana el jugador o un False si pierde 
     * @note Este metodo solo se usara dentro del metodo RunMenu()
     */
    bool RunGame();
    
  };
  
}

#endif
