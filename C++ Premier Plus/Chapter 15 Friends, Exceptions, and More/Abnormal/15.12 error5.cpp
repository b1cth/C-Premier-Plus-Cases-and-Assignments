//#include <iostream>
//#include <cmath>
//#include <string>
//#include "15.10 exc_mean.h"
//using std::cout, std::cin, std::endl;
//class demo {
//private:
//	std::string word;
//public:
//	demo(const std::string& str):word(str){
//		cout << "demo: " << word << " created!\n";
//	}
//	~demo() {
//		cout << "demo: " << word << " destroyed!\n";
//	}
//	void show() const {
//		cout << "demo: " << word << " lives!\n";
//	}
//};
//double hmean(double a, double b);
//double gmean(double a, double b);
//double means(double a, double b);
//int main() {
//	double x, y, z;
//	{
//		demo d1("found in block main()");
//		cout << "Enter 2 numbers: ";
//		while (cin >> x >> y) {
//			try {
//				z = means(x, y);
//				cout << "Harmonie mean of " << x << " and " << y << " is " << z << endl;
//				cout << "Enter next pair: \n";
//			}
//			catch (bad_hmean& bh) {
//				bh.mesg();
//				cout << "Try again! \n";
//				continue;
//			}
//			catch (bad_gmean& bg) {
//				bg.mesg();
//				cout << "Value used: " << bg.v1 << ", " << bg.v2 << endl;
//				cout << "Sorry you dont get to play anymore.\n";
//				break;
//			}
//		}
//		d1.show();
//	}
//	cout << "Bye!\n";
//	cin.get();
//	cin.get();
//	return 0;
//}
//double hmean(double a, double b) {
//	if (a == -b) {
//		throw bad_hmean(a, b);
//	}
//	else {
//		return (2 * a * b) / (a + b);
//	}
//}
//
//double gmean(double a, double b) {
//	if (a < 0 || b < 0) {
//		throw bad_gmean(a, b);
//	}
//	return std::sqrt(a * b);
//}
//
//double means(double a, double b) {
//	double am, hm, gm;
//	demo d2("found in means()");
//	am = (a + b) / 2.0;
//	try {
//		hm = hmean(a, b);
//		gm = gmean(a, b);
//	}
//	catch (bad_hmean& bg) {
//		bg.mesg();
//		cout << "Caught in means()\n";
//		throw;
//	}
//	d2.show();
//	return (am + hm + gm) / 3.0;
//}