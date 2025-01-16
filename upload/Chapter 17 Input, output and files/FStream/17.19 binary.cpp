//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <cstdlib>
//
//const int LIM = 20;
//struct planet {
//	char name[LIM];
//	double population;
//	double g;
//};
//const char* filename = "planets.dat";
//inline void eatline() { while (std::cin.get() != '\n')continue; }
//int main() {
//	using namespace std;
//	cout << fixed;
//	planet p1;
//	ifstream fin(filename, ios_base::in | ios_base::binary);
//	if (fin.is_open()) {
//		cout << "Here are the contents of file: " << filename << ": \n";
//		while (fin.read((char*)&p1, sizeof(p1))) {
//			cout << setw(20) << p1.name
//				<< setprecision(0) << setw(12) << " " << p1.population
//				<< setprecision(2) << setw(6) << " " << p1.g << endl;
//		}
//	}
//	fin.clear();
//	fin.close();
//	ofstream fout;
//	fout.open(filename, ios_base::out | ios_base::app | ios_base::binary);
//	if (!fout.is_open()) {
//		cerr << "Can't open file: " << filename << endl;
//		exit(EXIT_FAILURE);
//	}
//	cout << "Enter planet name: (Enter empty to quit): ";
//	cin.get(p1.name, LIM);
//	while (p1.name[0] != '\0') {
//		eatline();
//		cout << "Enter population: ";
//		cin >> p1.population;
//		cout << "Enter gravity: ";
//		cin >> p1.g;
//		eatline();
//		fout.write((char*)&p1, sizeof(p1));
//		cout << "Enter planet name: (Enter empty to quit): ";
//		cin.get(p1.name, LIM);
//	}
//	fout.clear();
//	fout.close();
//	fin.open(filename, ios_base::in | ios_base::binary);
//	if (fin.is_open()) {
//		cout << "Here are the contents of file: " << filename << ": \n";
//		while (fin.read((char*)&p1, sizeof(p1))) {
//			cout << setw(20) << p1.name
//				<< setprecision(0) << setw(12) << " " << p1.population
//				<< setprecision(2) << setw(6) << " " << p1.g << endl;
//		}
//	}
//	cout << "Done.\n";
//}