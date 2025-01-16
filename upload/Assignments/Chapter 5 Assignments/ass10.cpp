#include "functions.h";
void ass10() {
	int num;
	cout << "Enter number of rows: ";
	cin >> num;
	cin.get();
	for (int i = 0,j = num; i < num; i++)
	{
		while (j-1) {
			cout << '.';
			j--;
		}
		for (int k = 0; k < i+1; k++)
		{
			cout << '*';
		}
		j = num - i - 1;
		cout << endl;

	}
}