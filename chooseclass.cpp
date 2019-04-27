#include "chooseclass.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor
chooseclass::chooseclass()
{
	//calls chooseclass
	Chooseclass();
}
//constructor

void chooseclass::sethero(int h)
{

	hero = h;
}
int chooseclass::gethero()
{
	return hero;
}
int chooseclass::Chooseclass()
{

	cout << "Pick a number from the menu to decide the class you play. " << endl;
	cout << "1. Mage" << endl;
	cout << "2. Warrior" << endl;
	cout << "3. Rogue" << endl;
	cout << "4. Archer" << endl;
	cin >> hero;

	switch (hero)
	{
	case 1:
		cout << "You have choosen a Mage. Mages can dominate the battlefield with magical abilities from fire to ice these abilities are some of the strongest in the game, so use with care."
			" Beware of your low base armor and use distance to your advantage! " << endl;
		break;
	case 2: 
		cout << "Ah, the mighty warrior eh? Well, warriors wear heavy armor and are able to take the most damage. You can wield either a 2h-sword or a shield at one time. Warriors are the first in and last out! "
			<< endl;
		break;
	case 3:
		cout << "Sneaky choice. Rouges are good at using stealth to their advantage. They wear leather armor and are able to dish out insane damage while close up. They can also pickpocket to their advantage"
			<< "to gain money." << endl;
		break;
	case 4:
		cout << "Archers excel at using long ranged weapons such as bows and guns. They do moderate damage while being far from the battlefield. Archers wear mail armor and can tank moderate damage." << endl;
		break;
	default:
		cout << "Sorry, that is not a choice. Try again " << endl;
		break;
	}


	sethero(hero);

	return hero;
}



//destructor
chooseclass::~chooseclass()
{
}
