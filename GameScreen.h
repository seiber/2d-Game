#pragma once
#include<SFML\Graphics.hpp>
#include "InputManager.h"
#include "FileManager.h"
class GameScreen
{
public:
	GameScreen();
	~GameScreen();
	virtual void LoadContent();
	virtual void UnloadContent();
	virtual void Update(sf::RenderWindow &window,sf::Event event);
	virtual void Draw(sf::RenderWindow &Window);
protected:
	InputManager input;
	std::vector<int>keys;
	FileManager file;
	std::vector<std::vector<std::string>>attributes;
	std::vector<std::vector<std::string>>contents;
private:
};

