//#include <iostream>
//using namespace std;
//char* buildstr(char str, int n);
//int main() {
//	int times;
//	char ch;
//	cout << "please enter the letter: ";
//	cin >> ch;
//	cout << "pleae enter how many times you want to repeat: ";
//	cin >> times;
//	char *str=buildstr(ch, times);
//	cout << str << endl;
//	delete[]str; //只是删掉了内存空间，没有删掉指针
//
//	return 0;
//}
//
//char* buildstr(char str, int n) {
//	char* arr = new char[n+1]; //包含一个'\n'
//	arr[n] = '\0';
//	while (n-->0) { //先用n判断，判断语句结束后再用n--
//		arr[n] = str; //这时候的值已经是n-1了
//	}
//	return arr;
//}