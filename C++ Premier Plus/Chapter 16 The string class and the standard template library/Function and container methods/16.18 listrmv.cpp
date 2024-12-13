#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

void show(int x) { std::cout << x << " "; }
const int LIM = 10;
int main() {
	using namespace std;
	int ar[LIM] = { 4,5,4,2,2,3,4,8,1,4 };

	list<int> la(ar, ar + LIM);
	list<int> lb(la);
	
	cout << "Original List: \n";
	for_each(la.begin(), la.end(), show);

	cout << endl << "la.remove(4) : \n";
	la.remove(4);
	for_each(la.begin(), la.end(), show);

	cout << endl << "remove algorithm: \n";
	list<int>::iterator it;
	it = remove(lb.begin(), lb.end(), 4);
	for_each(lb.begin(), lb.end(), show);
	lb.erase(it, lb.end());
	cout << "After erase: ";
	for_each(lb.begin(), lb.end(), show);
}