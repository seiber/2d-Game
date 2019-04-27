#include "TitleScreen.h"



TitleScreen::TitleScreen()
{
	
}
//default
//TitleScreen::TitleScreen()
//{
//}


TitleScreen::~TitleScreen()
{
}
void TitleScreen::LoadContent()
{
	float width = 430, height=200;
	// medieval font
	if (!Font.loadFromFile("OldLondon.ttf"))
	{
		// handle error
		cout << "Error: Could not display font file" << std::endl;
	}
	Text.setFont(Font);
	Text.setFillColor(sf::Color::Cyan);
	Text.setString("Play");
	//Text.setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
	
	
	//Text.setFont(Font);
	//Text.setFillColor(sf::Color::White);
	//Text.setString("Options");
	//Text.setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));
	
	keys.push_back(sf::Keyboard::Return);
	keys.push_back(sf::Keyboard::Z);

	
	//title[0].setFont(Font);
	//title[0].setFillColor(sf::Color::Cyan);
	//title[0].setString("Play");
	//title[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
	

	/*
	title[1].setFont(Font);
	title[1].setFillColor(sf::Color::White);
	title[1].setString("Options");
	title[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));



	title[2].setFont(Font);
	title[2].setFillColor(sf::Color::Red);
	title[2].setString("Exit");
	title[2].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));


	selectedItemIndex = 0;

	*/
	
	
	
}
void TitleScreen::UnloadContent()
{
	GameScreen::UnloadContent();
}
void TitleScreen::Update(sf::RenderWindow &window,sf::Event event)
{

	input.Update(event);
	if (input.KeyPressed(keys))
		Screenmanager::GetInstance().AddScreen(new SplashScreen);

}
void TitleScreen::Draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(Text);
	}
}
/*
void TitleScreen::MoveUp()
{
if (selectedItemIndex - 1 >= 0)
{
title[selectedItemIndex].setFillColor(sf::Color::White);
selectedItemIndex--;
title[selectedItemIndex].setFillColor(sf::Color::Red);
}
}
void TitleScreen::MoveDown()
{
if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
{
title[selectedItemIndex].setFillColor(sf::Color::White);
selectedItemIndex++;
title[selectedItemIndex].setFillColor(sf::Color::Red);
}
}

bool TitleScreen::MouseClick(sf::RenderWindow &window)
{
if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x && sf::Mouse::getPosition(window).y)
{

sf::IntRect playButtonRect(title[0].getPosition().x, title[0].getPosition().y, title[0].getGlobalBounds().width, title[0].getGlobalBounds().height);

if (playButtonRect.contains(sf::Mouse::getPosition(window)))
{
cout << "play button is clicked " << endl;

return true;
}
return false;

}

}


*/
