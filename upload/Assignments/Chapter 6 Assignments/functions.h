#pragma once
#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;
const int ArSize = 100;
const int strsize = 20;
const int ass4Size = 5;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;  //0=fullname, 1=title, 2bopname
};

struct donation {
	char name[ArSize] = "none";
	double money;
};