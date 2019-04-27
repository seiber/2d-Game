#include "Animation.h"

#define SFML_NO_DEPRECATED_WARNINGS

Animation::Animation()
{

}


Animation::~Animation()
{

}

void Animation::LoadContent(sf::String Text , sf::Texture &texture, sf::Vector2f position)
{	//uses variables defined in class rather than ones found in parameters
	this->preText = Text;
	this->texture = texture;
	this->position = position;
	alpha = 1.0f;
	textColor = sf::Color(114, 77, 255);
//	if (texture.getSize <=00)
	sprite.setTexture(this->texture);
	this->Text.setString(Text);
	active = false;
	
}

void Animation::UnloadContent()
{

}

void Animation::Update(sf::RenderWindow &window)
{
	
}

void Animation::Draw(sf::RenderWindow & window)
{
	sf::String str = Text.getString();
	sprite.setColor(sf::Color(255, 255, 255, 255 * alpha));
	sprite.setPosition(position);
	sprite.setScale(scale, scale);
	
	
	//sprite.setTextureRect(sourceRect);

	if (str != "")
	{
		Text.setColor(sf::Color(255, 255, 255, 255 * alpha));
		Text.setPosition(position);
		Text.setScale(scale, scale);
		window.draw(Text);
	}
	if (sprite.getTexture() != NULL)
	{
		Text.setColor(sf::Color(255, 255, 255, 255 * alpha));
		Text.setPosition(position);
		Text.setScale(scale, scale);
		window.draw(sprite);
	}
		
}

float &Animation::GetAlpha()
{
	return alpha;
}

bool &Animation::GetActive()
{
	return active;
}

float & Animation::GetScale()
{
	return scale;
}

void Animation::SetAlpha(float value)
{
	alpha = value;
}

