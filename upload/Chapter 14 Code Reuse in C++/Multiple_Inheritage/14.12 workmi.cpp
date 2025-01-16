#include <iostream>
#include <string>
#include "14.10 workermi.h"
#include <cstring>
const int SIZE{ 5 };
Worker* pt[SIZE];
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee catagory: \n"
			<< "w: waiter  s: singer  "
			<< "t: singingwaiter  q: quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL) {
			cout << "Please enter w s t or q\n";
			cin >> choice;
		}
		if (choice == 'q') {
			break;
		}
		switch (choice) {
		case 'w':
			pt[ct] = new Waiter;
			break;
		case 's':
			pt[ct] = new Singer;
			break;
		case 't':
			pt[ct] = new SingingWaiter;
			break;
		default:
			break;
		}
		cin.get();
		pt[ct]->set();
	}
	cout << "\nHere's your staffs: \n";
	int i;
	for (i = 0; i < ct; i++)
	{
		pt[i]->show();
		cout << endl;
	}
	for (i = 0; i < ct; i++)
	{
		delete pt[ct];
	}
	cout << "bye..." << endl;
}