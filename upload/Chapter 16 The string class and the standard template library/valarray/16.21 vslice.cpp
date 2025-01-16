#include <algorithm>
#include <valarray>
#include <iostream>

const int size = 12;
typedef std::valarray<int> vint;
void show(vint v, int cols);
int main() {
	using std::slice;
	using std::cout;
	using std::endl;

	vint valint(size);
	int i;
	for ( i = 0; i < size; i++)
	{
		valint[i] = rand() % 10;
	}
	cout << "Original valarray: \n";
	show(valint, 3);
	cout << "\nsecond column: \n";
	show(valint[slice(1, 4, 3)], 1);

	valint[slice(2, 4, 3)] = 10;
	cout << "\nset last column to 10.\n";
	show(valint, 3);

	cout << "\nset first column to sum of next two: \n";
	valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)]) + vint(valint[slice(2, 4, 3)]);
	show(valint, 3);
}

void show(vint v, int cols) {
	int lim = v.size();
	for (int i = 0; i < lim; i++)
	{
		std::cout << v[i];
		if (i % cols == cols - 1) {
			std::cout << std::endl;
		}
		else {
			std::cout << " ";
		}
	}
	if (lim % cols != 0) {
		std::cout << std::endl;
	}
}