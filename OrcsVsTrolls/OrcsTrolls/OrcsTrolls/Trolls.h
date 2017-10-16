#pragma once
#include <iostream>
#include "Characters.h" 
class Trolls : public Characters
{
public:
	Trolls();
	
	virtual void shout() 
	{ 
		std::cout << "IM A TROLL! He says" << std::endl; 
	}
	virtual void playerStats()
	{
		std::cout << "Your stats on the troll "<< mana <<" mana , " << health << " health and " << energy <<" energy" << std::endl;
	}
	virtual void attacksDetails()
	{
		std::cout << "These are your attacks.They cost your energy. " << std::endl;
		std::cout << " 1." << " Slash attack\n" << " 2." << " Hammer slam attack\n" << " 3." << " Elbow to the face attack\n" << " 4." << " Head butt attack\n" << " 5." << " Kick attack\n" << " 6." << " Combo of death\n";

		std::cout << "These are your  spells .They cost your mana" << std::endl;
		std::cout << " 11." << " Ice spell\n" << " 12." << " Fire  spell\n" << " 13." << " Darkness spell\n" << " 14." << " Lightning spell\n" << " 15." << " Combo of powerness\n";
	}
	////not used
	//float getHealth();
	//float getMana();
	//float getEnergy();
	////not used
	//void setHealth(float newHealth);
	//void setMana(float newMana);
	//void setEnergy(float newEnergy);

	float health;
	float mana;
	float energy;
	bool battle;
};