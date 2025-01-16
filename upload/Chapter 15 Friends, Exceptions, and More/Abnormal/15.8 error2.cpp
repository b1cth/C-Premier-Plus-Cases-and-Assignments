//#include <iostream>
//bool hmean(double a, double b,double* z);
//int main() {
//	using std::cout, std::cin, std::endl;
//	double x, y, z=0;
//	cout << "Please 2 numbers: \n";
//	while (cin >> x >> y) {
//		if (hmean(x, y, &z)) {
//			cout << "Harmonie mean of " << x << " and " << y << " is " << z << endl;
//		}
//		else {
//			std::cout << "Untenable arguments...";
//			cout << "Enter next arguments: \n";
//			continue;
//		}
//		cout << "Enter next arguments: \n";
//	}
//}
//bool hmean(double a, double b,double* z) {
//	if (a == -b) {
//		
//		*z = DBL_MAX;
//		return false;
//	}
//	else {
//		*z=(2 * a * b) / (a + b);
//		return true;
//	}
//}