#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "FP Percobaan", sf::Style::Close | sf::Style::Titlebar );

    sf::RectangleShape siNovanto(sf::Vector2f(100.0f,100.0f));
    sf::RectangleShape siKPK(sf::Vector2f(50.0f,50.0f));
    sf::RectangleShape siTiang(sf::Vector2f(50.0f,50.0f));
    sf::RectangleShape pnovanto(sf::Vector2f(100.0f,100.0f));

    sf::CircleShape peluru1(10.f);
    sf::CircleShape peluru2(10.f);
    peluru1.setFillColor(sf::Color::Green);
    peluru2.setFillColor(sf::Color::Green);

    sf::Texture novanto;
    sf::Texture kpk;
    sf::Texture tiang;
    sf::Texture pelurupnovanto;
    sf::Texture background;

    novanto.loadFromFile("novanto.png");
    kpk.loadFromFile("kpk.png");
    tiang.loadFromFile("tiang.png");
    pelurupnovanto.loadFromFile("pengacara.png");
    background.loadFromFile("background.jpg");

    siNovanto.setTexture(&novanto);
    siNovanto.setPosition(100.0f,100.0f);
    pnovanto.setTexture(&pelurupnovanto);

    while (window.isOpen())
    {
        window.clear(sf::Color(150,150,150));
        window.draw(siNovanto);
        window.draw(pnovanto);
        window.display();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        float pindah1,pindah2;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
            siNovanto.move(-0.1f, 0.0f);
            pindah1 = -0.1f + -0.2f;
            pindah2 = 0.0f;
            peluru1.setPosition(siNovanto.getPosition());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
            siNovanto.move(0.1f, 0.0f);
            pindah1 = 0.1f;
            pindah2 = 0.0f;
            peluru1.setPosition(siNovanto.getPosition());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
            siNovanto.move(0.0f, 0.1f);
            pindah1 = 0.0f;
            pindah2 = 0.1f;
            peluru1.setPosition(siNovanto.getPosition());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        {
            siNovanto.move(0.0f, -0.1f);
            pindah1 = 0.0f;
            pindah2 = -0.1f;
            peluru1.setPosition(siNovanto.getPosition());
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
        {
            int a;
            for (a=0;a<100;a++)
            {
                peluru1.move(pindah1,pindah2);
                window.draw(peluru1);
                window.display();
            }
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) pnovanto.move(-0.1f,0.0f);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) pnovanto.move(0.1f,0.0f);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) pnovanto.move(0.0f,-0.1f);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) pnovanto.move(0.0f,0.1f);
    }

    return 0;
}
