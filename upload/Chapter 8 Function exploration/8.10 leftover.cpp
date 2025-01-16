//#include <iostream>
//using namespace std;
//const int ArSize = 80;
//char* left(const char* arr, int n);
//unsigned int left(unsigned long  num, unsigned long n);
//int main() {
//	const char *arr="What the hell";
//	unsigned long num = 12345678;
//	char* pt;
//	int i = 0;
//	for (i; i < 10; i++) {
//		pt= left(arr, i);
//		cout << pt << endl;
//		delete[] pt;
//		int temp = left(num, i);
//		cout << temp << endl;
//	}
//
//	return 0;
//}
//
//char* left(const char* arr, int n) {
//	if (n < 0) {
//		n = 0;
//	}
//	int m = 0;
//	while ((m < n) && (arr[m] != 0)) {
//		m++;
//	}
//	char* pt = new char[m + 1];
//	int i = 0;
//	
//	for (i=0; i<m; i++) {
//		pt[i] = arr[i];
//	}
//	pt[m] = '\0';
//	return pt;
//}
//
//unsigned int left(unsigned long  num, unsigned long n) {
//	int temp = num;
//	int count = 1;
//	if (num == 0 || n == 0) {
//		return num;
//	}
//	
//	while (temp /= 10) {
//		count++;
//	}
//	if (count > n) {
//		count = temp - count;
//		num = num / (10 ^ count);
//		return num;
//	}
//	else {
//		return num;
//	}
//	
//}