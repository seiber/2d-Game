#pragma once
#include<string>
#include <iostream>
#include "GameScreen.h"
#include "SplashScreen.h"
//#include "Menu.h"
#include "TitleScreen.h"
#include "FadeAnimation.h"
#include "FileManager.h"
using namespace std;

#define ScreenWidth 800
#define ScreenHeight 600
class Screenmanager
{
public:
	~Screenmanager();
	static Screenmanager &GetInstance();
	void Initiazlize();
	void LoadContent();
	void UnloadContent();
	void Update(sf::RenderWindow &window, sf::Event event);
	void Draw(sf::RenderWindow &window);
	void AddScreen(GameScreen *screen);
	float GetAlpha();

private:
	//GameScreen *currentScreen, *newScreen;
	
	Screenmanager();
	Screenmanager(Screenmanager const&);
	void operator =(Screenmanager const&);

	void Transition(sf::RenderWindow &window);
	bool transition;

	FadeAnimation fade;
	GameScreen *newScreen;
	FileManager file;
	std::vector<std::vector<std::string>>attributes;
	std::vector<std::vector<std::string>>contents;

};

