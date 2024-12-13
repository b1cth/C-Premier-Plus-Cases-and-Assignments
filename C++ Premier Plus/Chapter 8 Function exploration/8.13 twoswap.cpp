//#include <iostream>
//using namespace std;
//struct job {
//	char name[40];
//	double salary;
//	int floor;
//};
//
//void show(job& j);
//
//template <typename any>
//void Swap(any& a, any& b);
//
//template <> void Swap(job& a2, job& a3);
//
//int main() {
//	job sue = { "Susan Yaffee",73000.60,7 };
//	job sidney = { "Sidney Taffee",78060.72,9 };
//	show(sue);
//	show(sidney);
//	cout << "After swap" << endl;
//	Swap(sue, sidney);
//	show(sue);
//	show(sidney);
//	return 0;
//}
//
//void show(job& j) {
//	cout << j.name << "'s salary is: " << j.salary << " in " << j.floor << " floor" << endl;
//}
//
//template <typename any>
//void Swap(any& a, any& b) {
//	any temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <> void Swap(job& a2, job& a3) {
//	double tempd = a2.salary;
//	int tempi = a2.floor;
//	a2.salary = a3.salary;
//	a2.floor = a3.floor;
//	a3.salary = tempd;
//	a3.floor = tempi;
//	
//}