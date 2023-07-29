#pragma once
#include "phase.h"
class PointPhase : phase {
private:
	int point;
public:
	PointPhase(int p);
	RollOutcome get_outcome(Roll* roll) override;
};