#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/System/Clock.hpp"
#include <iostream>

class CoreGame
{

public:
	CoreGame();
	~CoreGame();

	void Init(const char* title, int width, int height, bool fullscreen);

	bool running();

	void handleEvents();
	void update();
	void render();
	void clean();

private:
	bool isRunning;

	int cnt = 0;

	sf::RenderWindow* m_window;
	sf::Clock* m_deltaClock;

};

