#ifndef WINDOW_H
#define WINDOW_H
#include <SFML/Graphics.hpp>
#include <iostream>
class graphic{
private:
    int _width=800,_height=400;
    std::string _title="SFML - Perikan";
    sf::RenderWindow  *_window;
public:
    graphic(std::string title, int w, int h);
    ~graphic();
public:
    sf::RenderWindow* getWindow();
};




#endif