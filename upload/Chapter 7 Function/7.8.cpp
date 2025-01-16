//#include <iostream>
//using namespace std;
//const int ArSize = 8;
//int sum_arr(int* begin, int* end);
//int main() {
//	int cookies[ArSize] = { 10,20,30,40,50,60,70,80 };
//	int result;
//	result = sum_arr(cookies, cookies+ArSize);//调用的是地址，不是数组
//	return 0;
//}
//
//int sum_arr(const int* begin, const int *end) {
//	int result=0;
//	const int* pt; //const int* pt，意思就是 pt 是一个指向 const int 的指针。
//	//你可以改变指针 pt 本身（即让它指向不同的位置），但你不能通过 pt 修改它指向的整数的值。
//	for (pt=begin; pt !=end; pt++) {
//		result += *pt;
//	}
//
//	return result;
//}