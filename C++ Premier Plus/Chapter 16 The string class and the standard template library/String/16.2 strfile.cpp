//#include <string>
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//int main() {
//	using namespace std;
//	fstream fin;
//	fin.open("tobuy.txt");
//	if (fin.is_open() == false) {
//		cerr << "Can't open file, bye!\n";
//		exit(EXIT_FAILURE);
//	}
//	string s;
//	int count = 0;
//	getline(fin, s, ':');
//	while (fin) {
//		count++;
//		cout << count << ": " << s << endl;
//		getline(fin, s, ':');
//	}
//	cout << "Done.\n";
//	fin.close();
//	return 0;
//}