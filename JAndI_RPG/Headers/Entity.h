#pragma once
#include <string>
using namespace std;
class Entity
{
private:
	int health;
	int attack;
	string defense;
	int level;
	string attackType;

public:
	int DealDamage(string dmg);
	int getHealth();
	void setHealth(int Health);
	int getAttack();
	void setAttack(int Health);
	int takeDamage(string attack);
};