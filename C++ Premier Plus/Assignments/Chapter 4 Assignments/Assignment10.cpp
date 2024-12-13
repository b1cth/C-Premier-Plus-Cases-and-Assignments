#include "data.h";
#include <array>
#include <iomanip>
void ass10() {
	array<float, 3> result;
	float avg=0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the #" << i+1 << " time: \n";
		cin >> result[i];
		avg += result[i];
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "#" << i+1 << " time is: " << result[i] << "s " << endl;
	}
	
	cout << "The average time is: " << fixed << setprecision(2) << avg /3<< "s " << endl;
	
}