#pragma once
class chooseclass
{

private:
	//All class base stats are changed based on the class the user picks.
	  int hero;
public:
	//default constructor
	chooseclass();
	//constructor
	chooseclass(int h);
	void sethero(int h);
	int gethero();
	int Chooseclass();
	//destructor
	~chooseclass();
};

