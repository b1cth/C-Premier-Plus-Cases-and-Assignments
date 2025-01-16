//#include <iostream>
//using namespace std;
//const int ArSize = 80;
//char* cut(const char* pt, int n=1);
//int main() {
//	char arr[ArSize];
//	cout << "please enter the array" << endl;
//	cin.get(arr, ArSize);
//	int n;
//	cout << "how many characters you want to get?" << endl;
//	cin >> n;
//
//	char *pt=cut(arr, n);
//	cout << "the cut part is : " << pt << endl;
//	delete[] pt;
//	return 0;
//
//}
//
//char* cut(const char* pt, int n) {
//	int m=0;
//	while ((m <= n) && (pt[m] != 0)) {
//		m++;
//	} //既安全又快速
//	char* receive = new char[m+1];
//	int i = 0;
//	if (n < 0) {
//		n = 0;
//	}
//	else {
//		for (i = 0; i < m && pt[i]!='\n'; i++) {
//			receive[i] = pt[i];
//		}
//		receive[m] = '\0';
//	}
//	return receive;
//}