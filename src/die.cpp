#include "die.h"
#include <cstdlib>
Die::Die() {
}

void Die::roll() {
	rolled_value = sides[rand() % 6];
}

int Die::roll_value() const {
	return rolled_value;
}..