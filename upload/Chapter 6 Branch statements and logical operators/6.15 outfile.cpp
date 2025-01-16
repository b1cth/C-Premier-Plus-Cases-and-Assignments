//#include <iostream>
//#include <string>
//#include <fstream> //包含文件头文件
//using namespace std;
//
//int main() {
//	char carname[50];
//	int productionyear;
//	double a_price, b_price;
//	cout << "what's the car brand?";
//	cin.getline(carname, 50);
//	cout << "What's the production year?";
//	cin >> productionyear;
//	cout << "What's the original price?";
//	cin >> a_price;
//	b_price = a_price * 0.913;
//
//	ofstream outFile; //用ofstream创建outFile对象
//	outFile.open("carinfo.txt");//用outFile对象调用成员函数
//	outFile << "The car brand is: " << carname << endl;
//	outFile << "The production year is: " << productionyear << endl;
//	outFile << "The original price is: " << a_price << endl;
//	outFile << "Now the car worth: " << b_price << endl;
//	
//	outFile.close();
//	return 0;
//}
