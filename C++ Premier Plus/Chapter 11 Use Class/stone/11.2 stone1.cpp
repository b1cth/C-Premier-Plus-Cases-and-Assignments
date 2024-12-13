#include "11.16 stonewt.h"

int main() {
	using namespace std;
	Stonewt st1(15, 2.6);
	Stonewt st2 = 52.6;
	/*double data = st1;
	double data = double(st1);
	double data = (double)st1;*/
	double data = st1.operator double(); //四种表示方法
	int data2 = st2;
	cout << "st1: " << double(st1) << endl; //二义性
	cout << "Class convert to double=> " << data << endl;
	cout << "st2: " << (double)st2 << endl;
	cout << "Class convert to int=> " << data2 << endl;
}