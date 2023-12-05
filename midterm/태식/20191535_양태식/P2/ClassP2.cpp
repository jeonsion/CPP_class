#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>
#include "ClassP2.h"

int Random::next() {

	while (1) {
		n = rand();
		if (n % 2 == 0) {
			even = n;
			break;
		}
	}
	return even;
}

int Random::nextInRange(int x, int y) {
	while (1) {
		n = rand() % (y - x + 1) + x;
		if (n % 2 == 1) {
			odd = n;
			break;
		}
	}
	return odd;
}
