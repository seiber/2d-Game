#include <iostream>
#include <SFML\Graphics.hpp>
#include <string>
#include "chooseclass.h"
#include "stats.h"
//#include "Menu.h"
#include "Animation.h"
#include "Screenmanager.h"
#include "TitleScreen.h"
#include "FadeAnimation.h"

//using smfl deprecated functions
#define SFML_NO_DEPRECATED_WARNINGS

using namespace std;

int main()
{

	chooseclass classobj;
	stats statsobj;
	//object created to let the user choose their class
	//classobj.Chooseclass(); calls from def constructor
	statsobj.sethealth(classobj.gethero());
	statsobj.setarmor(classobj.gethero());




	//sf::RectangleShape player(sf::Vector2f(100.0f, 150.0f));
	//player.setPosition(206.0f, 206.0f);
	//sf::Texture playerTexture;
	//playerTexture.loadFromFile("1_IDLE_000.png");
	//player.setTexture(&playerTexture);
	//Animation animation(&playerTexture, sf::Vector2u(3, 9), 0.3f);

	float deltaTime = 0.0f;
	sf::Clock deltaclock;

	//allows the user to close(x button) resize, minimizie, or full screen the window
	sf::Style::Default;
	sf::RenderWindow window(sf::VideoMode(512, 512), "Spaghetti Fighters");
	//https://www.youtube.com/watch?v=6_wMQN3mpdk&index=12&list=PLCB3138ADCE90F2EC
	sf::RectangleShape Fade; 
	//sf::Shape Fade =sf::RectangleShape(0, 0, 800, 600, sf::Color(255, 255, 255));
	//sf::RectangleShape Fade = (0, 0, 800, 600, sf::Color(255, 255, 255));
	//sf::Color::Black = Fade;
	Screenmanager::GetInstance().Initiazlize();
	Screenmanager::GetInstance().LoadContent();


	//sf::Texture playerTexture;
	//playerTexture.loadFromFile("magesprite.gif");
	//sf::RectangleShape Rectangle; //(sf::Vector2f(width / 2, height / (3 + 1) * 1));


 //TitleScreen title(window.getSize().x, window.getSize().y);

	window.setKeyRepeatEnabled(false);
	while (window.isOpen())
	{

		deltaTime = deltaclock.restart().asSeconds();
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			Screenmanager::GetInstance().Update(window, event);
			if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
				window.close();

		
		}
		//FadeAnimation::Update;
		
		
	
		window.clear();
		Screenmanager::GetInstance().Draw(window);
		Fade.setFillColor(sf::Color(0, 0, 0, 255 * Screenmanager::GetInstance().GetAlpha()));
		window.draw(Fade);
		window.display();	
		
	}
}
	/*

	while (window.isOpen())
	{
	//deltaTime=clock.restart().asSeconds();
	sf::Event event;
	while (window.pollEvent(event))
	{

	if (event.key.code == sf::Keyboard::S)
	Screenmanager::GetInstance().AddScreen(new SplashScreen);
	else if (event.key.code == sf::Keyboard::T)
	Screenmanager::GetInstance().AddScreen(new TitleScreen);
	}

	window.clear();

	switch (event.type)
	{
	case sf::Event::KeyReleased:
	switch (event.key.code)
	{
	case sf::Keyboard::Up:
	title.MoveUp();
	break;

	case sf::Keyboard::Down:
	title.MoveDown();
	break;

	case sf::Keyboard::Return:
	switch (title.GetPressedItem())
	{
	case 0:
	std::cout << "Play button has been pressed" << std::endl;
	break;
	case 1:
	std::cout << "Option button has been pressed" << std::endl;
	break;
	case 2:
	window.close();
	break;

	}

	break;

	}

	break;




	case sf::Event::Closed:
	window.close();

	break;

	}
	}


	Screenmanager::GetInstance().Update();
	Screenmanager::GetInstance().Draw(window);

	//mage idle animation
	//animation.Update(0, deltaTime);

	//player.setTextureRect(animation.uvRect);

	window.clear();

	window.draw(bgImage);

	title.MouseClick(window);

	title.Draw(window);

	window.display();
	}




	*/