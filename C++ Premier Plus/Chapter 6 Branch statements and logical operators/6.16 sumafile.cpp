#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
const int MAX = 50;

int main() {
	ifstream inFile;
	char filename[MAX];
	double value,total=0;
	int count = 0;
	cout << "please enter your filename: ";
	cin.getline(filename, MAX);
	inFile.open(filename);
	if(!inFile.is_open() ){
		cout << "Open file failed, terminating the program..." << endl;
		exit(EXIT_FAILURE);
	}
	//inFile >> value;
	//while (inFile.good()) {
	while (inFile >> value){
		total += value;
		count++;
		//inFile >> value;
	}
		if (inFile.eof()) {
			cout << "reached the end of file." << endl;
		}
		else if (inFile.fail()) {
			cout << "failed to get valid value" << endl;
			
		}
		else {
			cout << "unknown error" << endl;
		}

		if (count == 0) {
			cout << "no data processed..." << endl;
			
		}
		else {
			cout << "total value: " << count << endl;
			cout << "the the total value is: " << total << endl;
			cout << "the average num is: " << total / count << endl;
		}
	
	return 0;
}
