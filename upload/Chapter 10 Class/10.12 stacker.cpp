#include <iostream>
#include "stack.h"
#include <cctype>
using namespace std;
int main() {
	stack st;
	unsigned long po;
	char ch;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit."<<endl;
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n') {
			continue;
		}
		if (!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		else {
			switch (ch) {
			case 'a':
			case 'A': 
				cout << "Enter a PO number to add: "<<endl;
				cin >> po;
				if (st.isFull()) {
					cout << "stack is full!" << endl;
					break;
				}
				else {
					st.push(po);
					cout << "PO# " << po << " added." << endl;
				}
				break;

			case 'p':
			case 'P':
				if (st.isEmpty()) {
					cout << "the stack is already empty." << endl;
				}
				else {
					st.pop(po);
					cout << "PO# " << po << " poped" << endl;
				}
				break;
			}
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit."<<endl;
	}
	cout << "bye";
}