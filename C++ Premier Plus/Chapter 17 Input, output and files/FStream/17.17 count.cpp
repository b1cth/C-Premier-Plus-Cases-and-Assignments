//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cstdlib>
//
//int main(int argc, char* argv[]) {
//	using namespace std;
//	if (argc == 1) {
//		cerr << "Usage: " << argv[0] << "filename[s]\n";
//		exit(EXIT_FAILURE);
//	}
//	ifstream fin;
//	int count;
//	char ch;
//	int total = 0;
//	for (int i = 1; i < argc; i++)
//	{
//		fin.open(argv[i]);
//		if (!fin) {
//			cout << "Can't open file " << argv[i] << endl;
//			exit(EXIT_FAILURE);
//		}
//		count = 0;
//		while (fin.get(ch)) {
//			count++;
//		}
//		total += count;
//		fin.clear();
//		fin.close();
//	}
//	cout << "Total: " << total << endl;
//}