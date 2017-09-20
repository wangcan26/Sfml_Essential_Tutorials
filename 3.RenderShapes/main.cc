//RenderShapes demo
#include <SFML/Graphics.hpp>

static void initShape(sf::RectangleShape& shape, sf::Vector2f const& pos, sf::Color const& color)
{
    shape.setFillColor(color);
    shape.setPosition(pos);
    shape.setOrigin(shape.getSize()*0.5F);// The center of the rectangle
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "The title");
    //Set target Frames per second
    window.setFramerateLimit(60);
    
    
    //Init Scene
    sf::Vector2f startPos = sf::Vector2f(50, 50);
    sf::RectangleShape playerRect(sf::Vector2f(50, 50));
    initShape(playerRect, startPos, sf::Color::Green);
    
    sf::RectangleShape targetRect(sf::Vector2f(50, 50));
    initShape(targetRect, sf::Vector2f(400, 50), sf::Color::Blue);
    
    sf::RectangleShape badRect(sf::Vector2f(50, 100));
    initShape(badRect, sf::Vector2f(250, 50), sf::Color::Red);
    
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
        playerRect.move(1, 0);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            playerRect.move(0, 1);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            playerRect.move(0, -1);
        
        if(playerRect.getGlobalBounds().intersects(targetRect.getGlobalBounds()))
            window.close();
        if(playerRect.getGlobalBounds().intersects(badRect.getGlobalBounds()))
            playerRect.setPosition(startPos);
        
        //Render cycle
        window.clear(sf::Color::Black);
        window.draw(playerRect);
        window.draw(targetRect);
        window.draw(badRect);
        
        //Render objects
        window.display();
    }
    return 0;
}
