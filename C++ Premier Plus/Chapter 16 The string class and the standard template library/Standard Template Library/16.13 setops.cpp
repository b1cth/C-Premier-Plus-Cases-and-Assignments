//#include <algorithm>
//#include <set>
//#include <iostream>
//#include <iterator>
//#include <string>
//
//const int NUM = 6;
//int main() {
//	using namespace std;
//	string s1[NUM] = { "buffoon", "thinkers", "for", "heavy", "can", "spook" };
//	string s2[NUM] = { "metal", "any", "food", "elegant", "deliver", "for" };
//
//	set<string> A(s1, s1 + NUM);//键和值是一样的
//	set<string> B(s2, s2 + NUM);//自动排序，删除重复元素
//
//	ostream_iterator<string, char> ost_it(cout, " ");
//	cout << "Set A: ";
//	copy(A.begin(), A.end(), ost_it);
//	cout << endl << "Set B: ";
//	copy(B.begin(), B.end(), ost_it);
//	cout << endl;
//	cout << endl;
//
//	cout << "Union of A and B: " << endl;
//	set_union(A.begin(), A.end(), B.begin(), B.end(), ost_it);
//
//	cout << endl << "Intersection of A and B: " << endl;
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), ost_it);
//
//	cout << endl << "Difference of A and B: " << endl;
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), ost_it);
//	cout << endl;
//	cout << endl;
//
//	set<string> C;
//	cout << "Set C: \n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C,C.begin()));
//	copy(C.begin(), C.end(), ost_it);
//	cout << endl;
//
//	string s3{ "ghost"};
//	C.insert(s3);
//	cout << "Set C after insertion.\n";
//	copy(C.begin(), C.end(), ost_it);
//	cout << endl;
//
//	cout << "Showing a range: \n";
//	copy(C.lower_bound("ghost"), C.upper_bound("spook"), ost_it);
//	cout << endl;
//}