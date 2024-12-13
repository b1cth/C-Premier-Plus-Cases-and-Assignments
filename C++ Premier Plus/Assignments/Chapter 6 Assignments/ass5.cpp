#include "functions.h"
void ass5() {
	float income, tax;
	cout << "Enter your income of this financial year: ";
	while (cin >> income) {
		if (income < 0) {
			cout << "Not valid!" << endl;
			break;
		}
		else {
			if (income > 5000 && income < 15000) {
				tax = 0.1 * income;
			}
			else if (income > 15000 && income < 35000) {
				tax = 0.1 * 10000 + (income - 15000) * 0.15;
			}
			else if (income > 35000) {
				tax = 0.1 * 10000 + 20000 * 0.15+(income-35000)*0.2;
			}
		}
		cout << "The tax is: " << tax << endl;
		cout << "Enter your income of this financial year: ";
	}
	cout << "Not valid!" << endl;
}