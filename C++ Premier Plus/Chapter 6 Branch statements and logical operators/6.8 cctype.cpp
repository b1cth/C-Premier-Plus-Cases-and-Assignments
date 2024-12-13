//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	int letter{ 0 }, blank{ 0 }, num{ 0 }, punct{ 0 }, others{ 0 };
//	char ch;
//	cout << "please enter text: ";
//	cin >> ch;
//	while (ch != '@') {
//		if (isalpha(ch)) {
//			letter++;
//		}
//		else if (isdigit(ch)) {
//			num++;
//		}
//		else if (isspace(ch)) {
//			blank++;
//		}
//		else if (ispunct(ch)) {
//			punct++;
//		}
//		else {
//			others++;
//		}
//		cin.get(ch);
//	}
//	cout << "this text contains: " << letter << " letters " << num << " digits " << blank << " spaces" << " and " << punct << " puncts"
//		<< " and " << others << " others";
//	return 0;
//}