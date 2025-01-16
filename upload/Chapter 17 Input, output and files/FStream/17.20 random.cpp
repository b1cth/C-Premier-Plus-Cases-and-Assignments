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
//
//int main() {
//	using namespace std;
//	cout << fixed << right;
//	planet p1;
//	int count = 0;
//	fstream finout(filename, ios_base::in | ios_base::out | ios_base::binary);
//	if (finout.is_open()) {
//		finout.seekg(0);
//		cout << "Here are the contents of file: " << filename << ": \n";
//		while (finout.read((char*)&p1, sizeof(p1))) {
//			cout << setw(20) << count++ << " " << setw(2) << p1.name
//				<< setprecision(0) << setw(12) << " " << p1.population
//				<< setprecision(2) << setw(6) << " " << p1.g << endl;
//		}
//		if (finout.eof()) {
//			finout.clear();
//		}
//		else {
//			cerr << "Can't read file. Exiting...\n";
//			exit(EXIT_FAILURE);
//		}
//	}
//
//
//	cout << "Enter which line of data you wish to change: ";
//	int choice;
//	cin >> choice;
//	if ((choice < 0) || (choice >= count)) {
//		cerr << "Choice is out of range. Exiting...\n";
//		exit(EXIT_FAILURE);
//	}
//	long place = choice * sizeof(planet);
//	finout.seekg(place);
//	if (finout.fail()) {
//		cerr << "Error on attempted seek.\n";
//		exit(EXIT_FAILURE);
//	}
//	cout << "Here's your choice: \n";
//	finout.read((char*)&p1, sizeof(p1));
//	cout << "Here are the contents of file: " << filename << ": \n";
//	cout << setw(20) << choice << " " << setw(2) << p1.name
//		<< setprecision(0) << setw(12) << " " << p1.population
//		<< setprecision(2) << setw(6) << " " << p1.g << endl;
//	if (finout.eof()) {
//		finout.clear();
//	}
//
//	finout.seekp(place);
//	eatline();
//	cout << "Enter planet name: (Enter empty to quit): ";
//	cin.get(p1.name, LIM);
//	cout << "Enter population: ";
//	cin >> p1.population;
//	cout << "Enter gravity: ";
//	cin >> p1.g;
//	eatline();
//	finout.write((char*)&p1, sizeof(p1)) << flush;
//	if (finout.fail()) {
//		cerr << "Error on attempted write. Exiting...\n";
//		exit(EXIT_FAILURE);
//	}
//
//	count = 0;
//	finout.seekg(0);
//	cout << endl << "Amended file: \n";
//	cout << "Here are the contents of file: " << filename << ": \n";
//	while (finout.read((char*)&p1, sizeof(p1))) {
//		cout << setw(20) << count++ << " " << setw(2) << p1.name
//			<< setprecision(0) << setw(12) << " " << p1.population
//			<< setprecision(2) << setw(6) << " " << p1.g << endl;
//	}
//	finout.clear();
//	finout.close();
//	cout << "Done.\n";
//}