//Kyle Tam 
//monster.cpp revised 2/16/17
//functions go here
#include "monsters.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
//int MAXHEALTH=100;


std::string setRace(){
//	srand(time(NULL));
	std::vector <std::string> races{"Dragon","Goblin","Mimic","Troll","T-Rex","Elf","Lesser Demon","Greater Demon","Matt Demon","Actual Cannibal Shia LeBeouf"};
//	std::default_random_engine generator;
//	std::uniform_int_distribution<int> distribution(0,9);
//	int randNum =distribution(generator);
	int randNum= rand()%(races.size());
	return races[randNum];
	
}
std::string setType(){
//	srand(time(0)%400);
	std::vector <std::string> types{"Water","Earth","Fire","Wind","Light","Dark","Divine","Avatar master of all four elements"};
//	std::default_random_engine generator;
//	std::uniform_int_distribution<int> distribution(0,types.size());
//	int randNum =distribution(generator);
	int randNum= rand()%(types.size());
	return types[randNum];
}
std::string randomName(){
	std::vector <std::string> names{"Glug","Zork","Aang","Kyle","Tristan","Lilly","Austin"};
//	std::default_random_engine generator;
//	std::uniform_int_distribution<int> distribution(0,names.size());
	int randNum =rand()%(names.size());
	return names[randNum];
}

//////////////CTORS///////////
Monster::Monster(){
	_health=MAXHEALTH;
	_race=setRace();
	_type=setType();
	_name=randomName();
}
Monster::Monster(std::string name, int health ){
	_name=name;
	_health=health;
	_race=setRace();
	_type=setType();
}


/////////GET-Functions///////
int Monster::getHealth(){
	return _health;
}
std::string Monster::getType(){
	return _type;
}
std::string Monster::getRace(){
	return _race;
}
std::string Monster::getName(){
	return _name;
}
////////SET-Functions//////////
Monster::setHealth(int health){
	if(health<=MAXHEALTH) 
	_health=health;
}
Monster::setName(std::string name){
	_name=randomName();
}
///////Health-Alterations//////
void Monster::damage(int damageDealt){
	_health -=damageDealt;
	if(_health<=0)
		is_dead=true;
	
}
 Monster::usedPotion(){
	_health=MAXHEALTH;
}

void Monster::printMonster(){
	std::cout<<getName();
	std::cout<<" is a ";
	std::cout<<getType();
	std::cout<<" ";
	std::cout<<getRace();
	std::cout<<" with ";
	std::cout<<getHealth();
	std::cout<<"HP"<<std::endl;
}
