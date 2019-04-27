#include "stats.h"
#include "chooseclass.h"
#include <iostream>
using namespace std;

//default constructor
stats::stats()
{
	health = 0;
	armor = 0;
	
}
stats::stats(int h, int a)
{
	health = h;
	armor = a;
}

void stats::setstats(int h, int a)
{
	health = h;
	armor = a;
}

void stats::sethealth(int hero)
{
	if (hero == 1)
	{

		//sets base health of a mage to 25
		this->health = 25;
		cout << health << endl;
	}

	else if (hero == 2)
	{
		//sets base health of a warrior to 30
	this->	health = 30;	
	cout << health << endl;
	}

	else if (hero == 3)
	{
		//sets base health of a archer to 27
		this->health = 27;
		cout << health << endl;
	}

	else if (hero == 4)
	{

		//sets base health of a rogue to 26
		this->health = 26;
		cout << health << endl;

	}
}
void stats::setarmor(int hero)
{
	if (hero == 1)
	{
		//sets base armor of a mage to 20
		this->armor = 20;
		cout << armor<< endl;
	}

	else if (hero == 2)
	{
		//sets base armor of a warrior to 50
		this->armor = 50;
		cout << armor << endl;
	}

	else if (hero == 3)
	{
		//sets base armor of an archer to 35
		this->armor = 35;
		cout << armor << endl;
	}

	else if (hero == 4)
	{

		//sets base armor of a rogue to 25
		this->armor = 25;
		cout << armor << endl;

	}
}
int stats::gethealth()
{
	return health;
}

stats::~stats()
{
}
