#include "roll.h"
Roll::Roll(Die* die1, Die* die2) {
	this->die1 = die1;
	this->die2 = die2;
	rolled = false;
}

void Roll::roll_die() {
	die1->roll();
	die2->roll();
	value = die1->roll_value() + die2->roll_value();
	rolled = true;
}

int Roll::roll_value() const {
	return value;
}