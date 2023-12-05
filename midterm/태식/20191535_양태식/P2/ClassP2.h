#pragma once

class Random {
public:
	int nextInRange(int x, int y);
	int next();
private:
	int n;
	int even;
	int odd;
};