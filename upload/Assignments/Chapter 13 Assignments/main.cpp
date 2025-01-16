#include "Header.h"
void Bravo(const Cd& disk);
int main() {
	using std::cout;
	using std::endl;
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B Flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	cout << "Using object directly:\n";
	pcd->report();
	pcd = &c2;
	pcd->report();

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Testing assignment: ";
	Classic copy;
	copy = c2;
	copy.report();

}
void Bravo(const Cd& disk) {
	disk.report();
}