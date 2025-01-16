#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <new>
using namespace std;
const int ArSize = 100;

namespace call {
	static int count = 0;
}
struct CandyBar {
	char brand[ArSize];
	float weight;
	float calories;
};

struct stringy {
	char* str;
	int ct;
};

//Assignment 1 Functions
void printChar(const char* ch, int n = 0);

//Assignment 2 Functions
void setCandyBar(CandyBar& candy, const char* ch = "Millennium Munch",
	const float w = 2.85, const float cal = 350);
void showCandyBar(CandyBar& candy);

//Assignment 3 Functions
void transferToUpper(string& str);

//Assignment 4 Functions
void set(stringy& pt, const char* ch);
void show(const stringy& pt, int n=1);
void show(const char* ch, int n=1);

////Assignment 5 Functions
