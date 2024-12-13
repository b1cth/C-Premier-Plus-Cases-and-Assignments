#include "header.h"
void transferToUpper(string& str) {
	while (!str.empty() && (str != "q") && (str != "Q")) {
		for (int i = 0; i < str.size(); i++)
		{
			str[i] = toupper(str[i]);
		}
		cout << str << endl;
		cout << "Next string (q to quit) :" << endl;
		getline(cin, str);
	}
	cout << "Bye...\0";
}

//main
//int main()
//{
//	string str;
//	cout << "Enter a string: ";
//	getline(cin, str);
//	transferToUpper(str);
//}