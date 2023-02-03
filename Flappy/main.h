#include <stdio.h>
#include "Sources/CoreFramework/Public/CoreGame.h"

CoreGame* coreGame = nullptr;
int main(int argc, char* argv[])
{
	printf("hello world");

	coreGame = new CoreGame();
	
	coreGame->Init("Flappy Bird", 1280, 720, false);
	while (coreGame->running())
	{
		coreGame->handleEvents();
		coreGame->update();
		coreGame->render();
	}

	coreGame->clean();

	return 0;
}

