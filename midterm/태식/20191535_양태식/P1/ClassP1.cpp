#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>
#include "ClassP1.h"

int Random::next() {

	n = rand();
	return n;
}

int Random::nextInRange(int x, int y) {
	n = rand() % (y - x + 1) + x;
	return n;
}
