//Patryk Wysocki
//14/10/17
//Orcs vs Trolls game
//bugs=when you win/lose you keep playing game doesnt shuts down only if you press with mouse.
#include <iostream>
#include <string>
#include "Trolls.h"
#include "Characters.h"
#include "Orcs.h"
#include <string>

#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>  
void chooseChar();
void fightAsOrc();
void fightAsTroll();


//struct to name your troll/orc
struct PlayerName
{
	std::string name;
};
PlayerName playerName;
Orcs Orc;
Trolls Troll;
Characters *player;

void chooseChar()
{

	srand(time(NULL));


	int choice;


	std::cout << "Welcome to my Orcs vs Trolls game \nPick your destiny.\nType 1 to be an orc or 2 to be a troll" << std::endl;
	std::cin >> choice;
	while (choice < 1 || choice >2)
	{
		std::cout << "ONLY Orcs and Trolls to pick. Pick again !" << std::endl;
		std::cin >> choice;
	}

	if (choice == 1)
	{
		std::cout << "Name your Orc " << std::endl;
		std::cin >> playerName.name;
		std::cout << "You named your Orc " << playerName.name << " Good luck" << std::endl;
		player = &Orcs();
		player->shout();
		player->playerStats();

		system("pause");
		system("CLS");
		player->attacksDetails();

		fightAsOrc();
		system("pause");
	
	}

	if (choice == 2)
	{
		std::cout << "Name your Troll " << std::endl;
		std::cin >> playerName.name;
		std::cout << "You named your Troll " << playerName.name << " Good luck" << std::endl;
		player = &Trolls();
		player->shout();
		player->playerStats();

		system("pause");
		system("CLS");
		player->attacksDetails();

		fightAsTroll();
		system("pause");
	}

}

