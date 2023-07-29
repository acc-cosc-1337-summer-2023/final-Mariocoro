#pragma once
#include "die.h"
class Roll {
private:
	Die* die1;
	Die* die2;
	bool rolled;
	int value;
public:
	Roll(Die* die1, Die* die2);
	void roll_die();
	int roll_value() const;
};