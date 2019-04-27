#pragma once
#include "GameScreen.h"
#include <SFML\Graphics.hpp>
#include <iostream>
#include "TitleScreen.h"
#include "Screenmanager.h"
#include "FadeAnimation.h"
class SplashScreen :public GameScreen
{
public:
	SplashScreen();
	~SplashScreen();

	void LoadContent();
	void UnloadContent();
	void Update(sf::RenderWindow &window, sf::Event event);
	void Draw(sf::RenderWindow &Window);

private:
	sf::Text Text;
	sf::Font Font;
	sf::Texture image;
	std::vector<FadeAnimation*> fade;

	int imageNumber;
};

