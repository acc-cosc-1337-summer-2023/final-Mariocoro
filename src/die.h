#pragma once
class Die {
private:
	int rolled_value = 1;
	int sides[6] = {1,2,3,4,5,6};
public:
	Die();
	void roll();
	int roll_value() const;
};...