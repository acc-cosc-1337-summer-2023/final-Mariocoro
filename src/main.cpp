#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h>
#include "die.h"
#include "shooter.h"
#include "roll.h"
#include "phase.h"
#include "come_out_phase.h"
#include "point_phase.h"

int main() {
	srand(time(0));

	Die die1, die2;
	Shooter shooter;
	Roll roll(&die1, &die2);
	roll = *shooter.throw_dice();

	ComeOutPhase come_out_phase;

	while (come_out_phase.get_outcome(&roll) == RollOutcome::natural || come_out_phase.get_outcome(&roll) == RollOutcome::craps) {
		cout << roll.roll_value() << " roll again" << endl;
		roll = *shooter.throw_dice();
	}

	cout << roll.roll_value() << " start of point phase" << endl;
	cout << "Roll until " << roll.roll_value() << " or 7 is rolled" << endl;

	int point = roll.roll_value();
	roll = *shooter.throw_dice();
	PointPhase point_phase(point);

	roll = *shooter.throw_dice();
	while (point_phase.get_outcome(&roll) != RollOutcome::point && point_phase.get_outcome(&roll) != RollOutcome::seven_out) {
		cout << roll.roll_value() << " roll again" << endl;
		roll = *shooter.throw_dice();
	}

	cout << roll.roll_value() << " end of point phase" << endl;

	cout << shooter;
}