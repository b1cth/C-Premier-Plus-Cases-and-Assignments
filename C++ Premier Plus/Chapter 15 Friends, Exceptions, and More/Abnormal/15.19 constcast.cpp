#include <iostream>
void change(const int* pt, int n);
int main() {
	using namespace std;
	int pop1 = 38383;
	const int pop2 = 2000;
	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
	change(&pop1, 300);
	change(&pop2, 300);
	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
	return 0;
}
void change(const int* pt, int n) {
	int* pc;
	pc = const_cast<int*>(pt);
	*pc += n;
}