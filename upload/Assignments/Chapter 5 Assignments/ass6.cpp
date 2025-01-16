#include "functions.h";
void ass6() {
	const char* months[12] = { "January", "February", "March", "April", "May", "June",
					 "July", "August", "September", "October", "November", "December" };
	int sales[3][12];
	int total[3]{ 0,0,0 };
	int all = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Year " << i + 1 << " sales...\n";
		for (int j = 0; j < 12; j++)
		{
			cout << "Enter the sales of " << months[j] << " : ";
			cin >> sales[i][j];
			total[i]+= sales[i][j];
			cout << endl;
		}
		
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "The total sales of year " << i + 1 << " is : " << total[i] << endl;
		all += total[i];
	}
	cout << "The total sales is : " << all<< endl;
}