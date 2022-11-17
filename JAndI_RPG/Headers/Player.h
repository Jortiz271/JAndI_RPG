#pragma once
#include <string>
using namespace std;
class Player
{
private:
	string armor;
	string weapon;
	string magic;
	int mana;
	int exp;
	int healthPotions;
public:
	bool canCast(int MP);
	bool dealDamage(bool attking);
	void setEquipment(string item);
	int getHealth();
	void setHealth(int HP);
	int getMana();
	void setMana(int MP);
};