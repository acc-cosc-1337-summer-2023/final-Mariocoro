#include "shooter.h"
#include <iostream>

Shooter::Shooter() {

}

Shooter::~Shooter() {
	for (Roll* r : rolls) {
		delete r;
	}
}

Roll* Shooter::throw_dice() {
	Die d1, d2;
	Roll* r = new Roll(&d1, &d2);
	r->roll_die();
	rolls.push_back(r);
	return r;
}

std::ostream& operator<<(std::ostream& os, const Shooter& obj){
	// os << obj.rolls;
	for (Roll* r : obj.rolls){
		os << r->roll_value() << "\n";
	}
	return os;
}