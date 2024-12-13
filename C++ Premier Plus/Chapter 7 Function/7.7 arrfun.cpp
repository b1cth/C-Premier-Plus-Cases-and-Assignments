//#include <iostream>
//using namespace std;
//const int MAX = 5;
//double fillarray(double* arr, int t);
//void showarray(double* arr, int t);
//void afterprice(double* arr, int t);
//int main() {
//
//	double house[MAX];
//	double size = fillarray(house, MAX);
//	showarray(house, size);
//	afterprice(house, size);
//	return 0;
//}
//
//double fillarray(double* arr, int t) {
//	int i;
//	for (i = 0; i < MAX; i++) {
//		double temp;
//		cout << "please enter the price of #" << i+1 << endl;
//		while (!(cin >> temp) ){
//			cout << "not supported type, please try again:";
//			cin.clear();
//			while (cin.get() != '\n') {
//				continue;
//			}
//		}
//		if (temp <= 0) {
//			cout << "not valid, try again.";
//			i--;
//			continue;
//		}
//		else {
//			arr[i] = temp;
//		}
//	}
//	return i;
//}
//
//void showarray(double* arr, int t) {
//	for (int i = 0; i < t; i++) {
//		cout << "the price of # " << i+1 << " house is: " << arr[i]<<endl;
//	}
//}
//
//void afterprice(double* arr, int t) {
//	cout << "please enter your factor: ";
//	double factor;
//	while (!((cin >> factor) && (factor > 0))) {
//		cout << "please enter a correct fator!" << endl;
//		cin.clear();
//		while (cin.get() != '\n') {
//			continue;
//		}
//	}
//	for (int i = 0; i < t; i++) {
//		arr[i] *= factor;
//	}
//	cout << "now these are after price: " << endl;
//	showarray(arr,t);
//}
