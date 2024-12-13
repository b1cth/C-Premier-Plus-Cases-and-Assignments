//#include <iostream>
//#include <string>
//using namespace std;
//const int ArSize= 5;
//int main() {
//	float array[ArSize];
//	float temp;
//	int i = 0;
//	cout << "please enter the first data: ";
//	cin >> temp;
//	while ((temp >= 0) && (i < ArSize) ){
//		array[i] = temp;
//		i++;
//		if (i < ArSize) {
//			cout << "next value: ";
//			cin >> temp;
//		}
//	}
//	if (i == 0) {
//		cout << "Wrong data, bye..." << endl;
//	}
//	else {
//		cout << "enter your NAAQ: ";
//		float you;
//		cin >> you;
//		int count = 0;
//		for (int j{ 0 }; j < i; j++) {
//			if (array[j] > you) {
//				count++;
//			}
//		}
//		cout << "you have " << count <<" numbers greater than NAAQ" << endl;
//	}
//	
//	return 0;
//}