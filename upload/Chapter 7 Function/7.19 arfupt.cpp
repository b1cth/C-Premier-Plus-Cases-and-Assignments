#include <iostream>
using namespace std;
const double* f1(const double* ar, int n);
const double* f2(const double ar[], int n);
const double* f3(const double ar[], int n);
int main() {
	double av[3] = { 1112.3,1543.6,2227.9 };
	const double* (*p1) (const double*, int) = f1; //*p1就是f1,返回值是一个指针常量，返回一个地址
	auto p2 = f2;
	//equals: const double*(*p2)(const double*, int)=f2;
	cout << "Using pointers to functions: \n";
	cout << "Address Value\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl; //输出地址，输出值
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	cout << endl;
	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };//定义了一个指向三个函数地址的指针数组
	auto pb = pa; 
	//const double* **pb(const double* ,int)=pa;
	cout << "Address      value\n";
	for (int i = 0; i < 3; i++) {
		cout << (*pa[i])(av, 3) << ":\t" << *(*pa[i])(av,3) << endl;
	}
	cout << endl;
	cout << "Address      value\n";
	for (int i = 0; i < 3; i++) {
		cout << pb[i](av, 3) << ":\t" << *pb[i](av,3) << endl;
	}

	auto pc = &pa; //&pa是整个数组的地址，把数组起始地址赋给了pc
	//equals const* (*(*pc)[3])(const double* ar, int n)=&pa

	cout << "Address      value\n";
	for (int i = 0; i < 3; i++) {
		cout << (*pc)[i](av, 3) << ";\t" << *(*pc)[i](av, 3) << endl;
	}

	cout << endl;
	const double*(* (*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ":\t " << *pdb << endl;

	return 0;
}

const double* f1(const double* ar, int n) {
	return ar;
}

const double* f2(const double ar[], int n) {
	return ar + 1;
}

const double* f3(const double ar[], int n) {
	return ar + 2;
}