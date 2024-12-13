#include "header.h"
//Assignment 4
Sales::Sales(double* pt, int n) {
	double total = 0;
	if (n < QUARTERS) {
		for (int i = 0; i < n; i++)
		{
			sales[i] = pt[i];
			total += sales[i];
		}
		average = total / (double)n;
	}
	else {
		for (int i = 0; i < QUARTERS; i++)
		{
			sales[i] = pt[i];
			total += sales[i];
		}
		average = total / (double)QUARTERS;
	}
	min = max = sales[0];
	for (int i = 0; i < QUARTERS; i++)
	{
		if (min > sales[i]) {
			min = sales[i];
		}
		if (max < sales[i]) {
			max = sales[i];
		}
	}

}

Sales::Sales() {
	for (int i = 0; i < QUARTERS; ++i) {
		sales[i] = 0;
	}
	average = 0;
	max = 0;
	min = 0;
}

void Sales::show() {
	cout << "Sales: " << endl;
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << sales[i] << " ";
	}
	cout << endl;
	cout << "average: " << average << endl;
	cout << "max: " << max << endl;
	cout << "Min: " << min << endl;
}