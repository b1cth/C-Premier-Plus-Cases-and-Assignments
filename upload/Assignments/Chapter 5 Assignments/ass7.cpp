#include "functions.h";


void ass7() {
	cout << "How many cars do you wish to catalog? \n";
	int numbers;
	cin >> numbers;
	car* arr = new car[numbers];
	cin.get();
	for (int i = 0; i < numbers; i++)
	{
		cout << "Car #" << i + 1 << " : " << endl;
		cout << "Please enter the make: ";
		cin.getline(arr[i].companyName,ArSize);
		cout << "Please enter the year made: ";
		cin >> arr[i].manufactureYear;
		cin.get();
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < numbers; i++)
	{
		cout<< arr[i].manufactureYear<<"   "<< arr[i].companyName<<endl;
	}
	delete[]arr;
}