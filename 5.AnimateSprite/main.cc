//AnimateSprite demo
#include <SFML/Graphics.hpp>
#include "AssetManager.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "Animate Sprite");

	//Setup
	sf::Vector2i spriteSize(32, 32);
	sf::Sprite sprite(AssetManager::GetTexture("../Assets/Textures/smoke.png"));

	while(window.isOpen())
	{
		
	}
	return 0;
}