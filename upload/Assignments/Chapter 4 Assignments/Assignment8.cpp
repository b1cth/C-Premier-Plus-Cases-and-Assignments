#include "data.h";

void ass8() {
	Pizza *pizza2 = new Pizza;


		cout << "Please enter the pizza diameter: \n";
		cin >> pizza2->diameter;
		cout << "Please enter the company name: \n";
		cin >> pizza2->CompanyName;
		cout << "Please enter the pizza weight : \n";
		cin >> pizza2->weight;
	
	

	cout << "The company name is: " << pizza2->CompanyName << endl;
	cout << "The pizza diameter is: " << pizza2->diameter << " inch" << endl;
	cout << "The pizza weight is: " << pizza2->weight << " g" << endl;
}