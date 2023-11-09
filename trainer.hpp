#ifndef TRAINER_H
#define TRAINER_H

#include <string>
#include <vector>
#include "party.hpp"

class Trainer {
public:
	~Trainer() {
		delete team;
	}
	Trainer(string n, Party* t) : name(n), team(t) {}
	string getName() const { return name; }
	Party* getTeam() const { return team; }
	void battle(Trainer& challenger);
	void takeTurn(Trainer& challenger);
protected:
	string name;
	Party* team;
};

#endif TRAINER_H