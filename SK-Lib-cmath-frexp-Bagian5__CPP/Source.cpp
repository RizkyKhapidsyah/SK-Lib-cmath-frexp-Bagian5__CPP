#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double significand;
	int exp, x = 25;

	significand = frexp(x, &exp);

	cout << x << " = " << significand << " * 2^" << exp << endl;

	_getch();
	return 0;
}