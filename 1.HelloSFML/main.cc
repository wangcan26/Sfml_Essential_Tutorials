#include <SFML/Window.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

int main()
{
    sf::Window window(sf::VideoMode(300, 300), "The title");
      
    sf::String buffer;  
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                  window.close();
                break;
                case sf::Event::KeyPressed:
                  //Change the title if the space is pressed
                  if(event.key.code == sf::Keyboard::Space)
                    window.setTitle("Space pressed");
                break;
                case sf::Event::TextEntered:
                  //Add the character directly to the string
                  buffer += event.text.unicode;
                break;
                case sf::Event::KeyReleased:
                  //if(event.key.code == sf::Keyboard::Space)
                  //  window.setTitle("Space released");
                  //else if(event.key.code == sf::Keyboard::Escape)
                  //  window.close();
                  if(event.key.code == sf::Keyboard::Return)
                  {
                      window.setTitle(buffer);
                      buffer.clear();
                  }
                break;
                default:
                break;
            }
        }
        
    }
    return 0;
}
