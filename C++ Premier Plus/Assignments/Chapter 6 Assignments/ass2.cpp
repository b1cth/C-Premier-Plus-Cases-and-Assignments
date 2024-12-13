#include "functions.h"
void ass2() {
	double numbers[10];
	int n = 0,count=0;
	double avg, total=0;
	cout << "Enter 10 double value or type non-digital value to exit: ";
	while ((cin >> numbers[n]) && (n < 10) ){
		total += numbers[n];
		n++;
	}
	/*if (n < 10) {
		k = 10 - n;
	}
	for (int j = k; j < 10; j++)
	{
		numbers[j] = 0;
	}*/
	avg = total / n;
	for (int m = 0; m < n; m++)
	{
		if (numbers[m] > avg) {
			count++;
		}
		
	}
	cout << "There are " << count << " greater than the average." << endl;
	cin.get();
}