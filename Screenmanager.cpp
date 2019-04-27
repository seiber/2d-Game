#include "Screenmanager.h"

GameScreen *currentScreen, *newScreen;

//handle different screens
Screenmanager & Screenmanager::GetInstance()
{
	static Screenmanager instance;
	return instance;
}

Screenmanager::Screenmanager()
{
}

Screenmanager::~Screenmanager()
{
}
float Screenmanager::GetAlpha()
{
	return fade.GetAlpha();
}
void Screenmanager::AddScreen(GameScreen *screen)
{
	transition = true;
	newScreen = screen;
	fade.SetValue(fade.GetActive(),true);
	fade.SetAlpha(0.0f);
}

void Screenmanager::Transition(sf::RenderWindow &window)
{
	if (transition)
	{
		fade.Update(window);
		if (fade.GetAlpha() >= 1.0f)
		{
			currentScreen->UnloadContent();
			delete currentScreen;
			currentScreen = newScreen;
			currentScreen->LoadContent();
			newScreen = NULL;
		}
		else if (fade.GetAlpha() <= 0.0f)
		{
			transition = false;
			fade.SetValue(fade.GetActive(), false);
		}
	}
}

void Screenmanager::Initiazlize()
{
	currentScreen = new SplashScreen();
	transition = false;
	file.LoadContent("splash.cme", attributes, contents);
}
void Screenmanager::LoadContent()
{
	currentScreen->LoadContent();
	sf::Texture image;
	sf::Vector2f pos;
	fade.LoadContent("", image, pos);
	fade.SetAlpha(0.0f);
}
void Screenmanager::UnloadContent()
{
	
}
void Screenmanager::Update(sf::RenderWindow &window, sf::Event event)
{
	if (!transition)
	currentScreen->Update(window,event);
	Transition(window);
}
void Screenmanager::Draw(sf::RenderWindow &Window)
{
	currentScreen->Draw(Window);
}

Screenmanager::Screenmanager(Screenmanager const &)
{
}

void Screenmanager::operator=(Screenmanager const &)
{
}

