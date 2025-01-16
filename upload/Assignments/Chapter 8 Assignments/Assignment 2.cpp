#include "header.h"
void setCandyBar(CandyBar& candy, const char* ch, const float w, const float cal) {
	strcpy_s(candy.brand, ch);
	candy.weight = w;
	candy.calories = cal;
}

void showCandyBar(CandyBar& candy) {
	cout << "Brand: " << candy.brand << endl;
	cout << "Weight: " << candy.weight << " g" << endl;
	cout << "Calories: " << candy.calories << " kj" << endl;
}

//main
//#include "header.h"
//int main()
//{
//	CandyBar candy;
//	setCandyBar(candy);
//	showCandyBar(candy);
//	setCandyBar(candy, "Witkers", 50, 1200);
//	showCandyBar(candy);
//}
