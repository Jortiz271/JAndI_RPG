#pragma once
#include <string>
using namespace std;
class BasicEnemy
{
private:
	string armor;
	string weapon;
public:
	string dropLoot();
	int dropExperience();
	void generateSprite(int);

};