#include "data.h";

void ass9() {
	CandyBar* treatspt = new CandyBar[3]{
		{"Mocha Munch", 2.3, 350},
		{"Big Rabbit", 5, 300},
		{"Joy Boy", 4.1, 430}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << treatspt[i].Brand << endl;
		cout << "Weight: " << treatspt[i].weight << "g." << endl;
		cout << "Calories: " << treatspt[i].calories << "kj. \n";
		cout << endl << endl;
	}
}