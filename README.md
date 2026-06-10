# Text-Based RPG in C++

## About the Project
This is a text-based RPG combat simulation built entirely in C++ from scratch. I created this project as a foundational step to practice and solidify Object-Oriented Programming (OOP) principles before transitioning to game engines like Unreal Engine.

## Features & OOP Principles Used
* **Encapsulation:** Used `protected` variables for base stats and `public` getters/functions.
* **Inheritance:** A core `Character` base class, with `Warrior` and `Mage` derived classes.
* **Polymorphism (Function Overriding):** Custom `take_damage` logic implemented for the Warrior to simulate armor mechanics.
* **Object Interaction:** Characters interact and affect each other's states using C++ references (`&`).
* **Player Input:** An interactive turn-based loop utilizing `while` loops and state tracking.

## Files Included
* `main.cpp` - The core game loop and instantiation of characters.
* `Character.h` - The base class providing common stats (health, base damage).
* `Warrior.h` - Derived class featuring damage-reduction armor.
* `Mage.h` - Derived class featuring a mana system and spellcasting choices.

## How to Run
Compile the files using any standard C++ compiler (e.g., g++, Visual Studio) and run the generated executable in your terminal/console.