//function to fight as a troll all his spells and attacks, computer attacks and spells.
void fightAsTroll() 
{
	int enemyAttack;
	
	int choice;
	
	std::cout << "Prepare for battle " << playerName.name << std::endl;
	while (Troll.battle == true)
	{
		std::cout << "\nChoose your attack.Type 1-6 for melee attack or 11-15 for spells " << std::endl;
		std::cin >> choice;

		switch (choice)
		{
			//melee attacks
		case 1:
			std::cout << "You chose Slash attack" << std::endl;
			Orc.health -= 20;
			Troll.energy -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 2:
			std::cout << "You chose Hammer Slam attack" << std::endl;
			Orc.health -= 20;
			Troll.energy -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 3:
			std::cout << "You chose Elbow to the face attack" << std::endl;
			Orc.health -= 20;
			Troll.energy -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 4:
			std::cout << "You chose Head butt attack" << std::endl;
			Orc.health -= 20;
			Troll.energy -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 5:
			std::cout << "You chose Kick attack" << std::endl;
			Orc.health -= 20;
			Troll.energy -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 6:
			std::cout << "You chose Combo of death " << std::endl;
			Orc.health -= 50;
			Troll.energy -= 50;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;

			//spells
		case 11:
			std::cout << "You chose Ice Spell" << std::endl;
			Orc.health -= 20;
			Troll.mana -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 12:
			std::cout << "You chose Fire Spell" << std::endl;
			Orc.health -= 20;
			Troll.mana -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 13:
			std::cout << "You chose Darkness Spell" << std::endl;
			Orc.health -= 20;
			Troll.mana -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 14:
			std::cout << "You chose Lightning Spell" << std::endl;
			Orc.health -= 20;
			Troll.mana -= 20;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		case 15:
			std::cout << "You chose Combo of Powerness " << std::endl;
			Orc.health -= 50;
			Troll.mana -= 50;
			std::cout << "Enemies health left " << Orc.health << "\n Your energy " << Troll.energy << "\n Your mana" << Troll.mana << std::endl;
			break;
		default:
			std::cout << "Wrong input try again." << std::endl;
			break;
			
		}
		//if battle continues and you run out of energy and mana
		if (Troll.mana <= 0 || Troll.energy <= 0)
		{
			std::cout << "You ran out of your mana. Chill out and refill " << std::endl;
			Troll.mana += 70;

		}
		else if (Troll.energy <= 0 || Troll.energy == 0)
		{
			std::cout << "You ran out of your energy. Chill out and refill " << std::endl;
			Troll.energy += 70;
		}
		//generate random actions of enemy. spell,melee,heal
		enemyAttack = rand() % 4 + 1;
		if (enemyAttack == 1)
		{
			std::cout << "Your enemy blasted you with a spell. You lost 15 hp " << std::endl;
			Troll.health -= 15;
			std::cout << Troll.health << " Health points left of yours ";
		}
		if (enemyAttack == 2)
		{
			std::cout << "Your enemy brutally attacked  you with . You lost 20 hp " << std::endl;
			Troll.health -= 20;
			std::cout << Troll.health << " Health points left of yours ";
		}
		if (enemyAttack == 3)
		{
			std::cout << "Your enemy is cheeky he healed himself.  He gained  10 hp " << std::endl;
			Orc.health += 10;
			std::cout << Troll.health << " Health points left of yours \nEnemies health left " << Orc.health << std::endl;
		}
		if (enemyAttack == 4)
		{
			std::cout << "Your enemy is very smart he healed himself with half of his hp." << std::endl;
			Orc.health += 50;
			std::cout << Troll.health << " Health points left of yours \nEnemies health left " << Orc.health << std::endl;
		}
		if (Orc.health <= 0 || Orc.health==0)
		{
			system("cls");
			std::cout << "YOU BEAT THE Orcs " << playerName.name << "! Congratulations " << std::endl;
			Orc.battle = false;
			break;
			system("pause");

		}
		if (Troll.health <= 0 || Troll.health == 0)
		{
			system("cls");
			std::cout << "YOU IDIOT " << playerName.name << "YOU LOST BOOOOO" << std::endl;
			Orc.battle = false;
			break;
			system("pause");
		
		}
		
		system("pause");
	}
	system("pause");
}
//function to fight as an orc all his spells and attacks, computer attacks and spells.
void fightAsOrc()
{
	int choice;
	int enemyAttack;

	std::cout << "Prepare for battle " << playerName.name << std::endl;
	while (Orc.battle == true)
	{
		std::cout << "Choose your attack.Type 1-6 for melee attack or 11-15 for spells " << std::endl;
		std::cin >> choice;

			switch (choice)
			{
			case 1:
				std::cout << "You chose Slash attack" << std::endl;
				Troll.health -= 20;
				Orc.energy -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 2:
				std::cout << "You chose Hammer slam attack" << std::endl;
				Troll.health -= 20;
				Orc.energy -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana " << Orc.mana << std::endl;
				break;
			case 3:
				std::cout << "You chose Elbow to the face attack" << std::endl;
				Troll.health -= 20;
				Orc.energy -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 4:
				std::cout << "You chose Head butt attack" << std::endl;
				Troll.health -= 20;
				Orc.energy -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 5:
				std::cout << "You chose Kick attack" << std::endl;
				Troll.health -= 20;
				Orc.energy -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 6:
				std::cout << "You chose combo of death" << std::endl;
				Troll.health -= 50;
				Orc.energy -= 50;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;

			//spells
			case 11:
				std::cout << "You chose Ice Spell" << std::endl;
				Troll.health -= 20;
				Orc.mana -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 12:
				std::cout << "You chose Fire Spell" << std::endl;
				Troll.health -= 20;
				Orc.mana -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 13:
				std::cout << "You chose Darkness Spell" << std::endl;
				Troll.health -= 20;
				Orc.mana -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 14:
				std::cout << "You chose Lightning Spell" << std::endl;
				Troll.health -= 20;
				Orc.mana -= 20;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			case 15:
				std::cout << "You chose Combo of Powerness" << std::endl;
				Troll.health -= 50;
				Orc.mana -= 50;
				std::cout << "Enemies health left " << Troll.health << "\n Your energy " << Orc.energy << "\n Your mana" << Orc.mana << std::endl;
				break;
			default:
				std::cout << "Wrong input try again." << std::endl;
				break;

			}
			//if battle continues and you run out of energy and mana
			if (Orc.mana <= 0  || Orc.energy <= 0)
			{
				std::cout << "You ran out of your mana. Chill out and refill " << std::endl;
				Orc.mana += 70;
				
			}
			else if (Orc.energy<=0 || Orc.energy==0)
			{
				std::cout << "You ran out of your energy. Chill out and refill " << std::endl;
				Orc.energy += 70;
			}

			//generate random actions of enemy. spell,melee,heal
			enemyAttack = rand() % 4 + 1;

			if (enemyAttack == 1)
			{
				std::cout << "Your enemy blasted you with a spell. You lost 15 hp " << std::endl;
				Orc.health -= 15;
				std::cout << Orc.health << " Health points left of yours ";
			}
			if (enemyAttack == 2)
			{
				std::cout << "Your enemy brutally attacked  you with . You lost 20 hp " << std::endl;
				Orc.health -= 20;
				std::cout << Orc.health << " Health points left of yours ";
			}
			if (enemyAttack == 3)
			{
				std::cout << "Your enemy is cheeky he healed himself.  He gained  10 hp " << std::endl;
				Troll.health += 10;
				std::cout << Orc.health << " Health points left of yours \nEnemies health left " << Troll.health << std::endl;
			}
			if (enemyAttack == 4)
			{
				std::cout << "Your enemy is very smart he healed himself with half of his hp." << std::endl;
				Troll.health += 50;
				std::cout << Orc.health << " Health points left of yours \nEnemies health left " << Troll.health << std::endl;
			}

			if (Troll.health <= 0 || Troll.health == 0)
			{
				system("cls");
				std::cout << "YOU BEAT THE Trolls " << playerName.name << "! Congratulations " << std::endl;
				Orc.battle = false;
				break;
				system("pause");

			}
			if (Orc.health <= 0 || Orc.health== 0)
			{
				system("cls");
				std::cout << "YOU IDIOT " << playerName.name << "YOU LOST BOOOOO" << std::endl;
				Orc.battle = false;
				break;
				system("pause");

			}
			
			system("pause");
	}

	system("pause");
}
		



void main()
{
	chooseChar();
	fightAsOrc();
	fightAsTroll();

	system("pause");

}