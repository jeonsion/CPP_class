#include <iostream> 
using namespace std;

class Complex {
	int real;
	int imag;
public:
	Complex() {
		real = 0;	
		imag = 0;
	}

	Complex(int r) {
		real = r;
		imag = 0;
	}

	Complex(int r, int i) {
		real = r;
		imag = i;
	}
	void Show() {
		if (imag > 0 && real != 0)
			cout << "( " << real << "+" << imag << "i )" << endl;
		else if (imag < 0 && real != 0)
			cout << "( " << real << imag << "i )" << endl;
		else if (imag == 0)
			cout << "( " << real << " )" << endl;
		else if(real == 0) 
			cout << "( " << imag << "i )" << endl;
		else if (real == 0 && imag == 0)
			cout << "( 0 )" << endl;
	}
};

int main() {
	Complex u(12, 34);
	Complex v(56, -78);
	Complex x(90);
	Complex y(0, 78);
	Complex z;

	u.Show();
	v.Show();
	x.Show();
	y.Show();
	z.Show();
}