#pragma once

class Exp {
private:
	int Value;
	int base;
	int exp;
public:
	Exp(int n, int p);
	Exp(int q);
	Exp();
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp);
};