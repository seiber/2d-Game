#pragma once
class stats
{
	friend class chooseclass;
private:
	int health;
	int armor;

public:
	stats();
	stats(int h, int a);
	void setstats(int h, int a);
	void sethealth(int hero);
	int gethealth();
	void setarmor(int hero);
	void getarmor();


	~stats();
};

