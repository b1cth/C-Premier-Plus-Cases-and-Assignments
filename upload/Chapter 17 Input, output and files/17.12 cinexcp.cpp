//#include <iostream>
//#include <exception>
//int main() {
//	using namespace std;
//	cin.exceptions(ios_base::failbit);
//	cout << "Enter number: ";
//	int sum = 0;
//	int input;
//	try {
//		while (cin >> input) {
//			sum += input;
//		}
//	}
//	catch (ios_base::failure& fb) {
//		cout << fb.what() << endl;
//		cout << "O, the horror!\n";
//	}
//	cout << "Last value entered: " << input << endl;
//	cout << "sum = " << sum << endl;
//	if (cin.fail() && !cin.eof()) {  //fail( )在failbit或eofbit被设置时返回true，因此代码必须排除后一种情况。
//		cin.clear();//清除失效位
//		while (cin.get() != '\n') {
//			continue;
//		}
//	}
//	else {
//		cout << "I can't go on!\n";
//		exit(1);
//	}
//	cout << "Now enter a new number:\n";
//	cin >> input;
//	return 0;
//}