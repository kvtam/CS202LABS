//kyle tam
//Monsters.h //rev 2/16/17
//class in here

#ifndef INCLUDE_MONSTERS_H
#define INCLUDE_MONSTERS_H
#include <string>
#include <iostream>

class Monster 
{
	public:
	
		int	getHealth();
		int	setHealth(int health);
		usedPotion();
		setName(std::string name);
		void damage(int damageDealt);
		Monster();
		Monster(std::string name,int health);
	friend void heal();
		 void printMonster();
		
	
	private:
	// static int MAXHEALTH=100; //static variable for the max health not able to be seen ousside of file
	int MAXHEALTH =100;
		int	_health;
			std::string getType();
		std::string getRace();
		std::string getName();
	std::string _name;
	std::string _race;
	std::string _type;
	bool is_dead=false;
};

#endif
