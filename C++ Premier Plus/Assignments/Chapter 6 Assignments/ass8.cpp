#include "functions.h"
#include <fstream>
void ass8() {
	ofstream outFile;
	outFile.open("text.txt");
	if (!outFile.is_open()) {
		std::cerr << "无法打开文件进行写操作。" << std::endl;
		return;
	}
	char words[ArSize];
	cin.get(words, ArSize);
	int count = 0,i=0;
	while(words[count]!='\0') {
		count++;
		i++;
	}
	outFile << words;
	outFile.close();
	cout << "total " << count << " words." << endl;

}