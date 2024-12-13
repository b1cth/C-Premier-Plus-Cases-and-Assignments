#include "Header.h"

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	strcpy_s(performers, 50, s1);
	strcpy_s(label, 20, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d) {
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
void Cd::report() const {
	using std::cout;
	using std::endl;
	cout << "Performer: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}
Cd& Cd::operator=(const Cd& d) {
	if (this == &d) {
		return *this;
	}
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* m, const char* s1, const char* s2, int n, double x) :Cd(s1, s2, n, x){
	int len = strlen(m) + 1;
	mainworks = new char[len];
	strcpy_s(mainworks, len, m);
}
Classic::Classic(const char* m, const Cd& d) :Cd(d) {
	int len = strlen(m) + 1;
	mainworks = new char[len];
	strcpy_s(mainworks, len, m);
}
Classic::~Classic() {
	delete[] mainworks;
}
void Classic::report() const {
	using std::cout;
	using std::endl;
	Cd::report();
	cout << "Main works: " << mainworks << endl;
}
Classic& Classic::operator=(const Classic& d) {
	if (this == &d) {
		return *this;
	}
	Cd::operator=(d);
	delete[] mainworks;
	int len = strlen(d.mainworks) + 1;
	mainworks = new char[len];
	strcpy_s(mainworks, len, d.mainworks);
}