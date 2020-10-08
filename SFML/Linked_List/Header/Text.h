#ifndef TEXT_H
#define TEXT_H
#include <SFML/Graphics.hpp>
#include <iostream>
class Text{
private:
    int _size=12;
    std::string _color = "black";
    std::string _font = "arial";
    sf::Text* _text;
public:
    Text(int size, std::string color,std::string font);
    ~Text();
public: 
    void setFont(std::string font);
    void setSize(int size);
    void setFillColor(std::string color);
    void setFillColor(int r, int g, int b, int a);
    void setStyle(std::string style);
    void DrawIn(sf::RenderWindow* window);
    void setString(std::string text);
    void setPosition(float x, float y);
};

#endif