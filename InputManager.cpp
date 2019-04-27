#include "InputManager.h"



InputManager::InputManager()
{
}


InputManager::~InputManager()
{
}


void InputManager::Update(sf::Event event)
{
	this->event = event;
}

bool InputManager::KeyPressed(int key)
{
	if (event.key.code == key && event.type == sf::Event::KeyPressed)
		return true;
	return false;
}

bool InputManager::KeyPressed(std::vector<int> keys)
{
	for (int i = 0; i < keys.size(); i++)
	{
		if (KeyPressed(keys[i]))
			return true;
	}
	return false;
}

bool InputManager::KeyReleased(int key)
{
	if (event.key.code == key && event.type == sf::Event::KeyReleased)
		return true;
	return false;
}

bool InputManager::KeyReleased(std::vector<int> keys)
{
	for (int i = 0; i < keys.size(); i++)
	{
		if (KeyReleased(keys[i]))
			return true;
	}
	return false;
}

/*

bool InputManager::KeyDown(sf::RenderWindow &window, int key)
{
if (window.sf::Keyboard::isKeyPressed)
return false;
}

bool InputManager::KeyDown(sf::RenderWindow &window , std::vector<int> keys)
{
return false;
}

*/

