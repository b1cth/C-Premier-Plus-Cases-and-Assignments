#include <iostream>
using namespace std;
const double Km2Mile = 0.6214;
const double Gallon2Litre = 3.875;
int main() {
	float distance, gas,consumption;
	cout << "Enter the distance you drive: ";
	cin >> distance;
	cout << "Enter the gas you used: ";

	cin >> gas;
	consumption = float(gas / distance * 100);
	cout << "So every 100km you need: " << consumption << " L gas." << endl;

	cout << "Convert to US style: " << endl;
	cout << "In US, every 1 mile you need: " << (distance *Km2Mile) / (gas / Gallon2Litre) << " galon of gas." << endl;
	return 0;
}
