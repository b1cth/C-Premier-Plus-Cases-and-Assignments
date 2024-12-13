#include "data.h";

void ass6() {
	Pizza pizza1;
	cout << "Please enter the company name: \n";
	cin >> pizza1.CompanyName;
	cout << "Please enter the pizza diameter: \n";
	cin >> pizza1.diameter;
	cout << "Please enter the pizza weight : \n";
	cin >> pizza1.weight;

	cout << "The company name is: " << pizza1.CompanyName << endl;
	cout << "The pizza diameter is: " << pizza1.diameter <<" inch"<< endl;
	cout << "The pizza weight is: " << pizza1.weight <<" g"<< endl;
}