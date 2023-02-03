#include "CoreFramework\Public\CoreGame.h"


CoreGame::CoreGame()
{}

CoreGame::~CoreGame()
{}


void CoreGame::Init(const char* title, int width, int height, bool fullscreen)
{
	int flag = 4;

	if (fullscreen)
	{
		flag = 8;
	}
	m_window = new sf::RenderWindow(sf::VideoMode(width, height), title, flag);
	m_window->setFramerateLimit(144);

	m_deltaClock = new sf::Clock();

	if (m_window)
	{
		isRunning = true;
	}


}

void CoreGame::handleEvents()
{

	sf::Event event;
	if (m_window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			isRunning = false;
		}
	}
}

void CoreGame::clean()
{
	m_window->close();
}

void CoreGame::update()
{
	cnt++;
}

void CoreGame::render()
{
	m_window->clear();
	m_window->display();
}

bool CoreGame::running()
{
	return isRunning;
}
