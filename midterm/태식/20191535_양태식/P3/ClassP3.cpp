#include <iostream>
#include <string>
using namespace std;

#include "ClassP3.h"

Integer::Integer(int n) {
	k = n;
}

Integer::Integer(string h) {
	k = stoi(h);
}

int Integer::get() {
	return k;
}

void Integer::set(int p) {
	k = p;
}

bool Integer::isEven() {
	if (k % 2 == 0)
		return true;
	else
		return false;
}