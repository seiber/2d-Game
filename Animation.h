#pragma once
#include <SFML\Graphics.hpp>
class Animation
{
public:
	Animation(void);
	~Animation(void);

	virtual void LoadContent(sf::String Text, sf::Texture &texture, sf::Vector2f position);
	virtual void UnloadContent();
	virtual void Update(sf::RenderWindow &window);
	virtual void Draw(sf::RenderWindow &window);
	virtual void SetAlpha(float alpha);
	float &GetAlpha();
	bool &GetActive();
	float &GetScale();


	template <typename T>
	void SetValue(t &varibale, T value)
	{
		variable = value;
	}

protected:
	float alpha;
	sf::String preText;
	sf::String text;
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f position;
	sf::Color textColor;
	sf::IntRect sourceRect;
	bool active;
	sf::Text Text;
	float scale;
private:
};

