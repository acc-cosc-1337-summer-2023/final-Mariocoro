#pragma once
#include "roll.h"
enum RollOutcome {
	natural, craps, point, seven_out, nopoint
};

class phase {
public:
	virtual RollOutcome get_outcome(roll* roll){}
};
