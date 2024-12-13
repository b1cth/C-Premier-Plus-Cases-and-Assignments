#include "functions.h"

void ass6() {
	int list_size;
	int limit_of_patrons = 10000;
	
	cout << "Enter the number of patrons: ";
	cin >> list_size;
	int *grandPatron=new int[list_size];
	int *Patron = new int[list_size];
	cin.get();//清除缓冲区里面的换行符
	donation* list = new donation[list_size];
	for (int i = 0; i < list_size; i++)
	{
		cout << "Enter the name of the patron: ";
		cin.getline(list[i].name, ArSize);
		cout << endl;
		cout << "Enter the donated money amount: ";
		cin >> list[i].money;
		cin.get();
	} //要求用户输入名单名字和捐赠金额；

	int m = 0, n = 0;
	for (int i = 0; i < list_size; i++)
	{
		if (list[i].money >= limit_of_patrons) {
			grandPatron[m++] = i;
		}
		else if (list[i].money < limit_of_patrons) {
			Patron[n++] = i;
		}
	}
	cout << "Grand Patrons: \n";
	if (m > 0) {
		for (int i = 0; i < m; i++)
		{
			cout << "Name: " << list[grandPatron[i]].name << "     "
				<< "Amount: " << list[grandPatron[i]].money << "$ \n";
		}
	}
	else {
		cout << "none.\n";
	}

	cout << "Patrons: \n";
	if (n > 0) {
		for (int i = 0; i < n; i++)
		{
			cout << "Name: " << list[Patron[i]].name << "     "
				<< "Amount: " << list[Patron[i]].money << "$ \n";
		}
	}
	else {
		cout << "none.\n";
	}

	delete[]list;
	delete[]grandPatron;
	delete[]Patron;
}