#include "SFML/Graphics.hpp"




int main() {
	sf::RenderWindow window(sf::VideoMode(800, 400), "Evolution Simulator", sf::Style::Fullscreen);
	


	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen()) {
		deltaTime += clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Escape) {
					window.close();
				}
			}
		}



		window.clear(sf::Color::Black);


		window.display();
	}
	return 0;
}