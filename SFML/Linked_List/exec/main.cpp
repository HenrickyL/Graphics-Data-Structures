#include <iostream>
#include "../Header/GList.h"
int main(){
    graphic *g = new graphic("Test",800,400);
    sf::RenderWindow  *window = g->getWindow();
    std::string txt="Test";
    Text *text = new Text(40,"black","arial");
    text->setPosition(200,100);
    text->setFillColor(255,0,0,255);
    text->setSize(50);
    Rect *r = new Rect(100.0f,100.0f);
    r->setPos(100,100);
    r->setFillColor(255,0,255,255);
    while(window->isOpen()){
        sf::Event evnt;
        while(window->pollEvent(evnt)){

                switch (evnt.type)
                {
                case sf::Event::Closed :
                        window->close();
                        break;
                case  sf::Event::Resized:
                        std::cout << "Window: " << evnt.size.width << ", " << evnt.size.height << "\n";
                        break;
                case sf::Event::TextEntered:
                        if(evnt.text.unicode < 128)
                                txt +=  evnt.text.unicode;      
                                    text->setString(txt);                           
                                //printf("%c", evnt.text.unicode);
                        
                        break;
                default:
                        break;
                }   
        }
        window->clear(sf::Color(200, 200, 200));
        r->drawIn(window);
        text->DrawIn(window);
        window->display();   
    }




    return 0;
}