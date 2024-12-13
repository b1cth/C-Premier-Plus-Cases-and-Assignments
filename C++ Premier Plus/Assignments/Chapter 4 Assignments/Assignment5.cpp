#include "data.h";
void ass4() {
	using std::cout;
	using std::endl;
	CandyBar snack;
	strcpy_s(snack.Brand, "Mocha Munch");
	snack.weight = 2.3;
	snack.calories = 350;

	cout << "Brand: " << snack.Brand << endl;
	cout << "Weight: " << snack.weight << "g."<<endl;
	cout << "Calories: " << snack.calories << "kj. \n";
}