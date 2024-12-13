#include "header.h"


void printChar(const char* ch, int n) {
	call::count++;
	if (n != 0) {
		for (int i = 0; i < call::count; i++)
		{
			cout << ch << endl;
		}
	}
	else {
		cout << ch << endl;
	}

}

//main
//printChar("Hello", 2);
//printChar("Hello", 3);
//printChar("Hello");
//printChar("Hello", 2);
//printChar("Hello", 3);