//#include <iostream>
//using namespace std;
//struct job {
//	char name;
//	int num;
//	double price;
//};
//
//template<typename any>
//void swap(any& a, any& b);  //隐式实例化
//
//template <>
//void swap(job& j1, job& j2); //显式具体化
//
//template void swap<char>(char& a, char& b); //显式实例化
//
//
//int main() {
//
//	return 0;
//}
//
////隐式实例化
//template<typename any>
//void swap(any& a, any& b) {
//	any temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
////显式具体化
//template < > 
//void swap(job &j1, job &j2) {
//	char temp;
//	temp=j1.name;
//	j1.name = j2.name;
//	j2.name = temp;
//	
//	double temp2;
//	temp2 = j1.price;
//	j1.price = j2.price;
//	j2.price = temp2;
//}
//
//template void swap<char>(char& a, char& b);