#include "functions.h";

void ass1() {
	int a, b,total=0;
	cout << "Please enter the two digits: \n";
	cin >> a >> b;
	for (int i = a; i < (b+1); i++)
	{
		total += i;
	}

	cout << "The sum between " << a << " and " << b << " is: " << total << endl;
}