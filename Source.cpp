#include <SFML/Graphics.hpp>

int main()
{
	sf::Texture texture;
	sf::Sprite Sprite;
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML WORKS");

	if (!texture.loadFromFile("Cubo.png"));
	{
		return-1;
	}
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();


		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			Sprite.move(0, -5);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			Sprite.move(0, 5);

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			Sprite.move(5, 0);

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			Sprite.move(-5, 0);
		}
		Sprite.setTexture(texture);
		window.clear();
		window.draw(Sprite);
		window.display();
	}

	return 0;
}
