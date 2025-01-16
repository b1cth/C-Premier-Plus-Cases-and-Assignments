//#include <iostream>
//using namespace std;
//const int ArSize = 8;
//int sum_arr(int* arr, int n);
//int main() {
//	int cookies[ArSize] = { 10,20,30,40,50,60,70,80 };
//	int result;
//	result = sum_arr(cookies, ArSize);//调用的是地址，不是数组
//	cout << "the avg is " << result / ArSize << endl;
//	cout << "cookies: " << cookies << endl;
//	cout<<sum_arr(cookies + 4, 4);
//
//	cout << "sizeof: cookies: " << sizeof(cookies) << endl;
//	cout << "sizeof: cookies: " << sizeof(*cookies) << endl;
//	return 0;
//}
//
//int sum_arr(int* arr, int n) {
//	int result=0;
//	for (int i = 0; i < n; i++) {
//		result += arr[i];
//	}
//	cout << "arr: " << arr << endl;
//	cout << "sizeof: arr: " << sizeof(*arr) << endl;
//	return result;
//}