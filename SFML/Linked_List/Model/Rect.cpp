#include "../Header/Rect.h"


Rect::Rect(float width,float height):
_width(width),_height(height){
    _rect= new sf::RectangleShape(sf::Vector2f(_width,_height));

}
Rect::~Rect(){
    delete _rect;

}






void Rect::setPos(float x, float y){
    _x=x;
    _y= y;
    _rect->setPosition(x,y);
}
///////////////////////////////////////////////////////////
const sf::Vector2f Rect::getPos(sf::RenderWindow* window){
    return  _rect->getPosition();
}
//////////////////////////////////////////////////////////////////////
void Rect::setFillColor(int r, int g, int b, int a=255){
    _rect->setFillColor(sf::Color(r,g,b,a));
}
//////////////////////////////////////////////////////////////////////
void Rect::move(int x, int y){
    _rect->move(x,y);
}
//////////////////////////////////////////////////////////////////////
void Rect::drawIn(sf::RenderWindow* window){
    window->draw(*_rect);
}
//////////////////////////////////////////////////////////////////////
void Rect::setOutline(float size){
    _rect->setOutlineThickness(size);
}
//////////////////////////////////////////////////////////////////////
void Rect::setOutlineColor(int r, int g, int b, int a=255){
    _rect->setOutlineColor(sf::Color(r,g,b,a));
}
//////////////////////////////////////////////////////////////////////
void Rect::setSize(int width, int height){
    _width = width;
    _height=height;
    _rect->setSize(sf::Vector2f(width,height));
}
//////////////////////////////////////////////////////////////////////
bool Rect::isColid(Rect* r){
    float x = _rect->getPosition().x;
    float y = _rect->getPosition().y;
    float w = _rect->getSize().x;
    float h = _rect->getSize().y;
    //////////////////////////////////
    float xR = r->_rect->getPosition().x;
    float yR = r->_rect->getPosition().y;
    float wR = r->_rect->getSize().x;
    float hR = r->_rect->getSize().y;

    return xR+wR >= x && xR <= x+w  && yR+hR >=y && yR <= y+h;
}