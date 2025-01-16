//#include <iostream>
//#include <list>
//#include <algorithm>
//#include <iterator>
//inline void output(int a) { std::cout << a << " "; }
//int main() {
//	using namespace std;
//	list<int> one(5, 2);//list of 5 2s
//	int stuff[5] = { 1,2,4,8,6 };
//	list<int> two;
//	two.insert(two.begin(), stuff, stuff + 5);
//	int more[6] = { 6,4,2,4,6,5 };
//	list<int> three(two);
//	three.insert(three.end(), more, more + 6);
//	cout << "List one: ";
//	for_each(one.begin(), one.end(), output);
//	cout << endl << "List two: ";
//	for_each(two.begin(), two.end(), output);
//	cout << endl << "List three: ";
//	for_each(three.begin(), three.end(), output);
//
//	three.remove(2);
//	cout << endl << "removed 2 in three: ";
//	for_each(three.begin(), three.end(), output);
//
//	three.splice(three.begin(), one);//将链表x的内容插入到pos的前面，x将为空。这个函数的的复杂度为固定时间
//	cout << endl << "spliced three: ";
//	for_each(three.begin(), three.end(), output);
//	cout << "\nList one: ";
//	for_each(one.begin(), one.end(), output);
//
//	//three.unique();/将连续的相同元素压缩为单个元素。这个函数的复杂度为线性时间
//	cout << endl << "list three after unique: ";
//	for_each(three.begin(), three.end(), output);
//
//	three.sort();//因为快速插入的代价是放弃随机访问功能，所以不能将非成员函数sort()用于链表。
//	three.unique();//unique( )只能将相邻的相同值压缩为单个值。
//	cout << endl << "list three after sort & unique: ";
//	for_each(three.begin(), three.end(), output);
//	two.sort();
//	three.merge(two);//将链表x与调用链表合并。"两个链表必须已经排序"。
//	//合并后的经过排序的链表保存在调用链表中，x为空。这个函数的复杂度为线性时间
//	cout << endl << "list three after sort & unique: ";
//	for_each(three.begin(), three.end(), output);
//}