//#include <iostream>
//double hmean(double a, double b);
//int main() {
//	using std::cout, std::cin, std::endl;
//	double x, y, z;
//	cout << "Please 2 numbers: \n";
//	while (cin >> x >> y) {
//		try {
//			z = hmean(x, y);
//		}
//		catch (const char* s) {
//			cout << s;
//			cout << "Enter correct arguments: \n";
//			continue;
//		}
//		cout << "Harmonie mean of " << x << " and " << y << " is " << z << endl;
//		cout << "Enter next arguments: \n";
//	}
//}
//double hmean(double a, double b) {
//	if (a == -b) {
//		throw "bad hmean arguments: a=-b not allowed.\n";
//	}
//	else {
//		return (2 * a * b) / (a + b);
//	}
//}