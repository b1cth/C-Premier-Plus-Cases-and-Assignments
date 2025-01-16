//#include <string>
//#include <iostream>
//#include <algorithm>
//
//bool checkpalindrome(const std::string& s);
//int main() {
//	using namespace std;
//	string s;
//	cout << "Enter the string ( quit to quit) : \n";
//	while (cin >> s&&s!="quit") {
//		if (checkpalindrome(s)) {
//			cout << "It's palindrome.\n";
//		}
//		else {
//			cout << "It's not a palindrome.\n";
//		}
//		cout << "Enter the string ( quit to quit) : \n";
//	}
//}
//bool checkpalindrome(const std::string& s) {
//	std::string temp(s.size(), '\0');
//	std::copy(s.begin(), s.end(), temp.rbegin());
//	return temp == s;
//}