#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string addSpace(string str);
string getCurrentDate();
int main() {
	cout << "Easy to copy and paste:\n";
	cout << endl;
	cout << "RMS Vault: Bluestone0860\n";
	cout << endl;
	cout << "Standard room only\n";
	cout << "dlx room only\n";
	cout << "Executive room only\n";
	cout << "Standard room and meal\n";
	cout << "dlx room meal\n";
	cout << endl;
	std::cout << "Enter the card number it will be divided:(RMS Vault or only card number) \n";
	while (true) {
		string date;
		string temp;
		string result;
		string expiryDate;
		string finalCardNumber;
		while (getline(cin, temp)) {
			string tempCardNumber;
			if (temp.empty())break;
			if (temp.find("Expiry Date") != string::npos) {
				expiryDate = temp.substr(temp.find('\t') + 1);
			}
			else {
				tempCardNumber += temp;
				finalCardNumber = addSpace(tempCardNumber.substr(0, 16));
			}
		}
		date = getCurrentDate();
		result += "cc: "+finalCardNumber + ' ' + expiryDate + "     " + date;
		std::cout << result << endl;
		//cin.clear(); // 清除错误标志
		//cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略缓冲区中的所有字符，直到遇到换行符
		while (cin.get() != '\n') {
			cin.get();
			continue;
		}
		std::cout << "Enter the card number it will be divided:(RMS Vault or only card number) \n";
	}
	
}

//分割卡号
string addSpace(string str) {
	string result;
	for (int i = 0; (i < str.length())&&(i<17); i++)
	{
		if (i > 0 && i % 4 == 0) {
			result += ' ';
		}
		result += str[i];
	}
	return result;
}

std::string getCurrentDate() {
	// 获取当前时间
	time_t now = time(0);

	// 将当前时间转换为 tm 结构
	tm* ltm = localtime(&now);

	// 格式化日期为 日/月/年
	std::string day = std::to_string(ltm->tm_mday);
	std::string month = std::to_string(1 + ltm->tm_mon);
	std::string year = std::to_string(1900 + ltm->tm_year);

	// 组合成 日/月/年 格式的字符串
	std::string currentDate = "Jie "+day + "." + month + "." + year;

	return currentDate;
}