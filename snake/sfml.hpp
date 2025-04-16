
#ifndef SFML_HPP_


#define SFML_HPP_


#include "Lib.hpp"

#include <SFML/Graphics.hpp>

#include <SFML/Window.hpp>
#include <SFML/System.hpp>



class SFML : public IGraphical {
    public:
        SFML() =  default;
        ~SFML() = default;
        const char *getName();
        void init();
        void close();
        void clearScreen();
        void refreshScreen();
        void drawText(int x, int y, const std::string &text);
    private:
        std::string _name;
        sf::RenderWindow _window;
};



#endif /* !SFML_HPP_ */