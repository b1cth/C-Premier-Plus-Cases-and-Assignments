#include "functions.h";
void ass3() {
	int digit=0,total=0;
	cout << "Enter number: \n";
	
	while ((cin >> digit)) {
		if (digit == 0) {
			cout << "Terminate program...Total is = " << digit << endl;
			break;
		}

		total += digit;
		cout << "total = " << total << endl;
	}
	
}