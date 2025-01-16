#include <string>
#include <iostream>
#include <algorithm>

bool checkpalindrome(const std::string& s);
char trans(char c);
std::string checkAlpha(const std::string& s);
int main() {
	using namespace std;
	string s;
	cout << "Enter the string ( quit to quit) : \n";
	while (cin >> s && s != "quit") {
		if (checkpalindrome(s)) {
			cout << "It's palindrome.\n";
		}
		else {
			cout << "It's not a palindrome.\n";
		}
		/*while (cin.get()) {
			continue;
		}*/
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Enter the string ( quit to quit) : \n";
	}
}
bool checkpalindrome(const std::string& s) {
	std::string filted = checkAlpha(s);
	std::string reversed(filted.rbegin(), filted.rend());
	return reversed == filted;
}
// method 1
//std::string checkAlpha(const std::string& s) {
//	int size = s.size();
//	std::string temp;
//	for (int i = 0; i < size; i++)
//	{
//		if (isalpha(s[i])) {
//			temp += tolower(s[i]);
//		}
//	}
//	return temp;
//}
//method 2
char trans(char c) {
	if (isalpha(c)) {
		return tolower(c);
	}
	else {
		return '\0';
	}
}
std::string checkAlpha(const std::string& s) {
	std::string reversed;
	reversed.reserve(s.size());
	std::transform(s.begin(), s.end(), std::back_inserter(reversed), trans);
	auto x = std::remove(reversed.begin(), reversed.end(), '\0');
	reversed.erase(x, reversed.end());
	return reversed;
}