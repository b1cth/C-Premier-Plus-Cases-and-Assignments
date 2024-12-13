#include "header.h"

string select_package() {
	string package;
	int package_type;
	cout << "Breakfast, Lunch or Dinner?(1 for breakfast, 2 for lunch, 3 for dinner)\n";
	cin >> package_type;
	switch (package_type) {
	case 1:
		package = "Breakfast";
		break;
	case 2:
		package = "Lunch Pack";
		break;
	case 3:
		package = "Dinner";
		break;
	default:
		break;
	}
	return package;
}

std::map<int, std::string> createGuestMap() {
	std::map<int, std::string> guestMap;
	guestMap[4] = "Taylor Hodges";
	guestMap[6] = "Samuel Robinson";
	guestMap[8] = "Amino Soares";
	guestMap[9] = "Luke Smith";
	guestMap[10] = "Dominic Day";
	guestMap[15] = "Sajnas Thayathavalappil";
	guestMap[16] = "Paul Devlin";
	guestMap[29] = "John Lawless";
	guestMap[45] = "Rodger Ross Smith";
	guestMap[46] = "Brodie Wilson";
	guestMap[48] = "Joseph Bin Saris";
	guestMap[49] = "Geordie Osborne";
	guestMap[56] = "Paul Mulveney";
	guestMap[59] = "Brenton Fazulla";
	guestMap[60] = "Josh Vincent";

	// 继续添加其他房间号和客人名字
	return guestMap;
}

string getCurrentDate() {
	// 获取当前时间
	std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);

	// 格式化日期
	char buffer[9];
	std::strftime(buffer, sizeof(buffer), "%d.%m.%y", now);

	return std::string(buffer);
}

string returnGuestName(int roomNumber,const map<int, string>& ref) {
	string name;
	auto it = ref.find(roomNumber);//返回迭代器
	if (it != ref.end()) {
		name = it->second;
	}
	else {
		std::cout << "No Result..." << std::endl;
	}
	return name;
}