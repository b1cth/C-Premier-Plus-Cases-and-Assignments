//#include <iostream>
//#include <string>
//using namespace std;
//const int MAX = 5;
//
//int main() {
//	int score[MAX];
//	int i = 0;
//	cout << "Welcome,enter your score down below. It must be integer!";
//	for (i; i < MAX; i++) {
//		cout << "Enter your #" << i+1 << " score" << endl;
//		while (!(cin >> score[i])) {   //检测是否为匹配类型，不是匹配类型cin为假，取反为真，运行while语句
//			cout << "please enter the valid number, try again.";
//			cin.clear();//重置失效位
//			while (cin.get()!='\n') { //读取字符
//				continue;
//			}
//		}
//	}
//	int total = 0;
//	float avg;
//	for (int j=0; j < MAX; j++) {
//		total += score[j];
//	}
//	avg = total / MAX;
//	cout << "the avg score is: " << avg << endl;
//	return 0;
//}