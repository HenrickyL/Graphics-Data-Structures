#include "../Header/Graphic.h"


graphic::graphic(std::string title, int w, int h):
_width(w),_height(h),_title(title)  {
    std::locale brasilLocale("pt_BR.UTF-8");; 
    std::locale::global (brasilLocale);
    _window = new sf::RenderWindow(sf::VideoMode(_width,_height),_title, sf::Style::Close | sf::Style::Resize | sf::Style::Titlebar);

}
graphic::~graphic(){
    delete _window;
}



sf::RenderWindow* graphic::getWindow(){
    return _window;    
}

