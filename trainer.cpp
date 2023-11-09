#include "trainer.hpp"
#include <iostream>

using namespace std;

void Trainer::battle(Trainer& challenger) {
	cout << challenger.name << " challenges " << this->name << " to a battle!" << endl;
	while (this->team->hasActivePokemon() && challenger.team->hasActivePokemon()) {
		this->takeTurn(challenger);
		if (!challenger.team->hasActivePokemon()) {
			cout << this->name << " wins the battle!" << endl;
			break;
		}
		challenger.takeTurn(*this);
		if (!this->team->hasActivePokemon()) {
			cout << challenger.getName() << " wins the battle!" << endl;
			break;
		}
	}
}

void Trainer::takeTurn(Trainer& challenger) {
	int action;
	cout << this->name << "'s turn. Choose an action:" << endl;
	cout << "1. Attack" << endl;
	cout << "2. Swap Pokemon" << endl;

	Party* enemyParty = challenger.getTeam();
	Pokemon& enemyPokemon = enemyParty->getCurrent();
	Pokemon& ownPokemon = this->team->getCurrent();

	ownPokemon.performMove(enemyPokemon);
	if (enemyPokemon.getHP() <= 0) {
		cout << enemyPokemon.getName() << " has fainted!" << endl;
		if (enemyParty->hasActivePokemon()) {
			enemyParty->swapPokemon();
		}
	}
}