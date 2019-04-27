#pragma once
#include "SFML\Graphics.hpp"
#include "GameScreen.h"
#include "SplashScreen.h"
#include "Screenmanager.h"
#include <iostream>
using namespace std;

#define MAX_NUMBER_OF_ITEMS 3

class TitleScreen :public GameScreen
{
public:
	
	TitleScreen();
	~TitleScreen();
	void LoadContent();
	void UnloadContent();
	void Update( sf::RenderWindow &window,sf::Event event);
	void Draw(sf::RenderWindow &window);
	/*

	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemIndex; }
	bool MouseClick(sf::RenderWindow &window);
	*/
	

private:
	int selectedItemIndex;
	//sf::Text title[MAX_NUMBER_OF_ITEMS];
	sf::Text Text;
	sf::Font Font;

};

