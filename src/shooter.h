#pragma once
#include "Roll.h"
#include <vector>
#include <ostream>
class Shooter {
private:
	std::vector<Roll*> rolls;
public:
	Shooter();
	~Shooter();
	Roll* throw_dice();
	friend std::ostream& operator<<(std::ostream& os, const Shooter& obj);
};