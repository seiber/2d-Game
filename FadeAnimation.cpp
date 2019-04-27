#include "FadeAnimation.h"



FadeAnimation::FadeAnimation()
{
}


FadeAnimation::~FadeAnimation()
{
}

void FadeAnimation::LoadContent(sf::String Text, sf::Texture &texture, sf::Vector2f position)
{
	Animation::LoadContent(Text, texture, position);
	increase = false;
	fadeSpeed = 1.0f;
}

void FadeAnimation::UnloadContent()
{

}

void FadeAnimation::Update(sf::RenderWindow &window)
{
	//https://www.youtube.com/watch?v=HvzW1e_48_U&index=10&list=PLCB3138ADCE90F2EC
	//https://en.sfml-dev.org/forums/index.php?topic=6831.0
	if (active)
	{
		if (!increase)
			alpha -= fadeSpeed;//can use sf::clock to ensure run time is same for every computer by using frames
		else alpha += fadeSpeed;
	}
	if (alpha >= 1.0f)
	{
		alpha = 1.0f;
		increase = false;
	}
	else if (alpha <= 0.0f)
	{
		alpha = 0.0f;
		increase = true;
	}
	else
	{
		alpha = 1.0f;
	}
	Animation::Update(window);
}

void FadeAnimation::Draw(sf::RenderWindow & window)
{
	Animation::Draw(window);
}

void FadeAnimation::SetAlpha(float value)
{
	alpha = value;

	if (alpha == 0.0f)
		increase = true;
	else
		increase = false;
}

