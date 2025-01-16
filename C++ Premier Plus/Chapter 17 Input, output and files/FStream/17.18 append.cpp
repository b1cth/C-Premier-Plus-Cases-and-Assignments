//#include <iostream>
//#include <string>
//#include <fstream>
//const char* filename = "17.18.txt";
//int main() {
//	using namespace std;
//	//show original file name
//	ifstream fin;
//	char ch;
//	fin.open(filename, ios_base::in);
//	if (fin.is_open()) {
//		cout << "Here're the content of " << filename << " file.\n";
//		while (fin.get(ch)) {
//			cout << ch;
//		}
//	}
//	fin.clear();
//	string name;
//	cout << "Please enter names.(Enter blank to quit)\n";
//	ofstream fout;
//	fout.open(filename, ios_base::out | ios_base::app);
//	if (!fout.is_open()) {
//		cerr << "File open failure.\n";
//		exit(EXIT_FAILURE);
//	}
//	while (getline(cin, name) && name.size() > 0) {
//		fout << name << "\n";
//	}
//	fout.clear();
//	fout.close();
//	//show revised file
//	fin.clear();
//	fin.close();
//	fin.open(filename, ios_base::in);
//	if (fin.is_open()) {
//		cout << "Here're the content of " << filename << " file.\n";
//		while (fin.get(ch)) {
//			cout << ch;
//		}
//	}
//	cout << "Done.\n";
//}
//
//
