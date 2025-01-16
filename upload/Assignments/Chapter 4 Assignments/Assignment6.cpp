#include "data.h";

void ass5() {
	CandyBar treats[3]{
		{"Mocha Munch", 2.3, 350},
		{"Big Rabbit", 5, 300},
		{"Joy Boy", 4.1, 430}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << treats[i].Brand<< endl;
		cout << "Weight: " << treats[i].weight << "g." << endl;
		cout << "Calories: " << treats[i].calories << "kj. \n";
		cout << endl << endl;
	}

}