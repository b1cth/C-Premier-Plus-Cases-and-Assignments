#include "data.h";
void ass3() {
	char FirstName[ArSize];
	char LastName[ArSize];
	char FinalName[50];
	cout << "Enter your first name: \n";
	cin.getline(FirstName, ArSize);
	cout << "Enter your last name: \n";
	cin.getline(LastName,ArSize);
	strcpy_s(FinalName, LastName);
	strcat_s(FinalName, ", ");
	strcat_s(FinalName, FirstName);
	cout << "Here's the infomation in a single string: " << FinalName;
}

