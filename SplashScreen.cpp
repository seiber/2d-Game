#include "SplashScreen.h"
#include <iostream>
using namespace std;


SplashScreen::SplashScreen()
{
}


SplashScreen::~SplashScreen()
{
}
void SplashScreen::LoadContent()
{
	imageNumber = 0;
	if (!Font.loadFromFile("OldLondon.ttf"))
		cout << "Cant' load font" << endl;

	//https://www.youtube.com/watch?v=2EzoygNV-pI&index=17&list=PLCB3138ADCE90F2EC 0:57
	Text.setString("SplashScreen");
	Text.setFont(Font);
	keys.push_back(sf::Keyboard::Return);
	keys.push_back(sf::Keyboard::Z);
	file.LoadContent("Load/splash.txt", attributes, contents); 
	for (int i = 0; i < attributes.size(); i++)
	{
		for (int j = 0; j < attributes[i].size(); j++)
		{
			std::string att = attributes[i][j];
			if (att == "Image")
			{
				sf::Vector2f pos(0, 0);
				image.loadFromFile(contents[i][j]);
				fade.push_back(new FadeAnimation);
				fade[fade.size() - 1]->LoadContent("", image, pos);
				fade[fade.size() - 1]->SetValue(fade[fade.size()-1]->GetActive(),true);
				fade[fade.size() - 1]->SetValue(fade[fade.size() - 1]->GetScale(),1.25f);
			}
				
		}
	}
}
void SplashScreen::UnloadContent()
{
	//https://www.youtube.com/watch?v=62R7KhpHkdA&index=16&list=PLCB3138ADCE90F2EC
	GameScreen::UnloadContent();
	for (int i = 0; i < fade.size(); i++)
	{
		fade[i]->UnloadContent();
		delete fade[i];
	}
	fade.clear();
}
void SplashScreen::Update(sf::RenderWindow &window, sf::Event event)
{
	input.Update(event);


	if (fade[imageNumber]->GetAlpha() <= 0.0f)
		imageNumber++;

	if (imageNumber != fade.size() - 1);
	fade[imageNumber]->Update(window);


	if (input.KeyPressed(keys)|| imageNumber >= fade.size() -1)
		Screenmanager::GetInstance().AddScreen(new TitleScreen);
}
void SplashScreen::Draw(sf::RenderWindow &window)
{
	window.draw(Text);
	fade[imageNumber]->Draw(window);
}

