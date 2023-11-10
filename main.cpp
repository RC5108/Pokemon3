/*
 * Marc Baldwin & Miles Kent
 * Lab 3
 * Program that uses class Pokemon to simulate a basic pokemon battle between 2 Trainer objects
 */

#include "pokemon.hpp"
#include "party.hpp"
#include "pikachu.hpp"
#include "raichu.hpp"
#include "trainer.hpp"
#include <iostream>

using namespace std;

int main() {
	
	srand((time(NULL)));

    Party userParty({
        Pokemon("Bulbasaur", "Grass", 100, 20, 20),
        Pokemon("Charmander", "Fire", 100, 20, 20),
        Pokemon("Squirtle", "Water", 100, 20, 20),
        Pikachu(100, 20, 20, 19),
        Pokemon("Jigglypuff", "Normal", 100, 20, 20),
        Pokemon("Meowth", "Normal", 100, 20, 20)
        });
    Party rivalParty({
        Pokemon("Pidgey", "Normal", 100, 20, 20),
        Pokemon("Rattata", "Normal", 100, 20, 20),
        Pokemon("Spearow", "Normal", 100, 20, 20),
        Pikachu(100, 20, 20, 19),
        Pokemon("Zubat", "Poison", 100, 20, 20),
        Pokemon("Caterpie", "Bug", 100, 20, 20)
        });

    Trainer trainer1("Ash", &userParty);
    Trainer trainer2("Gary", &rivalParty);

    trainer1.battle(trainer2);

	return 0;
}
