#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <AssetManager.h>


int main()
{
    sf::Window window(sf::VideoMode(640, 480), "Audio");
    
    AssetManager manager;
    sf::Sound sound(AssetManager::GetSoundBuffer("../Assets/Audio/a.ogg"));
    sound.play();
    
    while(window.isOpen())
    {
        
    }
    
    return 0;
}