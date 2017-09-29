//Name:Patryk Wysocki
//Missile Text Game
//Date:21/09/2017
//1st commit
//
////


#include <iostream>
#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>  




//enumerator for the missiless
enum Missile{EXPLOSIVE,NUCLEAR};

int  main()
{
	//all variables
	Missile payload;

	srand(time(NULL)); //used for randomising coordinates

	int const MISSILE_EXPLOSIVE = 5; //constant of amount of explosive missiles
	int const MISSILE_NUCLEAR = 5; //constant of amount of nuclear missiles

	int missileExpNum = 5;
	int missileNucNum = 5;
	int cordsX = 0;	//users inputs cords of attack
	int cordsY = 0;	//users inputs cords of attack
	int radiusExplosive = 40;	//radius of explosive
	int radiusNuclear = 150;	//radius of nuclear
	int launchCode = 123;	//launch code
	int cordsXGenerated;  //generated random xCords for explosive or nuclear
	int cordsYGenerated; //generated random yCords for explosive or nuclear
	int choiceMissile; //type 1 or 2 to choose a missile;
	int choiceArm; //type 1 or 2 to arm the missile;	

	bool hit;//bool to check if missile hit
	bool armed;//bool for arming the missile


	//choose a missile
	std::cout << "Select a missile. Explosive(1) or Nuclear(2)" << std::endl;
	std::cin >> choiceMissile;

	for (int i = 0; i <= MISSILE_EXPLOSIVE; i++)
	{
		//choice 1 == explosive
		if (choiceMissile == 1)
		{
			payload = EXPLOSIVE;
			std::cout << "You chose Explosive missile" << std::endl;
			std::cout << "Choose coordinates of attack " << std::endl;
			std::cin >> cordsX >> cordsY;

			//if coordinates are bigger then the range ask to input new
			while (cordsX > 200 || cordsY > 200)
			{
				std::cout << "coordinates too big for this missile try again " << std::endl;
				std::cout << "Choose coordinates of attack " << std::endl;
				std::cin >> cordsX >> cordsY;
			}

			// output the cords
			std::cout << "Your coordinates are : " << cordsX << " and " << cordsY << std::endl;

			std::cout << "Write the launch code (123)" << std::endl;
			std::cin >> launchCode;

			//if launch code wrong write again
			while (launchCode != 123)
			{
				std::cout << "Wrong code. Write the launch code " << std::endl;
				std::cin >> launchCode;
			}


			//arm the missile
			std::cout << "Arm your missile. Press 1 to arm the missile" << std::endl;
			std::cin >> choiceArm;

			while (choiceArm != 1)
			{
				std::cout << "Wrong key . Press 2 to arm the missile" << std::endl;
				std::cin >> choiceArm;
			}
			if (choiceArm == 1)
			{
				armed = true;
				std::cout << "succesfull arming of missile" << std::endl;
				std::cout << "Prepare for attack" << std::endl;
			}
			//randomising coordinates for explosive
			cordsXGenerated = rand() % 200 + 1;
			cordsYGenerated = rand() % 200 + 1;
			std::cout << "Target coordinates  " << cordsXGenerated << "   " << cordsYGenerated << std::endl;
			system("pause");

			//checking for collision
			//if if didnt hit
			if (cordsXGenerated <= cordsX + radiusExplosive && cordsXGenerated <= cordsX - radiusExplosive ||
				cordsYGenerated>=cordsY+radiusExplosive && cordsYGenerated >= cordsY - radiusExplosive)
			{
				hit = false;
				missileExpNum--;
				system("cls");
				std::cout << "MISS" << "  " << "Missiles left " << missileExpNum << std::endl;

			}

			// if it did hit
			else
			{
				hit = true;
				system("cls");
				std::cout << "HIT" << std::endl;
				std::cout << "GG you win" << std::endl;
				break;
			}

			// u lost if u run out of missiles
			if (missileExpNum == 0)
			{
				std::cout << "You lost" << std::endl;
				break;
			}
		}

	}

	for (int i = 0; i <= MISSILE_NUCLEAR; i++)
	{
		//2==nuclear missile
		if (choiceMissile == 2)
		{
			payload = NUCLEAR;
			std::cout << "You chose Nuclear missile" << std::endl;
			std::cout << "Choose coordinates of attack " << std::endl;
			std::cin >> cordsX >> cordsY;

			//if coordinates are bigger then the range ask to input new
			while (cordsX > 500 || cordsY > 500)
			{
				std::cout << "coordinates too big for this missile try again " << std::endl;
				std::cout << "Choose coordinates of attack " << std::endl;
				std::cin >> cordsX >> cordsY;
			}

			std::cout << "Your coordinates are : " << cordsX << " and " << cordsY << std::endl;

			std::cout << "Write the launch code (123) " << std::endl;
			std::cin >> launchCode;

			//if launch code wrong write again
			while (launchCode != 123)
			{
				std::cout << "Wrong code. Write the launch code (123) " << std::endl;
				std::cin >> launchCode;
			}

			std::cout << "Arm your missile. Press 2 to arm the missile" << std::endl;
			std::cin >> choiceArm;

			while (choiceArm != 2)
			{
				std::cout << "Wrong key . Press 2 to arm the missile" << std::endl;
				std::cin >> choiceArm;
			}

			if (choiceArm == 2)
			{
				armed = true;
				std::cout << "succesfull arming of missile" << std::endl;
				std::cout << "Prepare for attack" << std::endl;
			}		
			
			//randomising coordinates for Nuclear
			cordsXGenerated = rand() % 500 + 1;
			cordsYGenerated = rand() % 500 + 1;
			std::cout << "Target coordinates  " << cordsXGenerated << "   " << cordsYGenerated << std::endl;
			system("pause");
			
			//checking for collision
			if (cordsXGenerated <= cordsX + radiusNuclear && cordsXGenerated <= cordsX - radiusNuclear ||
				cordsYGenerated >= cordsY + radiusNuclear && cordsYGenerated >= cordsY - radiusNuclear)
			{
				hit = false;
				missileNucNum--;
				system("cls");
				std::cout << "MISS" << "  " << "Missiles left " << missileNucNum << std::endl;

			}

			else
			{
				hit = true;
				system("cls");
				std::cout << "HIT" << std::endl;
				std::cout << "GG you win" << std::endl;
				break;
			}
			// u lost if u run out of missiles
			if (missileNucNum == 0)
			{
				std::cout << "You lost" << std::endl;
				break;
			}
			
		}
	}
	system("pause");
}


//struct Missile {
//	Warhead payload;
//	Coordinates coordinates;
//	Target target;
//
//	bool armed;
//
//	void arm()
//	{
//		if (armed)
//		{
//			armed = false;
//		}
//		else
//		{
//			armed = true;
//		}
//	}
//	void update()
//	{
//		
//	}
//};
//typedef struct Position {
//	int x;
//	int y;
//	void print()
//	{
//		std::cout << x << y << std::endl;
//	}
//}Coordinates;
//
//typedef struct Enemy {
//	Coordinates coordinates;
//}Target;