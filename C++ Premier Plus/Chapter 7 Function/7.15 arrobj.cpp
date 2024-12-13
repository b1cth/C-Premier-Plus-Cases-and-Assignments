//#include <iostream>
//#include <array>
//#include <string>
//using namespace std;
//const int Seasons = 4;
//const array<string,Seasons> Snames = {"spring","summer","autum","winter"};
//void fillexp(array<double, Seasons>* pt, int n);
//void showexp(const array<double, Seasons> arr, array<string, Seasons> s);
//int main() {
//	array<double, Seasons>exp;
//	fillexp(&exp, Seasons);
//	showexp(exp,Snames);
//	return 0;
//}
//
//void fillexp(array<double, Seasons> *pt, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << "please enter your #" << i + 1 << " expenses.";
//		cin >> (*pt)[i];
//	}
//}
//
//void showexp(const array<double, Seasons> arr, array<string, Seasons> s) {
//	for (int i = 0; i < Seasons; i++) {
//		cout << "the expenses in " << s[i] << " is " << arr[i] << endl;
//	}
//}