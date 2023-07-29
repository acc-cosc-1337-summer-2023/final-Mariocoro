#pragma once
#include "phase.h"
#include "roll.h"
class ComeOutPhase : public phase {
public:
	RollOutcome get_outcome(Roll* roll);
};