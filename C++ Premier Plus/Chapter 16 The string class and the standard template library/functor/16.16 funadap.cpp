//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <iterator>
//
//void show(double);
//const int LIM = 6;
//int main() {
//	using namespace std;
//	double arr1[LIM] = { 28,29,30,35,38,39 };
//	double arr2[LIM] = { 63,65,69,75,80,99 };
//	vector<double> gr8(arr1, arr1 + LIM);
//	vector<double> m8(arr2, arr2 + LIM);
//
//	cout << "gr8: \n";
//	for_each(gr8.begin(), gr8.end(), show);
//	cout << "\n m8:\n";
//	for_each(m8.begin(), m8.end(), show);
//	cout << endl;
//	vector<double>sum(LIM);
//	cout << "Plus: \n";
//	transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(), plus<double>());
//	for_each(sum.begin(), sum.end(), show);
//	cout << endl;
//
//	vector<double> multi(LIM);
//	auto f1 = bind(multiplies<double>(), placeholders::_1, 2.5);
//	cout << "Multiply: \n";
//	transform(gr8.begin(), gr8.end(), multi.begin(), f1);
//	for_each(multi.begin(), multi.end(), show);
//	cout << endl;
//}
//
//void show(double x) {
//	std::cout << x << " ";
//}