//#include <iostream>
//using namespace std;
//template <typename Anytype>
//void Swap(Anytype& , Anytype& );
//template <typename t>
//void Swap(t* , t* , int );
//int main() {
//	int a = 10, b = 20;
//	cout << "a: " << a << " b: " << b<<endl;
//	Swap(a, b);
//	cout << "a: " << a << " b: " << b<<endl;
//
//	int arr[] = { 10,20,30 };
//	int brr[] = { 51,32,65 };
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		cout << arr[i] <<" ";
//		
//	}
//	cout << endl;
//	for (int i = 0; i < sizeof(brr) / sizeof(int); i++) {
//		
//		cout << brr[i] << " ";
//	}
//	cout << endl;
//	Swap(arr, brr, 3);
//	cout << "swapped" << endl;
//	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
//		cout << arr[i] << " ";
//
//	}
//	cout << endl;
//	for (int i = 0; i < sizeof(brr)/sizeof(int); i++) {
//
//		cout << brr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//
//template <typename Anytype>
//void Swap(Anytype& a, Anytype& b) {
//	Anytype temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename t>
//void Swap(t *a,t* b,int n) {
//	t temp;
//	for (int i = 0; i < n; i++) {
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}