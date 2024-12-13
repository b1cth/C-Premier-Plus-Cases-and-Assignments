#include "header.h"
//Assignment 3
golf::golf(const char* ch, int n) {
	strcpy_s(fullname, len, ch);
	handicap = n;
}
void golf::show() {
	cout << "Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}

