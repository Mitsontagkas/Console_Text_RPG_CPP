#pragma once
#include<iostream>
#include "Character.h"
class Mage : public Character
{
private:
	int mana;
public:
	Mage(std::string char_name, int char_life, int char_base_damage, int char_mana) : Character(char_name, char_life, char_base_damage) {
		mana = char_mana;
	}
	bool cast_spell(Character& target) {
		if (mana >= 20) {
			mana -= 20;
			target.take_damage(base_damage * 2);
			std::cout << "Mage " << name << " cast fireball!!\n";
			return true;
		}
		else {
			std::cout << "You have not enough mana\n";
			return false;
		}
		
	}
	void player_turn(Character& target){
		bool turn_completed = false;
		while (turn_completed == false) {
			int choice;
			std::cout << "1) Normal attack cost zero mana but less damage\n";
			std::cout << "2) Cast a spell cost twenty mana but more damage\n";
			std::cin >> choice;
			if (choice == 1) {
				target.take_damage(base_damage);
				turn_completed = true;
			}
			else if (choice == 2) {
				turn_completed = cast_spell(target);
			}
			else {
				std::cout << "Invalid choice! Try again.\n";
			}
		}
		
	}
};

