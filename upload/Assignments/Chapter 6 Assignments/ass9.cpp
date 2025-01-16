#include "functions.h"
#include <string>
void inputTxt() {
	int list_size;
	cout << "Enter the number of patrons: ";
	cin >> list_size;
	cin.get();//清除缓冲区里面的换行符
	donation* list = new donation[list_size];
	ofstream InputFile;
	InputFile.open("Patrons.txt");  //打开文件
	if (InputFile.is_open()) {
		InputFile << list_size << endl;
		for (int i = 0; i < list_size; i++)
		{
			cout << "Enter the name of the patron: ";
			cin.getline(list[i].name, ArSize);
			cout << endl;
			cout << "Enter the donated money amount: ";
			cin >> list[i].money;
			cin.get();
			InputFile << list[i].name << endl;
			InputFile << list[i].money << endl;
		} //要求用户输入名单名字和捐赠金额；
		InputFile.close();
		delete[]list;
		
	}
	else {
		cout << "Unable to open file..." << endl;
		return;
	}	
}