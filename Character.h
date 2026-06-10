#pragma once
#include<iostream>
class Character
{
protected:
	std::string name;
	int life;
	int base_damage;


public:
	Character(std::string char_name, int char_life, int char_base_damage) {
		name = char_name;
		life = char_life;
		base_damage = char_base_damage;
	}

	std::string getName() const {
		return name;
	}

	int getLife() const {
		return life;
	}

	virtual void take_damage(int damage_amount) {
		life -= damage_amount;
		if (life < 0) {
			life = 0;
		}
		std::cout << name << " took " << damage_amount << " damage.\n";
	}

	bool is_alive() const{
		if (life <= 0) {
			return false;
		}
		else {
			return true;
		}
	}
	int get_damage() const{
		return base_damage;
	}
};

