#pragma once

class Integer {
private:
	int k;
public:
	Integer(int n);
	Integer(string h);
	int get();
	void set(int p);
	bool isEven();
};
