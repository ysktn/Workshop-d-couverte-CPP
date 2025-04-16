#include "sfml.hpp"

const char *SFML::getName()
{
    return "sfml";
}

void SFML::init()
{
    _window.create(sf::VideoMode(800, 600), "SFML window");
    _window.setFramerateLimit(60);
}

void SFML::close()
{
    _window.close();
}

void SFML::clearScreen()
{
    _window.clear();
}

void SFML::refreshScreen()
{
    _window.display();
}

void SFML::drawText(int x, int y, const std::string &text)
{
    sf::Font font;
    sf::Text sfText;

    font.loadFromFile("Police.ttf");
    sfText.setFont(font);
    sfText.setString(text);
    sfText.setCharacterSize(24);
    sfText.setFillColor(sf::Color::White);
    sfText.setPosition(x * 24, y * 24);
    _window.draw(sfText);
}


IGraphical::Key SFML::getInput()
{
    sf::Event event;
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            close();
        }

        if (event.type == sf::Event::KeyPressed) {
            switch (event.key.code) {
                case sf::Keyboard::Up:
                    return IGraphical::Key::UP;
                case sf::Keyboard::Down:
                    return IGraphical::Key::DOWN;
                case sf::Keyboard::Left:
                    return IGraphical::Key::LEFT;
                case sf::Keyboard::Right:
                    return IGraphical::Key::RIGHT;
                case sf::Keyboard::Enter:
                    return IGraphical::Key::ENTER;
                case sf::Keyboard::Escape:
                    return IGraphical::Key::ESCAPE;
                default:
                    return IGraphical::Key::NONE;
            }
        }
    }
    return IGraphical::Key::NONE;
}