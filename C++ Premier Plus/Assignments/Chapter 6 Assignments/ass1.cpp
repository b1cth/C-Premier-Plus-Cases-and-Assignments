#include "functions.h"

void ass1() {
	cout << "Input content...\n";
	char arr[ArSize];
	//char result[20];
	int count=0;
	cin.getline(arr, ArSize);
	for (int i = 0; i < ArSize; i++)
	{
		if (arr[i] != '@') {
			count++;
			if (isalpha(arr[i])) {
				if (arr[i] <= 122 && arr[i] >= 97) {
					arr[i] = toupper(arr[i]);
					cout << arr[i];
				}
				else if(arr[i] <= 90 && arr[i]>=65){
					arr[i] = tolower(arr[i]);
					cout << arr[i];
				}
			}
			else {
				cout << arr[i];
			}
		}
		else {
			break;
		}
	}
}