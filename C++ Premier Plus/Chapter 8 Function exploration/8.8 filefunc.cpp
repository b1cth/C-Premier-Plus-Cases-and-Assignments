//#include <iostream>
//#include <fstream>
//using namespace std;
//const int LIMIT = 5;
//void file_it(ostream& os, double fo, const double* fe, int con);
//int main() {
//	ofstream fout;
//	const char* fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open()) {
//		exit(EXIT_FAILURE);
//	}
//
//	double objective;
//	cout << "please enter your objective in mm: ";
//	cin >> objective;
//	double eps[LIMIT];
//	cout << "please enter the focal length in mm: " << endl;
//	for (int i = 0; i < LIMIT; i++) {
//		cout << " focal length # " << i + 1<<" ";
//		cin >> eps[i];
//		cout << endl;
//	}
//	file_it(cout, objective, eps, LIMIT);
//	file_it(fout, objective, eps, LIMIT);
//	
//	return 0;
//}
//
//void file_it(ostream& os, double fo, const double* fe, int con) {
//	os<< "the objective length is: " << fo << endl;
//	
//	for (int i = 0; i < con; i++) {
//		os << "The magnification are: " << (int)fo / fe[i] + 0.5 << endl;
//	}
//
//	
//}