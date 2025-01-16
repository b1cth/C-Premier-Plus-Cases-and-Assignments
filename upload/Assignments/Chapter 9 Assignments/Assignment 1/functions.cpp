#include "golf.h";

void setgolf(golf& g, const char* name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g) {
	cout << "Enter name: \n";
	cin.getline(g.fullname, Len);
	if (strlen(g.fullname) != 0) {
		cout << "Enter handicap: \n";
		cin >> g.handicap;
		return 1;
	}
	else {
		return 0;
	}
}
//resets handicap to new value
void handicap(golf& g, int hc) {
	g.handicap = hc;
}

//display content
void showgolf(const golf& g) {
	cout << "Full Name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}
