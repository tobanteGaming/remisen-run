#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "Giovanni");

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear({25, 25, 25});
    window.display();
  }
  return EXIT_SUCCESS;
}