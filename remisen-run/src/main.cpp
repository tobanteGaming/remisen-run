#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Remisen Run");
    sf::RectangleShape rectangle(sf::Vector2f(250.f, 50.f));
    rectangle.setPosition(100, 100);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }

        window.clear({25, 25, 25});
        window.draw(rectangle);
        window.display();
    }
    return EXIT_SUCCESS;
}