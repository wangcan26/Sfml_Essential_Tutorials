//Textures demo
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 960), "The title");
    //Set target Frames per second
    window.setFramerateLimit(60);
    
    
    //Init Scene
    sf::Image image;
    bool res = image.loadFromFile("../Assets/Textures/smoke.png");
    
    if(!res) return -1;
    
    sf::Texture texture;
    texture.loadFromImage(image);
    texture.setRepeated(true);
    
    sf::RectangleShape rectShape(sf::Vector2f(256*3, 256*2));
    
    rectShape.setTextureRect(sf::IntRect(0, 0, 256*3, 256*2));
    rectShape.setTexture(&texture);

    
    sf::ConvexShape convexShape(5);
    convexShape.setPoint(0, sf::Vector2f(0, 0));
    convexShape.setPoint(1, sf::Vector2f(200, 0));
    convexShape.setPoint(2, sf::Vector2f(180, 120));
    convexShape.setPoint(3, sf::Vector2f(100, 200));
    convexShape.setPoint(4, sf::Vector2f(20, 120));
    convexShape.setTexture(&texture);
    convexShape.setOutlineThickness(2);
    convexShape.setOutlineColor(sf::Color::Red);
    convexShape.move(20, 20);
    
    //Create a sprite
    sf::Sprite sp(texture);
    
    
    
    while(window.isOpen())
    {
        //Handle events
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        
        //Update scene
        
        
        //Render cycle
        window.clear(sf::Color::Black);
        
        window.draw(sp);
        
        //Render objects
        window.display();
    }
    return 0;
}
