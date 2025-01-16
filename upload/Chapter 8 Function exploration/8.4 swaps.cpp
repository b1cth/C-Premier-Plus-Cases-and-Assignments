//#include <iostream>
//using namespace std;
//void swapr(int& a, int& b);
//void swapp(int* a, int* b);
//void swapv(int a, int b);
//int main() {
//	int wallet1 = 100, wallet2 = 350;
//	cout << "wallet1: " << wallet1 << " wallet2: " << wallet2 << endl;
//	swapr(wallet1, wallet2);
//	cout << "wallet1: " << wallet1 << " wallet2: " << wallet2 << endl;
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1: " << wallet1 << " wallet2: " << wallet2<<endl;
//	swapv(wallet1, wallet2);
//	cout << "wallet1: " << wallet1 << " wallet2: " << wallet2<< endl;
//	return 0;
//}
////按引用传递
//void swapr(int& a, int& b) {
//	int temp;;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
////按指针传递
//void swapp(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////按值传递
//void swapv(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	//不传递值
//}