//#include <fstream>
//#include <iostream>
//#include <string>
//#include <iomanip>
//int main() {
//	using namespace std;
//	string filename;
//	cout << "Enter the file name: \n";
//	cin >> filename;
//
//	ofstream fout(filename.c_str());//same as fout.open(ilename.c_str())
//	if (!fout) { // 检查文件是否成功打开
//		cerr << "Error: Could not create or open the file." << endl;
//		return 1; // 返回错误代码
//	}
//	fout << "For your eyes only!\n";
//	cout << "Enter your secret number: \n";
//	float number;
//	cin >> number;
//	fout << fixed << setprecision(2) << "Your secret number is: " << number << endl;
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	char ch;
//	cout << "Here's the file: " << filename << " content:\n";
//	while (fin.get(ch)) {
//		cout << ch;
//	}
//	cout << "Done.\n";
//}