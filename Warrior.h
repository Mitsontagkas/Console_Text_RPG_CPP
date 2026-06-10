#pragma once
#include<iostream>
#include "Character.h"

class Warrior : public Character
{
private :
	int armor;

public:
	Warrior(std::string char_name, int char_life, int char_base_damage, int char_armor) : Character(char_name, char_life, char_base_damage) {
			armor = char_armor;
		}
	void take_damage(int damage_amount) override {
		damage_amount -= armor;
		if (damage_amount < 0) {
			damage_amount = 0;
		}
		life -= damage_amount;
		if (life < 0) {
			life = 0;
		}
		std::cout << "Warrior " << name << " has blocked the attack with his armor and recieved " << damage_amount << " damage\n";
	}
};

