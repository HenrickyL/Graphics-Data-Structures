#include "../Header/Text.h"

Text::Text(int size,std::string color="black" ,std::string font="arial"):
_size(size),_color(color),_font(font) {
    
    sf::Font Font_;
    if (!Font_.loadFromFile("../font/arial.ttf")){
        std::cout << "Error to load Font!\n";
        system("pause");
    }
    
    /////////////////////////////////////////////
    _text = new sf::Text();
    if(_text==nullptr) std::cout<<"Error to create Text!\n"; 
    _text->setCharacterSize(_size);
    _text->setFont(Font_);
}

Text::~Text(){
    delete _text;
}

//////////////////////////////////////////
void Text::setFont(std::string font){
    sf::Font _font;
    if (!_font.loadFromFile(font)){
            std::cout << "Error to load Font!\n";
    }
    _text->setFont(_font);
}
////////////////////////////////////////////////
void Text::setSize(int size){

}
////////////////////////////////////////////////
void Text::setFillColor(std::string color){
    std::cout<<"error to setColor!\n";
}
//////////////////////////////////////////////////////
void Text::setFillColor(int r, int g, int b, int a=255){
    _text->setFillColor(sf::Color(r,g,b,a));
}
//////////////////////////////////////////////////////
void Text::setStyle(std::string style){
    if(style == "bold"){
        _text->setStyle(sf::Text::Bold);
    }else if(style == "Underlined"){
        _text->setStyle(sf::Text::Underlined);
    }
}
//////////////////////////////////////////////////////
void Text::DrawIn(sf::RenderWindow* window){
    window->draw(*_text);
}
//////////////////////////////////////////////////////
void Text::setString(std::string text){
    _text->setString(text);
}
//////////////////////////////////////////////////////
void Text::setPosition(float x, float y){
    _text->setPosition(x,y);
}
