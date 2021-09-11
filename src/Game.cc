#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(100, 100, 200, 100, sf::Color::Blue)};

Game::Game()
{
window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDHT, WINDOW_HEIGHT), GAME_NAME);
event = new sf::Event();
}

Game::~Game()
{
}

void Game::Start()
{

}

//Starting things
void Game::Initialize()
{
    Start();
    MainLoop();
}

//Logic, animations, etc.
void Game::update()
{

}

void Game::MainLoop()
{
while(window->isOpen())
{
    while(window->pollEvent(*event))
    {
        if(event->type == sf::Event::Closed)
        {
            window->close();
        }
    }
    Input();
    update();
    Render();
}
  Destroy();
}

void Game::Render()
{
    window->clear(sf::Color::Black);
    Draw();
    window->display();
}

//Drawing sprites or geometry.
void Game::Draw()
{
    window->draw(*rectangle->GetShape());
}

//Keyboards, joysticks, etc.
void Game::Input()
{

}

void Game::Destroy()
{
    delete window;
    delete event;
}