//#include<iostream>
//int main() {
//	using namespace std;
//
//	cout.setf(ios_base::left, ios_base::adjustfield);
//	cout.setf(ios_base::showpoint);
//	cout.setf(ios_base::showpos);
//	cout.precision(3);
//	auto old = cout.setf(ios_base::scientific, ios_base::floatfield);//ios_base::fmtflags
//	cout << "Left Justification:\n";
//	long n;
//	for (n = 1; n <= 41; n+=10)
//	{
//		cout.width(4);
//		cout << "n" << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout.setf(ios_base::internal, ios_base::adjustfield);
//	cout << "Internal Justification:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << "n" << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout.setf(ios_base::right, ios_base::adjustfield);
//	cout.setf(ios_base::fixed, ios_base::floatfield);//定点计数法
//	cout << "Right Justification:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << "n" << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout << "Reset everyting:\n";
//	cout.setf(0, ios_base::floatfield);
//	cout.unsetf(ios_base::adjustfield);
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << "n" << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//}