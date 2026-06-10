#include<iostream>
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"

int main() {
	
	Warrior my_warrior("Barrian", 100, 15, 5);
	Mage my_mage("Vendil", 60, 10, 50);
	
	while (my_warrior.is_alive() && my_mage.is_alive()) {
		
		my_mage.player_turn(my_warrior);

		if (my_warrior.is_alive()) {
			my_mage.take_damage(my_warrior.get_damage());
		}
	}
}
