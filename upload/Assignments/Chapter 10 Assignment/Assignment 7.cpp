#include "header.h"


//Assignment 7 Functions
Betelgeusean_plorg::Betelgeusean_plorg(const char* pt, int index) {
	strcpy_s(name, len, pt);
	CI = index;
	cout << endl;
}
void Betelgeusean_plorg::modiftCI(int value) {
	CI = value;
	cout << "Modified" << endl;
}
void Betelgeusean_plorg::report() const {
	cout << "name: " << name << endl;;
	cout << "CI: " << CI << endl;;
}