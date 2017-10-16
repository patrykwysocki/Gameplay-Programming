#pragma once
#include <iostream>
//base class abstract
class Characters
{
public:
	Characters();
	//these functions are abstract member functions with no implementation
	virtual void shout() = 0;
	virtual void playerStats() = 0;
	virtual void attacksDetails() = 0;
	


	float health;
	float mana;
	float energy;
	bool  battle;
	
};