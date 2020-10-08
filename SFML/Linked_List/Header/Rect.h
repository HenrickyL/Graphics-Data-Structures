#ifndef RECT_H
#define RECT_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Rect{
private:
    float _width=20.0f,_height=20.0f;
    float _x=0,_y=0;
    sf::RectangleShape* _rect;
    sf::RenderWindow *window;
public:
    Rect(float width,float height);
    ~Rect();
public:
    void setPos(float x, float y);
    const sf::Vector2f getPos(sf::RenderWindow* window);
    void setFillColor(int r, int g, int b, int a);
    void move(int x, int y);
    void drawIn(sf::RenderWindow* window);
    void setOutline(float size);
    void setOutlineColor(int r, int g, int b, int a);
    void setSize(int width, int height);
    bool isColid(Rect* r);
};

#endif