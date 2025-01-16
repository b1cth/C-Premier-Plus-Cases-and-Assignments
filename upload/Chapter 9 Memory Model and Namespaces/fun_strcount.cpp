#include <iostream>
using namespace std;
void strcount(const char* str) {
	int count=0;
	static int total=0; //一开始就初始化为0，内存始终存在，直到程序结束
	while (*str++) {
		count++;
		
	}
	total += count;
	cout << "you have " << count << endl;
	cout << "total character is : " << total << endl;
}