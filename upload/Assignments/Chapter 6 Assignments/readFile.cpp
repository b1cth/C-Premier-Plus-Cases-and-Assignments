#include "functions.h"
#include <string>
void readFile() {
	int list_size; 
	ifstream outputFile;
	outputFile.open("Patrons.txt");
	if (outputFile.is_open()) {
		outputFile >> list_size;
		outputFile.get();
		donation* list = new donation[list_size];
		cout << list_size << endl;
		for (int i = 0; i < list_size; i++)
		{
			outputFile.getline(list[i].name, ArSize);
			outputFile >> list[i].money;
			outputFile.get();
			cout << list[i].name << endl;
			cout << list[i].money << endl;
		}
		outputFile.close();
		delete[]list;
	}
	else {
		cout << "Unable to open file..." << endl;
		return;
	}
}