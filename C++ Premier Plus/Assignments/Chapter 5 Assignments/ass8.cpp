#include "functions.h";
//strcmp()函数逐个字符地比较两个字符串。如果字符串相等，则返回 0。
void ass8() {
	cout << "Enter words (to stop, type the word done): \n";
	char arr[100];
	int charCount = 0;
	
	while (true) {
		cin >> arr;  //cin >> 在遇到空格或换行符时会停止读取，
		//而 cin.getline() 可以读取包含空格在内的整行输入
		if (strcmp(arr, "done") == 0) {
			break;
		}
		charCount++;
	}

	cout << "total letter is: " << charCount << endl;
}