#include "functions.h";
void ass5() {
	const char* months[] = { "January", "February", "March", "April", "May", "June",
					 "July", "August", "September", "October", "November", "December" };
	int sale[12];
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the sales of " << months[i] << " : \n";
		cin >> sale[i];
		total += sale[i];
	}
	cout << "The sales for the whole year is : " << total;
}