#pragma once
#include <iostream>
class Characters
{
public:
	Characters();
	virtual void shout() = 0;
	virtual void playerStats() = 0;
	virtual void attacksDetails() = 0;
	


	float health;
	float mana;
	float energy;
	bool  battle;
	
};