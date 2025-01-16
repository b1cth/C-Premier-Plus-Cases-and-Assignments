//#include "15.10 exc_mean.h"
//double hmean(double a, double b);
//double gmean(double a, double b);
//int main() {
//	using std::cout, std::cin, std::endl;
//	double x, y, z;
//	cout << "Please 2 numbers: \n";
//	while (cin >> x >> y) {
//		try {
//			z = hmean(x, y);
//			cout << "Harmonie mean of " << x << " and " << y << " is " << z << endl;
//			cout << "geometric mean of " << x << " and " << y << " is " << gmean(x,y) << endl;
//		}
//		catch (bad_hmean& bh) {
//			bh.mesg();
//			continue;
//		}
//		catch (bad_gmean& bg) {
//			bg.mesg();
//			cout << "Value used: " << bg.v1 << ", " << bg.v2 << endl;
//			cout << "Sorry you dont get to play anymore.\n";
//			break;
//		}
//	}
//	cout << "Bye.\n";
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