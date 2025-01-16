//#include <iostream>
//#include <string>
//using namespace std;
//string version1(string s1, const string s2);
//string& version2(string& s1, const string& s2);
//string& version3(string& s1, const string& s2);
//int main() {
//	string input, copy, result;
//	getline(cin, input);
//	result = version1(input, "***");
//	cout << result<<endl;
//	result = version2(input, "###");
//	cout << result << endl;;
//	result = version3(input, "@@@");
//	cout << result << endl;;
//	
//	return 0;
//}
////按值传递
//string version1(string s1,const string s2) {
//	s1 = s2 + s1 + s2;
//	return s1;
//}
////按引用传递
//string &version2(string& s1, const string& s2) {
//	s1 = s2 + s1 + s2;
//	return s1;
//}
////
//string& version3(string& s1, const string& s2) {
//	string temp;
//	temp = s2 + s1 + s1;
//	return temp;
//}
