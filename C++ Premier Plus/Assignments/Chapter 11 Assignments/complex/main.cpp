#include "complex0.h"
int main() {
	
	complex a(3.0, 4.0);
	complex c;
	cout << "Enter a complex number (q to quit):\n";
	while (cin >> c) {
		cout << "c is: " << c;
		cout << "complex conjugate is " << (~c) << '\n';
		cout << "a is: " << a;
		cout << "a + c is: " << a + c;
		cout << "a - c is: " << a - c;
		cout << "a * c is: " << a * c;
		cout << "2 * c is: " << 2 * c;
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "done ! \n";
	return 0;
}