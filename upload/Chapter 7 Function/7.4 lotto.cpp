//#include <iostream>
//using namespace std;
//long double lottery(unsigned int t, unsigned int c);
//int main() {
//	double total;
//	double choice;
//	long double result;
//	cout << "enter the total number and choice...";
//	while (cin >> total >> choice && choice <= total) {
//		cout << "the possibility of the lottery is: ";
//		result = lottery(total,choice);
//		cout << result;
//		cout << "enter your next total number and choice... ";
//	}
//	cout << "bye..." << endl;
//	return 0;
//}
//
//long double lottery(unsigned int t, unsigned int c) {
//	long double total = t;
//	long double result=1;
//	for (total, c; total > 0, c > 0; total--, c--) {
//		result *= total / c;
//	}
//	return result;
//}