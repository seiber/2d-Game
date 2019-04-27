#pragma once
#include "Animation.h"
#include <SFML\Graphics.hpp>
class FadeAnimation :public Animation
{
public:
	FadeAnimation(void);
	~FadeAnimation(void);


	void LoadContent(sf::String Text, sf::Texture &texture, sf::Vector2f position);
	void UnloadContent();
	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);
	void SetAlpha(float value);
private:
	bool increase;
	float fadeSpeed;
};

