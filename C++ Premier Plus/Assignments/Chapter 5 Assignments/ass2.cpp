#include "functions.h";

void ass2() {
	array<long double, ArSize> fractionals;
	fractionals[0] = fractionals[1] = (long double)1;
	for (int i = 2; i < ArSize; i++)
	{
		fractionals[i] = i*fractionals[i - 1];
	}
	for (int i = 0; i < ArSize; i++)
	{
		cout << "!" << i+1 << " = " << fractionals[i] << endl;
	}
}