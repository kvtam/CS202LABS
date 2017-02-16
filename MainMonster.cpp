//Kyle Tam 
//Feb 9 2017 revised 2/16/17
//Monster main
#include <iostream>
#include <string>
#include "monsters.h"
using std::string;
using std::cout;
using std::endl;

void heal( Monster &v, int healed){
	v.setHealth(100);
}
int main(){
	Monster a;
	a.printMonster();
	Monster b;
	b.printMonster();
	b.damage(20);
	b.printMonster();
	Monster c;
	c.damage(80);
	c.printMonster();
	c.usedPotion();
	c.printMonster();
	return 0;
} 
