#include "functions.h";
//strcmp()函数逐个字符地比较两个字符串。如果字符串相等，则返回 0。
void ass9() {
	cout << "Enter words (to stop, type the word done): \n";
	string arr;
	int charCount = 0;

	while (true) {
		cin >> arr;
		if (arr == "done") {
			break;
		}
		charCount++;
	}

	cout << "total letter is: " << charCount << endl;
}