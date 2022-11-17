// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <iostream>

// Make code easier to type with "using namespace"
using namespace sf;
using namespace std;

int main()
{
	// Create a video mode object
	float width, height;
	width = VideoMode::getDesktopMode().width;
	height = VideoMode::getDesktopMode().height;
	VideoMode vm(width, height);

	// Create and open a window for the game
	RenderWindow window(vm, "RPG!!!", Style::Default);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("graphics/dungeon2.jpg");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setScale(4.5, 4.5);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	// Make a Player sprite
	Texture texturePlayer;
	texturePlayer.loadFromFile("graphics/player.png");
	Sprite spritePlayer;
	spritePlayer.setTexture(texturePlayer);
	spritePlayer.setScale(0.75,0.75);
	spritePlayer.setPosition(1800, 800);


	while (window.isOpen())
	{

		/*
		****************************************
		Handle the players input
		****************************************
		*/

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		/*
		****************************************
		Update the scene
		****************************************
		*/


		/*
		****************************************
		Draw the scene
		****************************************
		*/

		// Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);
		window.draw(spritePlayer);

		// Show everything we just drew
		window.display();


	}

	return 0;
}


