#include "header.h"
Person::Person() {
	lname = " ";
	fname[0] = '\0';
}
Person::Person(const string& ln, const char* fn) {
	lname = ln;
	strcpy_s(fname, LIMIT, fn);
}
void Person::Show() const {
	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
}
void Person::FormalShow()const {
	cout << "Last Name: " << lname << endl;
	cout << "First Name: " << fname << endl;
}