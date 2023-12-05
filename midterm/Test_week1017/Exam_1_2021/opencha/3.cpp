// main 파일

#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if( a.equals(b) )
		cout << "same" << endl;
	else 
		cout << "not same" << endl;
}
C++
//  Exp.cpp 파일

#include "Exp.h"

Exp::Exp() {  base = 1; jisu = 1; } 
	
Exp::Exp(int a) { base = a; jisu = 1; }

Exp::Exp(int a, int b) { base = a; jisu = b; }

int Exp::getValue() { 
	int result = base;
	for( int i=1; i<jisu; i++ )
		result *= base;
	return result;
}

int Exp::getBase() {
	return base;
}
int Exp::getExp() {
	return jisu;
}
bool Exp::equals( Exp b) {
	if( getValue() == b.getValue() ) return true;
	else return false;
}
C++
// Exp.h 파일

class Exp {
	int base;
	int jisu;
public :
	Exp(); 
	Exp(int a);
	Exp(int a, int b);
	int getValue();
	int getBase();
	int getExp();
	bool equals( Exp b);
};