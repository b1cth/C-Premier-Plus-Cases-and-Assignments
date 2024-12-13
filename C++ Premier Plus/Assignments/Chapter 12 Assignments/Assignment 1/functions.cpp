#include "header.h"
#include <string>
#include <iostream>
Cow::Cow() {
	strcpy_s(name, sizeof(name),"Milk Cow" );
	hobby = new char[strlen("Eat Grass") + 1];
	strcpy_s(hobby, strlen("Eat Grass") + 1, "Eat Grass");
	weight = 300;
}
Cow::Cow(const char* nm, const char* ho, double wt) {
	strcpy_s(name, sizeof(name), nm);
	hobby = new char[strlen(ho) + 1];
	strcpy_s(hobby, strlen(ho) + 1, ho);
	weight = wt;
}
Cow::Cow(const Cow& c) {
	strcpy_s(name, sizeof(name), c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
	weight = c.weight;
}
Cow::~Cow() {
	delete[] hobby;
}
Cow& Cow::operator = (const Cow & c){
	if (this == &c) {
		return *this;
	}
	strcpy_s(name, sizeof(name), c.name);
	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
	weight = c.weight;
}
void Cow::ShowCow() const {
	using std::cout;
	using std::endl;
	cout << "name: " << name << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "weight: " << weight << endl;
}