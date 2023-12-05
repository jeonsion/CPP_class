#include <iostream>
using namespace std;

#include "ClassP5.h"

Exp::Exp(int n, int p) {
	Value = 1;
	base = n;
	exp = p;
	for (int i = 0; i < p; i++) {
		Value *= n;
	}
}

Exp::Exp(int q) : Exp(q, 1) {

}

Exp::Exp() : Exp(1) {

}

int Exp::getValue() {
	return Value;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp k) {
	if (Value == k.Value)
		return true;
	else
		return false;
}