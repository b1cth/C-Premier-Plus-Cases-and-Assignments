#include "functions.h"
void ass3() {
	char choice;
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore     ";
	cout << "p) pianist     \n";
	cout << "t) tree          ";
	cout << "g) game         \n";
	while (1) {
		
		cin >> choice;
		switch (choice) {
		case 'c':
			cout << "c" << endl;
			break;
		case 'p':
			cout << "p" << endl;
			break;
		case 't':
			cout << "p" << endl;
			break;
		case 'g':
			cout << "p" << endl;
			break;
		default:
			cout << "Please enter c, p, t, or g: q" << endl;
			break;
		}
		continue;
	}
}